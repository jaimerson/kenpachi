#include "iostream"
#include "renderer.h"

void Kenpachi::Renderer::render(){
  al_clear_to_color(al_map_rgb(100,0,200));
  for(std::vector<Drawable*>::iterator it = objects.begin(); it != objects.end(); it++){
    (*it)->draw();
  }
}

void Kenpachi::Renderer::add_to_render_queue(Drawable *drawable){
  objects.push_back(drawable);
}
