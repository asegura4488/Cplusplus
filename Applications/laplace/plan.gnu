clear
set title "Electric Fields for Geometry Two"
set xlabel "x (a.u)"
set ylabel "y (a.u)"
set zlabel "Field"
max=1
dx=0.05
dx2=0.4
dx3=0.6
set xr [0:max+dx]
set yr [0:max+dx]

set label "V=0" at 0.1,max center front
set arrow from dx, dx to 1, dx nohead lt 1 lw 1
set arrow from dx, dx to dx, 1 nohead lt 1 lw 1
set arrow from 1,dx to 1,1 nohead lt 1 lw 1
set arrow from dx,1 to 1,1 nohead lt 1 lw 1

#set label "V=100" at 0.5,0.5 center front
#set arrow from dx2, dx2 to dx3, dx2 nohead lt 1 lw 1
#set arrow from dx3, dx2 to dx3, dx3 nohead lt 1 lw 1
#set arrow from dx3,dx3 to dx2,dx3 nohead lt 1 lw 1
#set arrow from dx2,dx3 to dx2,dx2 nohead lt 1 lw 1

set label "V=+100" at 0.30,0.78 center front
set arrow from 0.30,0.30 to 0.30,0.75 nohead lt 1 lw 5

set label "V=-100" at 0.75,0.78 center front
set arrow from 0.75,0.30 to 0.75,0.75 nohead lt 1 lw 5

#plot  "datos.dat" using 1:2:4:5 with vectors notitle
splot "datos.dat" using 1:2:3 with lines


set size square
set terminal postscript landscape enhanced color dashed lw 1 "Helvetica" 14
set output "laplace.eps"
replot
set terminal x11
set size 1,1


