clear
set title "Electric Potential for Geometry Two"
set xlabel "x (a.u)"
set ylabel "y (a.u)"
set zlabel "Potential"

max=1
set xr [0:max]
set yr [0:max]
set zeroaxis

# activate these two lines are for 2d viewing
#unset surface 
#set view 0,0,1,1 

# these two lines are for contours
set contour base  #
set cntrparam levels discrete -5,-20,-40,-60,-80,-100,5,20,40,60,80

#splot "lapgs-SOR.dat" using 1:2:3 w l notitle
splot "datos.dat" using 1:2:3 w l notitle
set contour base
set term x11

set size square
set terminal postscript landscape enhanced color dashed lw 1 "Helvetica" 14
set output "laplace1.eps"
replot
set terminal x11
set size 1,1
