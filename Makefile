prog :
	g++ -o bin/main.o -c main.cpp
	g++ bin/main.o -o bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./bin/sfml-app
