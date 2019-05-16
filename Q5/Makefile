CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o ctext.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
ctext.o: ctext.h ctext.cpp
	$(CXX) $(CXXFLAGS) ctext.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
