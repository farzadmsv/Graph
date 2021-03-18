CXX = g++ 
CXX_FLGAS = -std=c++11 
TARGET = main 
OBJECTS = graph.o main.o 

all: $(OBJECTS) $(TARGET)
graph.o: src/graph.cpp inc/graph.h
	$(CXX) $(CXX_FLGAS) src/graph.cpp -c 
main.o: Makefile main.cpp 
	$(CXX) $(CXX_FLGAS) main.cpp -c 
$(TARGET): graph.o main.o 
	$(CXX) $(CXX_FLGAS) $(OBJECTS) -o main 
clean:
	rm $(OBJECTS) $(TARGET)