
# variables
CC = gcc
WGC = -Wall -g -c

# make static library called libmyMath.a
mymaths: libmyMath.a	
libmyMath.a: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o	

# make dynamic library called libmyMath.so
mymathd: libmyMath.so
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

# mains and maind
mains: main.o libmyMath.a
	$(CC) -Wall -g -o mains main.o libmyMath.a

maind: main.o libmyMath.so
	$(CC) -Wall -g -o maind main.o ./libmyMath.so


# all - compile program (compile only files that have changed)
all: main

main: main.o basicMath.o power.o
	$(CC) -Wall basicMath.o power.o main.o -o main

main.o: main.c myMath.h
	$(CC) $(WGC) main.c

basicMath.o: basicMath.c
	$(CC) $(WGC) basicMath.c

power.o: power.c
	$(CC) $(WGC) power.c

# removing all .o, .out and main (exeute) files
clean:
	rm -f *.o *.out *.a *.so main mains maind