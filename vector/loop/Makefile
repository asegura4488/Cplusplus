DIR = .
CXX = g++

SRCDIR = $(DIR)/src
OBJDIR = $(DIR)/obj
EXE = loop

#OBJECT = $(wildcard $(OBJDIR)/*.o)
OBJECTS = $(OBJDIR)/loop.o

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cxx
	$(CXX) -c $< -o $@

.PHONY: clean

clean:
	@rm $(EXE) $(OBJDIR)/*
