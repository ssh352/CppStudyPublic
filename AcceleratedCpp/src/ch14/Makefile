#CC = g++ -std=c++11
CC = g++ -std=c++1y
CFLAGS =  -c -Wall -DDEBUG -g
LDFLAGS =

P1_BASE = ch14_1_test
P2_BASE = ch14_2_test_Ptr

#COMMON_SOURCES = ch04_p3_median.cpp
COMMON_SOURCES =

P1_SOURCES = $(P1_BASE).cpp
P2_SOURCES = $(P2_BASE).cpp


COMMON_OBJECTS = $(COMMON_SOURCES:.cpp=.o)
P1_OBJECTS = $(P1_SOURCES:.cpp=.o)
P2_OBJECTS = $(P2_SOURCES:.cpp=.o)


P1_EXECUTABLE = $(P1_BASE)
P2_EXECUTABLE = $(P2_BASE)


#.PHONY: all target tests

all: $(P1_EXECUTABLE) $(P2_EXECUTABLE)

#P1: $(P1_EXECUTABLE)

#P2: $(P2_EXECUTABLE)

$(P1_EXECUTABLE): $(COMMON_OBJECTS) $(P1_OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

$(P2_EXECUTABLE): $(COMMON_OBJECTS) $(P2_OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(P1_EXECUTABLE) $(P2_EXECUTABLE)

