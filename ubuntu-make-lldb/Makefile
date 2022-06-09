TARGET = a.out

CXX = clang++
CXXFLAGS = -O0 -g -std=c++11 # for Debug
#CXXFLAGS = -W -Wall -O3 -std=c++11 # for Release
LDFLAGS =
RM = rm -rf
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

LIBS =
ifneq ($(LIBS),)
CXXFLAGS += $(shell pkg-config --cflags $(LIBS))
LDFLAGS += $(shell pkg-config --libs $(LIBS))
endif

.PHONY: all clean

all: bin/$(TARGET)

bin/$(TARGET): $(OBJS)
	mkdir -p bin
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

clean:
	$(RM) $(OBJS) bin/$(TARGET)
	$(RM) bin