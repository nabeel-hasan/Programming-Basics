## =========================== Basics of Python ======================================##

## Object Oriented Programming

## Class
class Area:
    def __init__(self, length, width, radius):
        self.length = length
        self.width = width
        self.radius = radius
    def Rectangle(self):
        r = self.length * self.width
        return r
    def Square(self):
        s = self.length ** 2
        return s
    def Circle(self):
        c = 3.14 * (self.radius ** 2)
        return c


# Using class Area
l = 12
w = 10
r = 5

R = Area(l, w, r)
R.Rectangle()
R.Square()
R.Circle()

# This will show error as length and width are not provided
R2 = Area(radius = 7)
R2.Circle()


# This will run 
R2 = Area(length = None, width = None, radius = 7)
R2.Circle()


R2 = Area(None, None, 7)
R2.Circle()


# Use of Multiple Classes

class Product:
    def __init__(self, name, price, quantity, rating):
        self.name = name
        self.price = price
        self.quantity = quantity
        self.rating = rating
    def cost(self):
        c = self.price * self.quantity
        return c
    def get_rating(self):
        return self.rating


class Shop:
    def __init__(self, s_name, min_rating):
        self.s_name = s_name
        self.min_rating = min_rating
        self.products = []
    def add_inventory(self, product):
        if product.get_rating() > self.min_rating:
            self.products.append(product)
            return True
        return False
    def total_cost(self):
        value = 0
        for item in self.products:
            value = value + item.cost()
        return value


# List of Products
P1 = Product("Uncle Chips", 20, 100, 8.2)
P2 = Product("TATA TEA", 100, 20, 8.9 )
P3 = Product("Grand Mustard", 180, 30, 7.5)
P4 = Product("Maynard Sauce", 56, 67, 7.1)
P5 = Product("Sunset Cookies", 10, 200, 6.7)
P6 = Product("China Jam", 85, 20, 6.2)
P7 = Product("French Cake", 120, 100, 5.9)
P8 = Product("English Muffin", 10, 150, 5.2)
P9 = Product("Eggs", 100, 100, 4.7 )
P10 = Product("Maple Toffee", 20, 120, 3.0)


# Shop with their acceptable rating
SH01 = Shop("JCStore", 7.0)
SH02 = Shop("TJShop", 5.5)
SH03 = Shop("TomStore", 4.0)


# adding inventory to the shop
SH01.add_inventory(P1)
SH01.add_inventory(P2)
SH01.add_inventory(P3)
SH01.add_inventory(P4)
SH01.add_inventory(P5)


# totl bill 
Shop.total_cost(SH01)
SH01.total_cost()
  

# INHERITANCE

## With the help of inheritance a super class features can be inherited by other special 
## classes in order to reduce redundency in the code

class Department:
    def __init__(self, dept_id, name, age):
        self.dept_id = dept_id
        self.name = name
        self.age = age
    def info(self):
        print(f'Name: {self.name}')
        print(f'Age: {self.age}')
        print(f'ID: {self.dept_id}')


class Student(Department):
    def __init__(self, dept_id, name, age, roll_no, course):
        super().__init__(dept_id, name, age)
        self.roll_no = roll_no
        self.course = course
    def info(self):
        print(f'Name: {self.name}')
        print(f'Age: {self.age}')
        print(f'ID: {self.dept_id}')
        print(f'RollNo: {self.roll_no}')
        print(f'Course: {self.course}')


class Teacher(Department):
    def __init__(self, dept_id, name, age, teaching_id, subject):
        super().__init__(dept_id, name, age)
        self.teaching_id = teaching_id
        self.subject = subject
    def info(self):
        print(f'Name: {self.name}')
        print(f'Age: {self.age}')
        print(f'ID: {self.dept_id}')
        print(f'TEACHING ID: {self.teaching_id}')
        print(f'Subject: {self.subject}')


class Staff(Department):
    pass


# Saving data into classes
student_1 = Student("M1", "Harry", 18, "MM01", "Bachelors-I")
student_2 = Student("C1", "Matt", 19, "CS21", "Bachelors-II")
student_3 = Student("C1", "Robert", 21, "SS01", "Bachelors-II")
student_4 = Student("M3", "Mark", 22, "MM03", "Bachelors-III")
student_5 = Student("M2", "Roy", 18, "MM02", "Bachelors-II")

teacher_1 = Teacher("M1", "Mr. Johnson", 43, "TT01", "Database")
teacher_2 = Teacher("C1", "Mr. Kumar", 33, "TT02", "Programming")
teacher_3 = Teacher("S1", "Mr. Read", 53, "TT03", "Servers")

staff_1 = Staff("M1", "Mr. Clean", 44)
staff_2 = Staff("C1", "Mr. Phil", 47)
staff_3 = Staff("S1", "Mr. Dillon", 50)


# Class attributes
class Employee:
    id_no = 0   # class attribute  # when we want to keep somthing fixed inside a class
    def __init__(self, name):
        self.name = name
        Employee.id_no += 1
    def info(self):
        print(f'Name: {self.name}')
        print(f'No. {Employee.id_no}')


s1 = Employee("Harry Potter")
Employee.id_no
s2 = Employee("Albus Dumbledore")
Employee.id_no
s3 = Employee("Minerva")
s3.info()
    

# @classmethod
class School:
    roll_no = 1101
    def __init__(self, name):
        self.name = name
        School.add_student()
    @classmethod
    def roll_no_(cls):
        return cls.roll_no
    @classmethod
    def add_student(cls):
        cls.roll_no += 1


s1 = School("Martin Bad Wolf")
s1.roll_no_()

s2 = School('Next Next Steve')
s1.roll_no_()


# staticmethod
# do not require initialization
class Circle:
    @staticmethod
    def Perimeter(r):
        return 2 * 3.14 * r
    @staticmethod
    def Area(r):
        return 3.14 * (r ** 2)


Circle.Perimeter(3)
Circle.Area(3)




