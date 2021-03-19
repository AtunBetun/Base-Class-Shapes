output: main.o shape.o square.o rectangle.o circle.o triangle.o
        g++ main.o shape.o square.o rectangle.o circle.o triangle.o -o output -std=c++11

main.o: main.cpp
        g++ -c -std=c++11 main.cpp

shape.o: shape.cpp shape.h
        g++ -c -std=c++11 shape.cpp
        g++ -c shape.h

square.o: square.cpp square.h
        g++ -c -std=c++11 square.cpp
        g++ -c square.h

rectangle.o: rectangle.cpp rectangle.h
        g++ -c -std=c++11 rectangle.cpp
        g++ -c rectangle.h

circle.o: circle.cpp circle.h
        g++ -c -std=c++11 circle.cpp
        g++ -c circle.h

triangle.o: triangle.cpp triangle.h
        g++ -c -std=c++11 triangle.cpp
        g++ -c triangle.h