all: ./a.out

compRun:
	g++  main.cpp  -o r.out

compTest:
	g++ -std=c++11 test.cpp book.cpp -o a.out

test: clean compTest; ./a.out

run: clean compRun; ./r.out

clean:
	rm -f *.out