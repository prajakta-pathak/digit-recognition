TARGET=digit.exe
CC=gcc
CFLAGS=-g
OBJECTS=src/convertintoint.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm src/*.o digit.exe -f
