CC=g++
CCFLAGS=-std=c++11
LDFLAGS=
LLIB=./lib/
LDEFS=./defs/
SOURCES=./src/

all:  $(LLIB)Status.o
	$(CC) $(SOURCES)TUStatus.cpp $(LLIB)Status.o -o TUStatus

$(LLIB)Status.o: $(SOURCES)Status.cpp $(LDEFS)Status.h
	$(CC) -c $(SOURCES)Status.cpp -o $@ $(CCFLAGS)


clean:
	rm -rf $(LLIB)*.o
mrproper:
	clean rm -rf TUStatus
