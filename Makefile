CXXFLAGS = -Wall -Wextra -std=c++11

all: llp1

release: llp1

debug: CXXFLAGS += -g
debug: llp1

llp1: main.cpp 
	g++ $(CXXFLAGS) main.cpp -o llp1
