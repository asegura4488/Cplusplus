#! /bin/tcsh -f

g++ -o CaidaLibre CaidaLibre.C

./CaidaLibre

gnuplot CaidaLibre.gp

gv DataCaidaLibre.eps &
