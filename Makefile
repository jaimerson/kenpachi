dist/game: dist/*.o
	g++ $^ -o dist/game -lallegro

dist/main.o: lib/main.cpp
	g++ -c lib/main.cpp -o dist/main.o
	
dist/game.o: lib/kenpachi/game.h lib/kenpachi/game.cpp
	g++ -c lib/kenpachi/game.cpp -o dist/game.o

dist/engine.o: lib/kenpachi/engine.h lib/kenpachi/engine.cpp
	g++ -c lib/kenpachi/engine.cpp -o dist/engine.o

dist/event_listener.o: lib/kenpachi/event_listener.h lib/kenpachi/event_listener.cpp
	g++ -c lib/kenpachi/event_listener.cpp -o dist/event_listener.o

dist/renderer.o: lib/kenpachi/renderer.h lib/kenpachi/renderer.cpp
	g++ -c lib/kenpachi/renderer.cpp -o dist/renderer.o

dist/audio_player.o: lib/kenpachi/audio_player.h lib/kenpachi/audio_player.cpp
	g++ -c lib/kenpachi/audio_player.cpp -o dist/audio_player.o

run: dist/game
	./dist/game
