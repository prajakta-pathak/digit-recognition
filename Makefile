TARGET=digit.exe
CC=gcc
CFLAGS=-g
OBJECTS=src/main.o src/digit.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm src/*.o digit.exe -f
