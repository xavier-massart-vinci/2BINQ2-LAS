CFLAGS=-std=c17 -pedantic -Wvla -Werror -Wall -D_DEFAULT_SOURCE


all: encrypt decrypt encryptPolybe decryptPolybe

encrypt.o: encrypt.c crypt.h utils_v1.h
	cc $(CFLAGS) -c encrypt.c

decrypt.o: decrypt.c crypt.h utils_v1.h
	cc $(CFLAGS) -c decrypt.c

crypt.o: crypt.c crypt.h
	cc $(CFLAGS) -c crypt.c

utils_v1.o: utils_v1.c utils_v1.h
	cc $(CFLAGS) -c utils_v1.c

cryptPolybe.o: cryptPolybe.c cryptPolybe.h
	cc $(CFLAGS) -c cryptPolybe.c

encryptPolybe.o: encryptPolybe.c utils_v1.h cryptPolybe.h
	cc $(CFLAGS) -c encryptPolybe.c

decryptPolybe.o: decryptPolybe.c utils_v1.h  cryptPolybe.h
	cc $(CFLAGS) -c decryptPolybe.c





encrypt: encrypt.o utils_v1.o crypt.o
	cc $(CFLAGS) -o encrypt encrypt.o utils_v1.o crypt.o

decrypt: decrypt.o utils_v1.o crypt.o
	cc $(CFLAGS) -o decrypt decrypt.o utils_v1.o crypt.o

encryptPolybe: encryptPolybe.o cryptPolybe.o
	cc $(CFLAGS) -o encryptPolybe encryptPolybe.o utils_v1.o cryptPolybe.o

decryptPolybe: decryptPolybe.o cryptPolybe.o
	cc $(CFLAGS) -o decryptPolybe decryptPolybe.o  utils_v1.o cryptPolybe.o


clean: 
	rm *.o
	rm encrypt decrypt encryptPolybe decryptPolybe