prog :
	g++ -c main.cpp basic_movement.cpp
	g++ main.o basic_movement.o -o bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./bin/sfml-app
