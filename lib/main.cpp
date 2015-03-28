#include<iostream>
#include "kenpachi/engine.h"

using namespace std;

int main(){
  Kenpachi::Engine engine;

  engine.setup();
  engine.run();

  return engine.teardown();
}
