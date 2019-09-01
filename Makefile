CXXFLAGS=-g
all: hello hello.md
clean:
	rm -f *.o hello hello.md
hello: hello.cpp
hello.md: hello
	./hello > hello.md

