# Assignments 1
## by Kfir Goldfarb

this assignments contains basicMath.c and power.c files that implements the myMath.h file function,
also this program contains main.c that will get from the user 3 input x and will calculate this three function and print the results:
1. e^x + x^3 - 2
2. 3x + 2x^2
3. (4x^3) / 5 - 2x

this program conatins a Makefile file with the commands:
1. mymaths - the compiler will create a static library that will contains the basicMath.c and power.c functions contents, the library will called libmyMath.a
2. mymathd - the compiler will create a dynamic library that will contains the basicMath.c and power.c functions contents, the library will called libmyMath.so
3. mains - the compiler will create a mains file like main that will use the libmyMath.a library
4. maind - the compiler will create a maind file like main that will use the libmyMath.so library
5. all - compile program
6. clean - delete all .o .a .so .out and execute files