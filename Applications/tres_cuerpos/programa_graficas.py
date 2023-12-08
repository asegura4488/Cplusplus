import numpy as np
import matplotlib.pyplot as plt

d = np.loadtxt("salida_1.dat", skiprows=2,  unpack=True)
e = np.loadtxt("salida_2.dat", skiprows=2,  unpack=True)
f = np.loadtxt("salida_3.dat", skiprows=2,  unpack=True)
g = np.loadtxt("salida_4.dat", skiprows=2,  unpack=True)
h = np.loadtxt("salida_5.dat", skiprows=2,  unpack=True)

dato0 = d[5]
dato1 = d[6]
dato2 = d[7]
dato3 = d[8]

dato5 = e[5]
dato6 = e[6]
dato7 = e[7]
dato8 = e[8]

dato9 = f[5]
dato10 = f[6]
dato11 = f[7]
dato12 = f[8]

dato13 = g[5]
dato14 = g[6]
dato15 = g[7]
dato16 = g[8]

dato17 = h[0]
dato18 = h[1]
dato19 = h[2]

#grafica 1
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-3.2, 3.2)
plt.ylim(-2.5, 2.5)
plt.scatter(dato0,dato1,s) # One plot

plt.title(u"Metodo Runge Kutta 4th (caso1)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("runge4(caso1).png")
plt.close()


#grafica 2
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-3.2, 3.2)
plt.ylim(-2.5, 2.5)
plt.scatter(dato2,dato3,s) # One plot

plt.title(u"Integrador simplectico 4th (caso1)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso1).png")
plt.close()

#grafica 3

s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-2.9, -0.75)
plt.ylim(-0.75, 0.75)
plt.scatter(dato0,dato1,s) # One plot

plt.title(u"Zoom Runge Kutta (caso 1)")
plt.xlabel("$q_{3}$")
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("Zoom1 Runge Kutta4(caso1).png")
plt.close()

#grafica 4

s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-2.9, -0.75)
plt.ylim(-0.75, 0.75)
plt.scatter(dato2,dato3,s) # One plot

plt.title(u"Zoom Simplectico (caso 1)")
plt.xlabel("$q_{3}$")
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("Zoom1 Simplectico(caso1).png")
plt.close()

#grafica 5

s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-0.25, 0.75)
plt.ylim(-0.35, 0.35)
plt.scatter(dato0,dato1,s) # One plot

plt.title(u"Zoom 2 Runge Kutta (caso 1)")
plt.xlabel("$q_{3}$")
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("Zoom2 Runge Kutta4(caso1).png")
plt.close()

#grafica 6

s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-0.25, 0.75)
plt.ylim(-0.35, 0.35)
plt.scatter(dato2,dato3,s) # One plot

plt.title(u"Zoom 2 Simplectico (caso 1)")
plt.xlabel("$q_{3}$")
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("Zoom2 Simplectico(caso1).png")
plt.close()

#grafica 7
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-2.5, 2.5)
plt.ylim(-2.5, 2.5)
plt.scatter(dato7,dato8,s) # One plot

plt.title(u"Integrador simplectico 4th (caso2)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso2).png")
plt.close()

#grafica 8
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(0.2, 0.7)
plt.ylim(-0.7, 0.7)
plt.scatter(dato7,dato8,s) # One plot

plt.title(u"Integrador simplectico zoom1 4th (caso2)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso2)zoom1.png")
plt.close()

#grafica 9
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-0.08, 0.08)
plt.ylim(-0.1, 0.1)
plt.scatter(dato7,dato8,s) # One plot

plt.title(u"Integrador simplectico zoom2 4th (caso2)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso2)zoom2.png")
plt.close()

#grafica 10
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-2.5, 2.5)
plt.ylim(-2.5, 2.5)
plt.scatter(dato11,dato12,s) # One plot

plt.title(u"Integrador simplectico 4th (caso3)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso3).png")
plt.close()

#grafica 10
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(-3.0, 3.0)
plt.ylim(-2.5, 2.5)
plt.scatter(dato15,dato16,s) # One plot

plt.title(u"Integrador simplectico 4th (caso4)")
plt.xlabel("$q_{3}$") 
plt.ylabel("$p_{3}$")


#plt.show()
fig.savefig("simplectico 4(caso4).png")
plt.close()


#grafica 11 energia RK4
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(0, 100)
plt.ylim(-20, 20)
plt.scatter(dato17,dato18,s) # One plot

plt.title(u"Metodo Runge Kutta 4: Energia")
plt.xlabel("$t$") 
plt.ylabel("$E$")


#plt.show()
fig.savefig("runge4(Energia).png")
plt.close()


#grafica 12 energia LF
s=0.03
fig=plt.figure() # Create and empty figure
plt.xlim(0, 100)
plt.ylim(-20, 20)
plt.scatter(dato17,dato19,s) # One plot

plt.title(u"Integrador simplectico 4th: Energia")
plt.xlabel("$t$") 
plt.ylabel("$E$")


#plt.show()
fig.savefig("simplectico4(Energia).png")
plt.close()

