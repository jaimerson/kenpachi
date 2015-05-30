dist/game: dist/main.o dist/game.o dist/engine.o dist/renderer.o dist/player.o dist/game_object.o
	g++ $^ -o dist/game -lallegro -lallegro_primitives

dist/main.o: lib/main.cpp
	g++ -c lib/main.cpp -o dist/main.o
	
dist/game.o: lib/kenpachi/game.h lib/kenpachi/game.cpp
	g++ -c lib/kenpachi/game.cpp -o dist/game.o

dist/engine.o: lib/kenpachi/engine.h lib/kenpachi/engine.cpp
	g++ -c lib/kenpachi/engine.cpp -o dist/engine.o -lallegro

dist/event_listener.o: lib/kenpachi/event_listener.h
	g++ -c lib/kenpachi/event_listener.cpp -o dist/event_listener.o

dist/renderer.o: lib/kenpachi/renderer.h lib/kenpachi/renderer.cpp
	g++ -c lib/kenpachi/renderer.cpp -o dist/renderer.o

dist/player.o: lib/kenpachi/player.h lib/kenpachi/player.cpp dist/game_object.o
	g++ -c lib/kenpachi/player.cpp -o dist/player.o

dist/game_object.o: lib/kenpachi/game_object.h lib/kenpachi/game_object.cpp
	g++ -c lib/kenpachi/game_object.cpp -o dist/game_object.o

dist/audio_player.o: lib/kenpachi/audio_player.h lib/kenpachi/audio_player.cpp
	g++ -c lib/kenpachi/audio_player.cpp -o dist/audio_player.o

run: dist/game
	./dist/game
