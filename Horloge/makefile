CC=g++
FLAGS=-Wall
DEFS = ./defs
LIB = ./lib
SRC = ./src
BIN = ./bin

all: $(LIB)/Horloge.o
	@echo "Compilation programme principal"
	$(CC) $(FLAGS) $(SRC)/TestUnitaireHorloge.cpp $(LIB)/Horloge.o -o $(BIN)/TestUnitaireHorloge
	@echo "Compilation terminer"

$(LIB)/Horloge.o : $(SRC)/Horloge.cpp $(DEFS)/Horloge.h 
	@echo "Compilation classe Horloge"
	$(CC) -c $(SRC)/Horloge.cpp -o $@ $(FLAGS) 
