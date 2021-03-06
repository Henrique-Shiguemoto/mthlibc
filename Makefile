CC=gcc
BIN=main
FLAGS=-Wall -Wextra -g

main: main.o mthlib.o
	$(CC) $(FLAGS) -o $(BIN) main.c mthlib.c

main.o: main.c defines.h
	$(CC) -c main.c

mthlib.o: mthlib.c mthlib.h defines.h
	$(CC) -c mthlib.c

clean:
	del *.o *.exe
	cls