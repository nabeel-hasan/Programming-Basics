## ------------------ Control flow in Python ---------------------------- ##

# ------ if elif if -------- #
num1 = 5
num2 = 10

if num1 > num2:
    print('num1 is greater than num2')
elif num1 < num2:
    print('num1 is smaller than num2')
else:
    print('num1 is equal to num2')


# ------- and / or ------- #
if (num1 != num2) and (num1 + num2 == 15):
    print('Two numbers are not equal')
    print('Sum of two numbers is equal to 15')
else:
    print('Both conditions are false')


if (num1 == num2) or (num1 + num2 == 15):
    print('Two numbers are not equal or Sum of two numbers is equal to 15')
else:
    print('Both conditions are false')


# -------- Nested if else -------#
x = 10
y = 20

if x == 10:
    if y == 20:
        print('x is equal to 10')
        print('y is equal to 20')
    else:
        print('only x is equal to 10')
else:
    print('x is not 10')


# -------- for loop --------- #
for i in range(0, 10, 2):
    print(i)


# -------- while loop ------- #
while x < 20:
    print(x)
    x = x + 2


# -----break and continue----- #

## The break statement,breaks out of the innermost enclosing for or while loop.

for i in range(6):
    if i == 5:
        print("Loop reach its end")
        break
    else:
        print(i)


## The continue statement continues with the next iteration of the loop

for i in range(5):
    if i % 2 == 0:
        print(i)
        continue
    print("Divisible by two")

    
## ------- Functions -----------##
def fib(n):
    a = 0
    b = 1
    while a < n:
        print(a, end = ' ')
        a = b
        b = a + b
    print()


f = fib
f(100)


## *args

## *args in function definitions to pass a variable number of arguments to a function

def Func1(*args):
    for arg in args:
        print(arg)


Func1('When', 'no', 'of', 'arguments', 'is', 'not', 'known')


# **kwrgs is used by giving keyword argument

def Func2(**kwrgs):
    for key, value in kwrgs.items():
        print('%s == %s'%(key, value))


Func2(alpha = 'This', beta = 'IS', gamma = 'Keyword')


# Lambda Functions

g = lambda x: 1 + x
g(10)



