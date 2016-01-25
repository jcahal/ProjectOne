all: p1

hello: main.o TeamStats.o
    g++ main.o TeamStats.o -o p1

main.o: main.cpp
    g++ -c main.cpp

TeamStats.o: TeamStats.cpp
    g++ -c TeamStats.cpp
    
clean:
    rm *o p1
