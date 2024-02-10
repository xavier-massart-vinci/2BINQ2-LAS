CFLAGS=-std=c17 -pedantic -Wvla -Werror -Wall -D_DEFAULT_SOURCE

main: main.o utils_v1.o biblio.o
	cc $(CFLAGS) -o main main.o utils_v1.o biblio.o



main.o: main.c
	cc $(CFLAGS) -c main.c

utils_v1.o: utils_v1.c utils_v1.h
	cc $(CFLAGS) -c utils_v1.c

biblio.o: biblio.c biblio.h utils_v1.c utils_v1.h
	cc $(CFLAGS) -c biblio.c


clean: 
	rm *.o
	rm main
