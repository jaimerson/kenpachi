#include<iostream>
#include "engine.h"

using namespace std;

void Kenpachi::Engine::setup(){
  ALLEGRO_DISPLAY *display = NULL;

  if(!al_init()){
    cout << "Error initializing allegro!" << endl;
    exit(1);
  }

  this->display = al_create_display(WINDOW_WIDTH, WINDOW_HEIGHT);
}

void Kenpachi::Engine::run(){
  al_clear_to_color(al_map_rgb(24, 100, 200));

  al_flip_display();
  al_rest(3);
}

int Kenpachi::Engine::teardown(){
  al_destroy_display(this->display);
  return 0;
}
