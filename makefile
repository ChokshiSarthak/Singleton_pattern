#CC =  -Wall
CC = g++ -Wall
CCFLAGS = -std=c++11
LDFLAGS = -lpthread
SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

#$(info CCFLAGS are $(CCFLAGS))

singleton: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cc
	$(CC) $(CCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	rm -f $(OBJ)


