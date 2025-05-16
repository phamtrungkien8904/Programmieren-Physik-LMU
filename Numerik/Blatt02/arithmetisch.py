from numpy import exp
n = 1e20
alpha = ((1+1/(2*n))/(1-1/(2*n)))**n - exp(1)*(1 + 1/(12*n**2))
print(f"alpha = {alpha}")