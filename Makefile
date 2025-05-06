kilo: kilo.c kilo.h
	$(CC) kilo.c -o kilo -Wall -Wextra -pedantic -std=c99

clean:
	rm -f kilo
