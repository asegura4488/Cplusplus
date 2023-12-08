DIR = .
CXX = g++
CFLAGS = -Wall -std=c++11 -pthread 

SRCDIR = $(DIR)/src
OBJDIR = $(DIR)/obj
EXE1 = threads

#vpath %.h $(INCDIR) 

#OBJECTS:=$(wildcard $(OBJDIR)/*.o)
OBJECT1 = $(OBJDIR)/threads.o  

all: $(EXE1) 


$(EXE1): $(OBJECT1)
	$(CXX) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp  
	$(CXX) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	@rm $(EXE1) $(OBJDIR)/*

