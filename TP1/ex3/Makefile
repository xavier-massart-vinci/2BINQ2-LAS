CFLAGS=-std=c17 -pedantic -Wvla -Werror -Wall -D_DEFAULT_SOURCE


secretAgent: secretAgent.o crypt.o cryptPolybe.o cryptMorse.o utils_v1.o
	cc $(CFLAGS) -o secretAgent secretAgent.o crypt.o cryptPolybe.o cryptMorse.o utils_v1.o


utils_v1.o: utils_v1.c utils_v1.h
	cc $(CFLAGS) -c utils_v1.c

crypt.o: crypt.h crypt.c
	cc $(CFLAGS) -c crypt.c

cryptPolybe.o: cryptPolybe.h cryptPolybe.c
	cc $(CFLAGS) -c cryptPolybe.c

cryptMorse.o: cryptMorse.h cryptMorse.c
	cc $(CFLAGS) -c cryptMorse.c

secretAgent.o: secretAgent.c
	cc $(CFLAGS) -c secretAgent.c



clean: 
	rm *.o
	rm secretAgent