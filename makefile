index:
	gcc	-c	header.c	-o	header.o
	gcc	-c	main.c	-o	main.o
	gcc	header.o	main.o	-o	ConversorBases

	rm	*.o
