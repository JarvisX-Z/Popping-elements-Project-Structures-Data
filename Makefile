all: main

CXX = clang++
override CXXFLAGS += -g -Wall -O2

SRCS = main.cpp

main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o main

clean:
	rm -f main
