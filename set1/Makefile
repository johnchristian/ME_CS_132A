CXX = g++
CXXFLAGS = -Wall -Wextra -ansi -pedantic

.PHONY: all clean

all: parta

parta: obj/mecs132_1a.o
	$(CXX) $(CXXFLAGS) $^ -o $@ 

obj/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	rm -f obj/*.o parta
