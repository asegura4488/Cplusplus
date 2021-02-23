DIR = .
CXX = g++
CFLAGS = -std=c++11

SRCDIR = $(DIR)/src
OBJDIR = $(DIR)/obj
EXE = struct

#OBJECTS:=$(wildcard $(OBJDIR)/*.o)
OBJECT = $(OBJDIR)/struct.o

all: $(EXE)

$(EXE): $(OBJECT)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cxx
	$(CXX) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	@rm $(EXE) $(OBJDIR)/*
