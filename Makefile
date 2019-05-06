prog : main.o basic_movement.o
	g++ bin/main.o bin/basic_movement.o -o bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./bin/sfml-app

main.o:
	g++ -c -main.cpp -o bin/main.o

basic_movement.o:
	g++ -c -basic_movement.cpp -o bin/basic_movement.o
