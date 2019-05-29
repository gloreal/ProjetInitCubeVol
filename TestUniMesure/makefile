CC=g++
CCFLAGS=-std=c++11
LDFLAGS=
LLIB=./lib/
LDEFS=./defs/
SOURCES=./src/

all: $(LLIB)CameraIR.o $(LLIB)I2C.o $(LLIB)Instrument.o $(LLIB)Mesure.o
	$(CC) $(SOURCES)TUMesure.cpp $(LLIB)I2C.o $(LLIB)CameraIR.o $(LLIB)Instrument.o $(LLIB)Mesure.o -o TUMesure

$(LLIB)I2C.o: $(SOURCES)I2C.cpp  $(LDEFS)I2C.h
	$(CC) -c $(SOURCES)I2C.cpp -o $@ $(CCFLAGS)

$(LLIB)CameraIR.o: $(SOURCES)CameraIR.cpp  $(LDEFS)CameraIR.h
	$(CC) -c $(SOURCES)CameraIR.cpp -o $@ $(CCFLAGS)

$(LLIB)Instrument.o: $(SOURCES)Instrument.cpp $(LDEFS)Instrument.h
	$(CC) -c $(SOURCES)Instrument.cpp -o $@ $(CCFLAGS)

$(LLIB)Mesure.o: $(SOURCES)Mesure.cpp $(LDEFS)Mesure.h
	$(CC) -c $(SOURCES)Mesure.cpp -o $@ $(CCFLAGS)


clean:
	rm -rf $(LLIB)*.o
mrproper:
	clean rm -rf TUMesure
