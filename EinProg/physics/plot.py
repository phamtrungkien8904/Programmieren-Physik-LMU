import sys
import math
import numpy as np
import matplotlib.pyplot as plt

if len(sys.argv) != 2:
    print("Usage: python3 plot.py data-file")
    exit()
MyData = sys.argv[1]
vals = []

# Open file and read rows
with open(MyData, 'r') as f:
    for i, row in enumerate(f):
        # Remove newline and split by comma
        items = row.strip().split(',')
        # Initialize a list for each column on the first row
        if i == 0:
            vals = [[] for _ in items]
        # Append each value as float into its respective list
        for j, item in enumerate(items):
            vals[j].append(float(item))

######## Analytical solutions
# Const parameters
v0 = 10
theta = 45
g = 9.81
h0 = 10

# Convert angle to radians
theta_rad = math.radians(theta)

# Inputs
t_max = 2
t_min = 0
dt = 0.01
N = int((t_max - t_min)/dt) + 1  # include endpoint

# Generate time values
t_values = np.linspace(t_min, t_max, N)

# Compute analytical solution using projectile motion equations
analytical_x = v0 * np.cos(theta_rad) * t_values
analytical_y = h0 + v0 * np.sin(theta_rad) * t_values - 0.5 * g * t_values**2
########

# Plot
plt.plot(vals[1], vals[2], label='Numerical')
plt.plot(analytical_x, analytical_y, label='Analytical')
plt.legend(['Numerical', 'Analytical'])
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.title('Projectile Motion')
plt.grid()
plt.show()