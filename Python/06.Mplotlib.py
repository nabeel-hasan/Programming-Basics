## ================================= Matplotlib =================================== ##

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

np.random.seed(0)

# Simple Plot
x = np.random.normal(size = 40)
plt.plot(x)
plt.show()



# plots with x and y element
x = np.random.normal(size = 100)
y = np.random.uniform(size =100)
plt.scatter(x, y)
plt.show()



# adding axis length
x = np.random.normal(size = 100)
y = np.random.uniform(size =100)
plt.scatter(x, y)
plt.axis([-4, 4, -3, 3])           # (xstart, xend, ystart, yend)
plt.show()


# adding grid, title , xlabel, ylabel
x = np.linspace(-1, 1,  500)
y = np.exp(x)
plt.plot(x,y)
plt.title('This is an exponential graph')
plt.xlabel('Range of x')
plt.ylabel('Range of output')
plt.grid(True)
plt.show()


# plotting a pattern
x = [1,1,2,2,3,3,4,4,3,3,2,2,1]
y = [2,3,3,4,4,3,3,2,2,1,1,2,2]
plt.plot(x, y, 'r--')
plt.title('Red Cross')
plt.axis([0,5,0,5])
plt.show()


# Subplots

## Equal Subplots
x = np.linspace(-2, 2, 100)
plt.subplot(2, 2, 1)
plt.plot(x, x)
plt.subplot(2, 2, 2)
plt.plot(x, x**2)
plt.subplot(2, 2, 3)
plt.plot(x, x**3)
plt.subplot(2, 2, 4)
plt.plot(x, np.exp(x))
plt.show()


## Unequal Subplots
x = np.linspace(-2, 2, 100)
plt.subplot(2, 2, 1)          # 2 rows 2 cols 1st figure
plt.plot(x, x)
plt.subplot(2, 2, 2)          # 2 rows 2 cols 2nd figure
plt.plot(x, x**2)
plt.subplot(2, 1, 2)          # 2 rows 1 cols 3rd figure
plt.plot(x, x**3)
plt.show()


# subplots best method
sin = np.sin(np.linspace(-4,4, 100))
fig, ax = plt.subplots(2, 2)
ax[0,0].plot(sin)
ax[0,1].plot(1/sin)
ax[1,0].plot(sin, 'r--')
ax[1,1].plot(np.exp(sin))
plt.tight_layout()
plt.show()

# colspan and rowspan
df = pd.DataFrame(np.random.randn(500,6), columns =list('ABCDEF'))


fig = plt.figure()
ax1 = plt.subplot2grid((3,3), (0,0), colspan=2)
ax1.plot(df['A'], 'r')
ax2 = plt.subplot2grid((3,3), (0,2))
ax2.plot(np.cumsum(df['B']), 'b')
ax3 = plt.subplot2grid((3,3), (1,0), rowspan=2)
ax3.scatter(df['C'], df['D'])
ax4 = plt.subplot2grid((3,3), (1,1), colspan=2)
ax4.plot(df['E'], 'k')
ax5 = plt.subplot2grid((3,3), (2,1))
ax5.plot(np.cumsum(df['F']), 'g--')
ax6 = plt.subplot2grid((3,3), (2,2))
ax6.plot(np.cumsum(df['A']), 'r')
plt.tight_layout()
plt.show()


# Bar Chart
fig, ax = plt.subplots()
ax.bar(x = df.columns, height = df.iloc[5, ], width = 0.50, 
       color = 'red',label = 'Day 1')
ax.bar(x = df.columns, height = df.iloc[7, ], width = 0.50, 
       color = 'blue',label = 'Day 2')
ax.set_title('Return on Day 5 & 7')
ax.legend()
plt.show()


# Horizontal Bar Chart
fig, ax = plt.subplots()
ax.barh(df.columns, np.mean(df), color = 'red')
ax.set_title('Mean Return')
plt.show()


# Histogram
fig, ax = plt.subplots(1,2, tight_layout = True)
ax[0].hist(df['A'], bins = 50, color = 'red')
ax[1].hist(df['B'], bins = 50, color = 'green')
plt.show()


# Scatter plot
fig, ax = plt.subplots()
ax.scatter(df['A'], df['B'], c = np.log(df['E'] - df['F']), s = df['C']*200,
           cmap = 'bwr_r', edgecolor = 'k', alpha = 0.7)
ax.set_title('Scatter Plot')
plt.legend()
plt.show()


# Stepwise plot
x = np.arange(14)
y = np.sin(x / 2)
plt.step(x, y, label = 'default')
plt.step(x, y + 2, label = 'post')
plt.step(x, y - 2, label = 'pre')
plt.show()


# Contour plot
delta = 0.025
x = np.arange(-3, 3, delta)
y = np.arange(-2, 2, delta)
X, Y = np.meshgrid(x, y)
Z1 = np.exp(-X**2 - Y**2)
Z2 = np.exp(-(X-1)**2 - (Y-1)**2)
Z = (Z1 - Z2)*2

fig, ax = plt.subplots(1,2)
CS = ax[0].contour(X, Y, Z)
ax[0].clable(CS, inline=1 , fontsize=10)
ax[0].set_title('Simple Plot')
im = ax[1].imshow(Z, interpolation = 'bilinear',cmap = 'RdYlGn',
                  origin = 'lower', extent = [-3,3,-3,3],
                  vmax = abs(Z).max(), vmin = -abs(Z).max())
plt.show()


# Polar Coordinates
r = np.arange(0, 2, 0.01)
theta = 2 * np.pi * r

fig, (ax0, ax1) = plt.subplots(1, 2, subplot_kw=dict(projection='polar'))
ax0.scatter(theta, r)
ax0.grid(True)
ax1.plot(theta, r, 'r--')
ax1.grid(True)
plt.show()


# Stylesheets
df = pd.DataFrame({
                   'A': np.random.normal(1.5, 0.1, 300),
                   'B': np.random.normal(2.5, 0.1, 300),
                   'C': np.random.normal(3.5, 0.1, 300),
                   'D': np.random.normal(4.5, 0.1, 300),
                  })


with plt.style.context('fivethirtyeight'):
        fig = plt.figure()
        ax1 = plt.subplot2grid((3,3), (0,0), colspan=3, rowspan = 2)
        ax1.hist(df['A'], color = 'red', bins=50, alpha = 0.5)
        ax1.hist(df['B'], color = 'blue', bins=50, alpha = 0.5)
        ax1.hist(df['C'], color = 'green', bins=50, alpha = 0.5)
        ax1.hist(df['D'], color = 'violet', bins=50, alpha = 0.5)
        ax1.set_title('Histogram')
        ax2 = plt.subplot2grid((3,3), (2,0))
        ax2.plot(df['A'].cumsum(), color = 'red')
        ax2.plot(df['B'].cumsum(), color = 'blue')
        ax2.plot(df['C'].cumsum(), color = 'green')
        ax2.plot(df['D'].cumsum(), color = 'violet')
        ax2.set_title('Returns')
        ax3 = plt.subplot2grid((3,3), (2,1), colspan=2)
        ax3.plot((df['A']-1), color = 'red')
        ax3.plot((df['B']-1), color = 'blue')
        ax3.plot((df['C']-1), color = 'green')
        ax3.plot((df['D']-1), color = 'violet')
        plt.tight_layout()
        plt.show()






















