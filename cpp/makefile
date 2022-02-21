thetest: calc.o calc_test.o
	g++ calc.o calc_test.o -lgtest -lgtest_main -pthread -o thetest
	
calc.o: calc.cpp calc.hpp
	g++ -c calc.cpp -o calc.o
	
calc_test.o: calc_test.cpp calc.hpp
	g++ -c calc_test.cpp -o calc_test.o

.PHONY: clean
clean:
	rm -f *.o
	rm -f thetest
