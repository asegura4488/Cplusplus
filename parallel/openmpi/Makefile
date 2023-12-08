DIR = .
CXX = g++
CFLAGS = -Wall -fopenmp -lm 

SRCDIR = $(DIR)/src
OBJDIR = $(DIR)/obj
EXE1 = example_1
EXE2 = example_2
EXE3 = trapecio

#vpath %.h $(INCDIR) 

#OBJECTS:=$(wildcard $(OBJDIR)/*.o)
OBJECT1 = $(OBJDIR)/example_1.o  
OBJECT2 = $(OBJDIR)/example_2.o  
OBJECT3 = $(OBJDIR)/trapecio.o  

all: $(EXE1) $(EXE2) $(EXE3)

$(EXE3): $(OBJECT3)
	$(CXX) $(CFLAGS) -o $@ $^

$(EXE2): $(OBJECT2)
	$(CXX) $(CFLAGS) -o $@ $^

$(EXE1): $(OBJECT1)
	$(CXX) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp  
	$(CXX) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	@rm $(EXE1) $(EXE2) $(EXE3) $(OBJDIR)/*

