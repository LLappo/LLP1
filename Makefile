CXXFLAGS = -Wall -Wextra

all: llp1

release: llp1

debug: CXXFLAGS += -g
debug: llp1

llp1: main.cpp 
	g++ $(CXXFLAGS) main.cpp -o llp1
