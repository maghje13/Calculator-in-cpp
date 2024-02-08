all: final clean
final: Calculator.o
  @echo "Building"
  @g++ Calculator.o -o Calculator
Calculator.o: Calculator.cpp
  @g++ -c Calculator.cpp
clean:
  @echo "Cleaning up"
  rm Calculator.o
