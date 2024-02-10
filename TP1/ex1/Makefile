CFLAGS=-std=c17 -pedantic -Wvla -Werror -Wall -D_DEFAULT_SOURCE


all: encrypt decrypt

encrypt.o: encrypt.c crypt.h utils_v1.h
	cc $(CFLAGS) -c encrypt.cs

decrypt.o: decrypt.c crypt.h utils_v1.h
	cc $(CFLAGS) -c decrypt.c

crypt.o: crypt.c crypt.h
	cc $(CFLAGS) -c crypt.c

utils_v1.o: utils_v1.c utils_v1.h
	cc $(CFLAGS) -c utils_v1.c





encrypt: encrypt.o utils_v1.o crypt.o
	cc $(CFLAGS) -o encrypt encrypt.o utils_v1.o crypt.o

decrypt: decrypt.o utils_v1.o crypt.o
	cc $(CFLAGS) -o decrypt decrypt.o utils_v1.o crypt.o





clean: 
	rm *.o
	rm encrypt decrypt
