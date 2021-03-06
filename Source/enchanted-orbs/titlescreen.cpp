#include "Arduino.h"
#include <SPI.h>
#include <GD.h>

#include "audio.h"
#include "common.h"
#include "graphics.h"
#include "nescontroller.h"
#include "screenmode.h"
#include "titlescreen.h"

uint8_t current_midifreq;
const uint16_t offset1 = 2195;
const uint16_t offset2 = 1719;

void initialize_title_screen(void) 
{
  load_background(title_screen);  
  frame_counter = 0;
}

mode run_title_screen(void)
{
  current_midifreq = 96;
  play_melody(titlescreen_intro_melody, sizeof(titlescreen_intro_melody), title_screen_audiocallback);
  clear_audio();
  sawtooth_wave(current_midifreq);
  fade_to_black(title_screen_fadecallback);
  clear_audio();
  return game_screen;
}
  
void pulse_press_start(void) 
{
  frame_counter++;
  if (frame_counter == 0x40) 
    GD.copy(RAM_PIC + offset1, titlescreen_pic + offset2 - 16, 12);
  if (frame_counter == 0x80)
  {
    GD.copy(RAM_PIC + offset1, titlescreen_pic + offset2, 12);
    frame_counter = 0;
  }
}

bool title_screen_audiocallback(void)
{
  pulse_press_start();
  byte nes_state = read_nes_controller(controller1);
  return (!bitRead(nes_state, NES_START_BUTTON));
}

bool title_screen_fadecallback(void)
{
  current_midifreq -= 1;
  sawtooth_wave(current_midifreq);
  return true;
}

