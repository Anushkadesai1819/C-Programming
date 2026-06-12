library: main.o sum.o mul.o div.o minus.o
	cc sum.o main.o mul.o div.o minus.o -o OFILE
sum.o: sum.c sum.h
	cc -c sum.c
main.o: main.c calculator.h 
	cc -c main.c
mul.o: mul.c mul.h
	cc -c mul.c
div.o: div.c div.h
	cc -c div.c
minus.o: minus.c minus.h
	cc -c minus.c
clean: 
	rm *.o OFILE
