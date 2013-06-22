TARGET=digit.exe
CC=gcc
CFLAGS=-g
OBJECTS=src/main.o src/digit.o src/knn.o src/training_data_divide.o src/ave_construct.o src/data_set_divide.o src/create_training_data.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm src/*.o digit.exe -f
	mv data/data.txt data/data
	rm data/*.txt
	mv data/data data/data.txt
