DIR = .
CXX = g++
CFLAGS = -std=c++11 -Wall -I$(INCDIR)

SRCDIR = $(DIR)/src
INCDIR = $(DIR)/inc
OBJDIR = $(DIR)/obj
EXE = Message

#vpath %.h $(INCDIR) 

#OBJECTS:=$(wildcard $(OBJDIR)/*.o)
OBJECT = $(OBJDIR)/main.o $(OBJDIR)/message.o  

all: $(EXE)

$(EXE): $(OBJECT)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp  
	$(CXX) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	@rm $(EXE) $(OBJDIR)/*
