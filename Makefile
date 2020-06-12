prog: Main.o ennemi.o 
	gcc Main.o ennemi.o   -lSDL -lSDL_image -lSDL_ttf -o prog
Main.o:Main.c
	gcc -lSDL -lSDL_image -lSDL_ttf -c Main.c -w

ennemi.o:ennemi.c
	gcc -lSDL -lSDL_image -lSDL_ttf -c ennemi.c -w


