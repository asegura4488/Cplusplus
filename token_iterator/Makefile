DIR = .
CXX = g++
CXFLAGS = -Wall -std=c++11 
LDFLAGS = -L$(BOOSTLIB)
BOFLAGS = -I$(BOOSTDIR)

BOOSTDIR = $(BOOST_ROOT)
BOOSTLIB = $(BOOSTDIR)/libs
SRCDIR = $(DIR)/src
OBJDIR = $(DIR)/obj
EXE = token_iterator

OBJECTS = $(OBJDIR)/token_iterator.o

all: $(EXE)

$(EXE): $(OBJECTS)
		$(CXX) -o $@ $^ 

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
		$(CXX) $(CXFLAGS) $(BOFLAGS) $(LDFLAGS) -c $< -o $@ 

.PHONY: clean

clean:
		@rm $(EXE) $(OBJDIR)/*	
