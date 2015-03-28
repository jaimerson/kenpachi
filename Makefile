all: dist/main.o dist/engine.o
	g++ dist/main.o dist/engine.o -o dist/game -lallegro

dist/main.o: lib/main.cpp
	g++ -c lib/main.cpp -o dist/main.o
	
dist/engine.o:
	g++ -c lib/kenpachi/engine.cpp -o dist/engine.o

run: all
	./dist/game
