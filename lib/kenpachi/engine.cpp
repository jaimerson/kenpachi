#include<iostream>
#include "engine.h"

using namespace std;

void Kenpachi::Engine::setup(){
  if(!al_init()){
    cout << "Error initializing allegro!" << endl;
    exit(1);
  }

  this->display = al_create_display(WINDOW_WIDTH, WINDOW_HEIGHT);
  this->timer = al_create_timer(1.0 / FPS);
  this->event_queue = al_create_event_queue();

  set_event_sources();
}

void Kenpachi::Engine::set_event_sources(){
  al_register_event_source(this->event_queue, al_get_display_event_source(this->display));
  al_register_event_source(this->event_queue, al_get_timer_event_source(this->timer));
}

void Kenpachi::Engine::run(){
  al_start_timer(this->timer);
  while(true){
    ALLEGRO_EVENT event;
    al_wait_for_event(this->event_queue, &event);

    if(event.type == ALLEGRO_EVENT_TIMER) {
      redraw = true;
    }
    else if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
      break;
    }

    if(redraw && al_is_event_queue_empty(this->event_queue)) {
      redraw = false;
      al_clear_to_color(al_map_rgb(150,0,0));
      al_flip_display();
    }
  }
}

int Kenpachi::Engine::teardown(){
  al_destroy_display(this->display);
  al_destroy_timer(this->timer);
  al_destroy_event_queue(this->event_queue);
  return 0;
}
