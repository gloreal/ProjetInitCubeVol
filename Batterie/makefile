CC=g++
FLAGS=-Wall
DEFS = ./defs
LIB = ./lib
SRC = ./src
BIN = ./bin

all: $(LIB)/Batterie.o $(LIB)/I2C.o
	@echo "Compilation programme principal"
	$(CC) $(FLAGS) $(SRC)/TestUnitaireBatterie.cpp $(LIB)/Batterie.o $(LIB)/I2C.o -o $(BIN)/TestUnitaireBatterie
	@echo "Compilation terminer"

$(LIB)/Batterie.o : $(SRC)/Batterie.cpp $(DEFS)/Batterie.h 
	@echo "Compilation classe Batterie"
	$(CC) -c $(SRC)/Batterie.cpp -o $@ $(FLAGS) 

$(LIB)/I2C.o : $(SRC)/I2C.cpp $(DEFS)/I2C.h 
	@echo "Compilation classe I2C"
	$(CC) -c $(SRC)/I2C.cpp -o $@ $(FLAGS) 
