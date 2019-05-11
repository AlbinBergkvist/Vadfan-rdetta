prog: main.o basic_movement.o draw_objects.o
	g++ bin/main.o bin/basic_movement.o bin/draw_objects.o -o bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./bin/sfml-app

main.o:
	g++ -c main.cpp -o bin/main.o

basic_movement.o:
	g++ -c basic_movement.cpp -o bin/basic_movement.o

draw_objects.o:
	g++ -c draw_objects.cpp -o bin/draw_objects.o
