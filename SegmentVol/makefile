CC=g++
FLAGS=-Wall
DEFS = ./defs
LIB = ./lib
SRC = ./src
BIN = ./bin

all:  $(LIB)/Batterie.o $(LIB)/CameraIR.o $(LIB)/EmetteurRecepteur.o $(LIB)/Etat.o $(LIB)/Horloge.o $(LIB)/I2C.o $(LIB)/Instrument.o  $(LIB)/Mission.o $(LIB)/Ordinateur.o $(LIB)/SegmentSol.o $(LIB)/SegmentVol.o $(LIB)/Temperature.o $(LIB)/TypeAppareil.o $(LIB)/TypeMisEtat.o
	@echo "Compilation programme principal"
	$(CC) $(FLAGS) $(SRC)/TestUnitaireSegmentVol.cpp $(LIB)/Batterie.o $(LIB)/CameraIR.o $(LIB)/EmetteurRecepteur.o $(LIB)/Etat.o $(LIB)/Horloge.o $(LIB)/I2C.o $(LIB)/Instrument.o $(LIB)/Mission.o $(LIB)/Ordinateur.o $(LIB)/SegmentSol.o $(LIB)/SegmentVol.o $(LIB)/Temperature.o $(LIB)/TypeAppareil.o $(LIB)/TypeMisEtat.o -std=c++14 -lpthread  -o $(BIN)/TestUnitaireSegmentVol
	@echo "Compilation terminer"

$(LIB)/Batterie.o : $(SRC)/Batterie.cpp $(DEFS)/Batterie.h 
	@echo "Compilation classe Batterie"
	$(CC) -c $(SRC)/Batterie.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/CameraIR.o : $(SRC)/CameraIR.cpp $(DEFS)/CameraIR.h 
	@echo "Compilation classe CameraIR"
	$(CC) -c $(SRC)/CameraIR.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/EmetteurRecepteur.o : $(SRC)/EmetteurRecepteur.cpp $(DEFS)/EmetteurRecepteur.h 
	@echo "Compilation classe EmetteurRecepteur"
	$(CC) -c $(SRC)/EmetteurRecepteur.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/Etat.o : $(SRC)/Etat.cpp $(DEFS)/Etat.h 
	@echo "Compilation classe Etat"
	$(CC) -c $(SRC)/Etat.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/Horloge.o : $(SRC)/Horloge.cpp $(DEFS)/Horloge.h 
	@echo "Compilation classe Horloge"
	$(CC) -c $(SRC)/Horloge.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/I2C.o : $(SRC)/I2C.cpp $(DEFS)/I2C.h 
	@echo "Compilation classe I2C"
	$(CC) -c $(SRC)/I2C.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/Instrument.o : $(SRC)/Instrument.cpp $(DEFS)/Instrument.h 
	@echo "Compilation classe Instrument"
	$(CC) -c $(SRC)/Instrument.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/Mission.o : $(SRC)/Mission.cpp $(DEFS)/Mission.h 
	@echo "Compilation classe Mission"
	$(CC) -c $(SRC)/Mission.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/Ordinateur.o : $(SRC)/Ordinateur.cpp $(DEFS)/Ordinateur.h 
	@echo "Compilation classe Ordinateur"
	$(CC) -c $(SRC)/Ordinateur.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/SegmentSol.o : $(SRC)/SegmentSol.cpp $(DEFS)/SegmentSol.h 
	@echo "Compilation classe SegmentSol"
	$(CC) -c $(SRC)/SegmentSol.cpp -std=c++14 -lpthread  -o $@ $(FLAGS) 

$(LIB)/SegmentVol.o : $(SRC)/SegmentVol.cpp $(DEFS)/SegmentVol.h 
	@echo "Compilation classe SegmentVol"
	$(CC) -c $(SRC)/SegmentVol.cpp -std=c++14 -lpthread  -o $@ $(FLAGS)

$(LIB)/Temperature.o : $(SRC)/Temperature.cpp $(DEFS)/Temperature.h 
	@echo "Compilation classe Temperature"
	$(CC) -c $(SRC)/Temperature.cpp -std=c++14 -lpthread  -o $@ $(FLAGS)

$(LIB)/TypeAppareil.o : $(SRC)/TypeAppareil.cpp $(DEFS)/TypeAppareil.h 
	@echo "Compilation classe TypeAppareil"
	$(CC) -c $(SRC)/TypeAppareil.cpp -std=c++14 -lpthread -o $@ $(FLAGS)

$(LIB)/TypeMisEtat.o : $(SRC)/TypeMisEtat.cpp $(DEFS)/TypeMisEtat.h 
	@echo "Compilation classe TypeMisEtat"
	$(CC) -c $(SRC)/TypeMisEtat.cpp -std=c++14 -lpthread  -o $@ $(FLAGS)


