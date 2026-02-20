CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lcs50

.PHONY: all clean

all: Q2 Q3

Q2: Q2.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

Q3: Q3.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f Q2 Q3
