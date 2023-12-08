import numpy as np 
import matplotlib.pyplot as plt

data = np.loadtxt('datos.dat')

x = 2*data[:,1]
y = 2*data[:,5]#/3600.

#print(x,y/3600.)

from sklearn.linear_model import LinearRegression

regresion_lineal = LinearRegression()

regresion_lineal.fit(x.reshape(-1,1), y)

print(regresion_lineal.coef_*100.*3600.)  # convirtiendo a segundo de arco por siglo

plt.plot(x,y)
plt.show()
