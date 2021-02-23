######################
### Edit this part ###
######################

ROOTSYS         = /usr/local/root
ROOTSYS_INC     = /usr/local/root/include
ROOTSYS_LIB     = /usr/local/root/lib
ROOTSYS_BIN     = /usr/local/root/bin	
CXX           = g++
LD            = g++

#############################
### Do NOT edit this part ###
#############################

CXXFLAGS      = -O -Wall -qnoro -qnoroconst -qmaxmem=-1 -I$(ROOTSYS_INC)
LDFLAGS       = -g
ROOTLIBS      = $(shell root-config --libs)
#ROOTLIBS      = -L$(ROOTSYS)/lib -lRoot -lCint
LIBS          = $(ROOTLIBS) -lm
LIBSALL       = $(ROOTLIBS) -lXm -lXt -lX11 -lm -lPW -lcurses
 

calculopi.C:  calculopi.o
	$(LD) $(LDFLAGS) calculopi.o $(LIBS) -o calculopi 
 
.C.o:
	$(CXX) $(CXXFLAGS) -c $<

