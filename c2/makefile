thetest: calc.o calc_test.o
	g++ calc.o calc_test.o -lgtest -lgtest_main -pthread -o thetest
	
calc.o: calc.c calc.h
	g++ -c calc.c -o calc.o
	
calc_test.o: calc_test.cpp calc.h
	g++ -c calc_test.cpp -o calc_test.o

.PHONY: clean
clean:
	rm -f *.o
	rm -f thetest
