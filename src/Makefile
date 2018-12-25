all: integral

integral: main.o limit_sum.o eval.o
	gcc -lm -o integral main.o limit_sum.o eval.o

main.o: main.c
	gcc -c main.c

limit_sum.o: limit_sum.c
	gcc -c limit_sum.c

eval.o: eval.c
	gcc -c eval.c	