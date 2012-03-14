# Makefile

# Name der resultierenden Binärdatei
EXECUTABLE:=hub

# verwendeter Compiler
CC:=g++

# Compiler-Optionen
CFLAGS:=-Wall -c -g

# Linker-Optionen
LDFLAGS:=

# Regulärer Ausdruck für Quelldateien
SOURCES:=$(wildcard *.cpp)

# Regulärer Ausdruck für Objectdateien
OBJECTS:=$(patsubst %.cpp, %.o, $(SOURCES))

all: $(OBJECTS) $(EXECUTABLE)
#	rm $(OBJECTS)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFlAGS) $(OBJECTS) -o $@

#$(OBJECTS): $(SOURCES)
#	$(CC) $(CFLAGS) $*.cpp -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $<

.PHONY: clean
clean:
	rm -v $(OBJECTS) $(EXECUTABLE)
