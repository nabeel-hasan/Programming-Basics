##- -------------------------- Data Structures in Python --------------------------##

## Lists

colors = ['red', 'blue', 'green', 'yellow', 'red']
colors.count('red')           # elements in a list repeated
colors.index('green')      # find the index of element
colors.reverse()           # reversing the list
colors
colors.append('banana')  # adding element in a list
colors.sort()            # sort list in some order
colors
colors.pop()             # deletes last element of list
colors


## Using lists as stack
# where last element added is first to retrieved (LIFO)
stack = [34, 56, 78]
stack.append(78)
stack.append(90)
stack
print(stack.pop())
stack


# Using queue as List
# where first element added is first to retrieved (FIFO)
from collections import deque
queue = deque([10, 20, 30])
queue.append(40)
queue.append(50)
queue
print(queue.popleft())   # works when deque is import
print(queue.popleft())
queue


# List comprehension
combination = []
for x in [1, 2, 3]:
    for y in [1, 2, 3]:
        if x != y:
            combination.append((x,y))

combination


# Matrix nested list
mat = [
        [1,2,3],
        [4,5,6],
        [7,8,9]
        ]

list (zip(*mat))


#-------- Tuples ------------ #
tuple1 = ('gogo', 'fofo', 123, 345)   # store multiple data type
tuple1[2] = 321                       # not muttable

v,x,y,z = tuple1                      # tuple unpacking
print(v, x, y, z)


#-------- Sets ------------ #
# sets do not contain duplicate elements or different data types
# follow rules of set theory

set1 = {'aoo', 'boo', 'coo', 'foo'}
'aoo' in set1


set2 = set('abrakadabra')
set3 = set('abhgora')

set2         # unique letters in set1
set2 - set3 # letters in set1 but not in set2
set2 | set3 # letters in set1 or set2
set2 & set3 # letters in set1 and set2
set2 ^ set3 # letters in set1 or set2 but not in both


# --------- Dictionary ---------- #
dct = {'a':1, 'b':2, 'c':3}
dct

dct['d'] = 4   # muttable
del dct['a']

list(dct)   # converting dictionary into list


# unpacking using loops

# dictionary
for k,v in dct.items():
    print(k,v)

# lists
for k, v in enumerate(colors):
    print(k,v)


# two different list unpacking
l1 = ['hello', 'hola', 'Hi']
l2 = [1,2,3]

for k,v in zip(l1, l2):
    print(k,v)


