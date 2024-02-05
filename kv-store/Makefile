CC = g++
 
CFLAGS  = -std=c++0x -Wall 
 
OBJECTS = kvstore.o hashmap.o
 
main: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ 
 
$(OBJECTS): hashmap.cpp

