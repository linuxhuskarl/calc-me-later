CPP_SOURCES= \
src/main.cpp \
src/Calc.cpp

CPP_INCLUDES= \
-Iinclude

all: calc

calc:
	g++ ${CPP_INCLUDES} ${CPP_SOURCES} -o $@

clean:
	rm calc
