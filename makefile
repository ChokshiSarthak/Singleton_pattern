CCFLAGS = g++ -Wall -std=c++11
LDFLAGS = -lpthread
SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

#$(info CCFLAGS are $(CCFLAGS))

singleton: $(OBJ)
	$(CCFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cc
	$(CCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	rm -f $(OBJ)


