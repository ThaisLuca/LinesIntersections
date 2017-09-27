####################### Makefile ###########################

all: lineIntersection
lineIntersection: Node.o AVL.o addToSweepStructVector.o or2.o properIntersect.o sweepLine.o reshape.o renderScene.o init.o changeSize.o checkIntersectionsNaive.o findIntersection.o mouseFunc.o mouseDrag.o main.o -lGL -lGLU -lglut
	g++ -o lineIntersection Node.o AVL.o addToSweepStructVector.o  or2.o properIntersect.o sweepLine.o reshape.o renderScene.o init.o changeSize.o checkIntersectionsNaive.o findIntersection.o  mouseFunc.o mouseDrag.o main.o -lGL -lGLU -lglut

Node.o: Node.cpp
	g++ -o Node.o -c Node.cpp -W -Wall -ansi -pedantic

AVL.o: AVL.cpp
	g++ -o AVL.o -c AVL.cpp -W -Wall -ansi -pedantic

addToSweepStructVector.o: addToSweepStructVector.cpp
	g++ -o addToSweepStructVector.o -c addToSweepStructVector.cpp -W -Wall -ansi -pedantic

sweepLine.o: sweepLine.cpp
	g++ -o sweepLine.o -c sweepLine.cpp -W -Wall -ansi -pedantic

checkIntersectionsNaive.o: checkIntersectionsNaive.cpp
	g++ -o checkIntersectionsNaive.o -c checkIntersectionsNaive.cpp -W -Wall -ansi -pedantic

findIntersection.o: findIntersection.cpp
	g++ -o findIntersection.o -c findIntersection.cpp -W -Wall -ansi -pedantic

properIntersect.o: properIntersect.cpp
	g++ -o properIntersect.o -c properIntersect.cpp -W -Wall -ansi -pedantic

or2.o: or2.cpp
	g++ -o or2.o -c or2.cpp -W -Wall -ansi -pedantic

reshape.o: reshape.cpp
	g++ -o reshape.o -c reshape.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

renderScene.o: renderScene.cpp
	g++ -o renderScene.o -c renderScene.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

init.o: init.cpp
	g++ -o init.o -c init.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

changeSize.o: changeSize.cpp
	g++ -o changeSize.o -c changeSize.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

mouseFunc.o: mouseFunc.cpp
	g++ -o mouseFunc.o -c mouseFunc.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

mouseDrag.o: mouseDrag.cpp
	g++ -o mouseDrag.o -c mouseDrag.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall -lGL -lGLU -lglut -ansi -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lineIntersection
