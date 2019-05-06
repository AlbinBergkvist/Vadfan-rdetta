prog :
	g++ -c -main.cpp basic_movement.cpp o bin/$@
	g++ bin/main.o bin/basic_movement.o -o bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./bin/sfml-app
