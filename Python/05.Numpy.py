##=========================== NUMPY ========================================== ##

import numpy as np

## Numpy can create multidimensional array
arr = np.arange(50).reshape(10,5)
arr


arr.shape      # Shape of array
arr.ndim       # dimension of array
arr.dtype      # data type
arr.itemsize   # byte size
arr.size       # number of elements


## Array creation
a = np.array([23,45,89])
a

b = np.array([(10, 20, 30), (40,50, 60)])  # 2D array
b

c = np.array([[34, 56], [43, 98]], dtype = complex) # decalaring data type
c


# Specialised array
np.zeros((4,4))    # zero array 

np.ones((2, 5,5), dtype = np.int8)   # (dim, row, col)

np.empty((3,3))    # empty array with random huge numbers


# numpy arange 
np.arange(0, 25, 0.5)  # (start, end, step)

# numpy linspace
np.linspace(0,10, 10)  # (start, end, how many numbers)


# Matrix operation

A = np.array([[1,0,0],[0,1,0], [0,0,1]])
B = np.arange(9).reshape(3,3)

B ** 2


C = A - B
C


10 * np.sin(A)


A * B       # elementwise product
A @ B       # cross product
A.dot(B)    # dot product

A *= 6
print(A)

A += 1
print(A)


random = np.random.rand(4,3)
random
random.sum()
random.min()
random.max()


# axis operations
random.sum(axis = 0)   # axis = 0 columns
random.min(axis = 1)
random.cumsum(axis = 0)

# universal func
np.exp(random)
np.sqrt(random)


# Indexing 
a = np.arange(10) ** 2
a

a[2:5]

a[0:10:3] = 100  # from 0 to 10 assign every 3rd element 100
a

a[: : -1]        # reversing the list
a

def f(x,y):
       return np.sqrt(x) + (10*y)


b = np.fromfunction(f, (4,6))
b

b[3,3]
b[1:3, 4]
b[:, -1]

for row in b:
        print(row)


for element in b.flat:
        print(element)


# numpy shape manipulation
a = np.random.randint(1, 100, 24) #(low, high, no. of element
a

a.shape

a.reshape(8,3)         # temporary change

a.resize((6,4))       # permanently changes the shape
a

a.ravel()

a.T

a


# stacking arrays in numpy
a = np.random.randint(1, 10, 4).reshape(2, 2)

b = np.random.randint(1, 10, 4).reshape(2, 2)

np.hstack((a,b))
np.vstack((a,b))


from numpy import newaxis
c = np.random.randint(1, 100, 5)
c[:, newaxis]


np.r_[1:5, 13:18, 101:103]                     # horizontal stack of list

np.c_[np.array([1,4,6]), np.array([2,7,9])]    # horizontal stack of arrays


# Spliting arrays
a = np.random.randint(1, 50, 24).reshape(6,4)
a

np.hsplit(a, 4)
np.hsplit(a, 2)
np.vsplit(a, 6)


# Copying and View
a = np.random.randint(1, 100, 24).reshape(6, 4)
a

b = a   # no new array is created

b is a

b[3,3]
b[3,3] = 100

b[3,3]          # b is modified
a[3,3]          # because of b , a is also modified


c = a.copy()    # new array is created
c

c[2,2]
c[2,2] = 100

c[2,2]          # c is modified
a[2,2]          # a remains same









