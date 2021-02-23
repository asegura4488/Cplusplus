# multiple plots. produces ps file. no window popup.

set grid
clear
#set size 1.0, 1.0
#set origin 0.0, 0.0
#set terminal postscript landscape enhanced color dashed lw 1 "Helvetica" 14
set output "DataCaidaLibre.eps"
set terminal postscript landscape enhanced color dashed lw 1 "Helvetica" 14
#set term x11;

set multiplot 

set size 0.5,1.0
set origin 0.0, 0.0
set title "Caida Libre"
set xlabel "tiempo (s) "
set ylabel "Posicion (m) "
plot "DatosCaidaLibre.dat" using 1:2 title "y=y0+v0t-1/2gt^2" with lines

#reset
set grid
set size 0.5,1.0
set origin 0.5, 0.0
set title "Caida Libre"
set xlabel "tiempo (s) "
set ylabel "Velocidad (m/s) "
# plot "DatosCaidaLibre.dat" using 1:3 title "Exacto" with lines,\
 #    "DatosCaidaLibre.dat" using 1:4 title "Aproximado" with lines

unset multiplot

#pause -1 "Hit any key to continue"
