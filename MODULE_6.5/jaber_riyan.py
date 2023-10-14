# def mul(x,y):
#     return (x*y)
# print(mul(10,15))


# def welcome():
#     print("welcome to computer technology")
# welcome()
# welcome()


# def square(x):
#     y=x*x
#     return y
# print(square(5)+square(5))


# def show():
#     print("Do not adopt unfair means in the exam")
# show()


# def add(a,b):
#     return (a+b)
# print(add(40,17))
# print(add(278,157))
# print(add(35,95))


# def my_func1():
#     print("Hello World")
#     return None
# def my_func2():
#     print("Hello World")
#     return
# def my_func3():
#     print("Hello World")


# def add(a,b,c):
#     return (a+b+c)
# temp=add(10,25,30)
# print(temp)


# def add_number(x,y):
#       total=x+y
#       return total
# print(add_number(15,25))


# def changeme(mylist):
#     print("this change a passed list into this function")
#     mylist.append([1,2,3,4])
#     print("value inside the function: ",mylist)
#     return
# mylist = [10,20,30]
# changeme(mylist)
# print("value outside the function: ",mylist)


# def changegeme(mylist):
#     print("this changes a passed list into this function")
#     mylist=[1,2,3,4]
#     print("values inside the function: ",mylist)
#     return
# mylist = [10,20,30]
# changegeme(mylist)
# print("values outside the function: ",mylist)


# import time
# localtime=time.localtime(time.time())
# print("local current time is:",localtime)


# from datetime import time
# from datetime import date
# from datetime import datetime
# today=date.today()
# print("current date is:",today)


# from datetime import date
# from datetime import timedelta
# def yesterday():
#     today=date.today()
#     yesterday=today-timedelta(days=1)
#     return yesterday
# print("today's date is:",date.today())
# print("yesterday was:",yesterday())


# from datetime import date
# from datetime import timedelta
# def tomorrow():
#     return date.today()+timedelta(days=1)
# print("today's date will be:",date.today())
# print("tomorrow dat will be:",tomorrow())


# import datetime
# t=datetime.time(12,46,30)
# print("time is:",t)
# d=datetime.date.today()
# print("date is:",d)
# dt=datetime.datetime.combine(d,t)
# print("date & time is:",dt)


# from datetime import timedelta
# a=timedelta(days=1)
# b=timedelta(hours=1)
# c=a-b
# print(c)


# def area():
#     lenght=int(input("enter the value of lenght:"))
#     width=int(input("enter the value of width:"))
#     reactanglearea=lenght*width
#     print("area of reactangle is:",reactanglearea)
# area()


# def multiple(numbers):
#     total=1
#     for x in numbers:
#         total*=x
#     return total
# print(multiple((8,2,3,10,7)))


# def test_prime(n):
#     if(n==1):
#         return False
#     elif(n==2):
#         return True
#     else:
#         for x in range(2,n):
#             if(n%x):
#                 return False
#             return True
# print(test_prime(int(input("input number:"))))


# import math
# def triangle():
#     a=int(input("enter the value of a:"))
#     b=int(input("enter the value of b:"))
#     c=int(input("enter the vlaue of c:"))
#     if((a+b)<c and (b+c)>a and (c+a)>b):
#         s=(a+b+c)/2
#         area=math.sqrt(s*(s-a))*(s-b)*(s-c)
#         print("area of the triangle is:",area)
#     else:
#         print("the triangle is not possible")
# triangle()


# import math
# def caculate_area(radius):
#     mayarea=math.pi*radius**2
#     return mayarea
# radius=caculate_area(int(input("please input the radius:")))
# print("the area of circle is:",radius)


# def summation():
#     n=1
#     sum=0
#     for n in range(100):
#         if(n%2==0):
#             continue
#         sum=sum+n
#     return sum
# add=summation()
# print("the summation is:",add)


def fibo(n):
    if (n<=1):
        return n
    else:
        return(fibo(n-1)+fibo(n-2))
n=10
print("fibo series...:")
for i in range(n):
    print(fibo(i),end=" ")