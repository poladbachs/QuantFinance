from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from matplotlib import cm
from matplotlib import pyplot as plt

# Load data from CSV file
x, y, z = np.loadtxt('../fdm.csv', unpack=True)

# Reshape the data for plotting
X = np.reshape(x, (20, 20))
Y = np.reshape(y, (20, 20))
Z = np.reshape(z, (20, 20))

print(X.shape, Y.shape, Z.shape)

# Plot the option price surface
step = 0.04 
maxval = 1.0
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap=cm.YlGnBu_r)

# Set limits and labels
ax.set_zlim(0, 1.0)
ax.set_xlabel(r'$S$')
ax.set_ylabel(r'$T-t$')
ax.set_zlabel(r'$C(S,t)$')

# Display the plot
plt.show()