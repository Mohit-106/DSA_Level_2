Question : Write a NumPy program to create a 2D array with 1 on the border and 0 inside
# import numpy as np
# x = np.ones((5,5))
# print("Original array:")
# print(x)
# print("1 on the border and 0 inside in the array")
# x[1:-1,1:-1] = 0
# print(x)

# Question 2:Write a NumPy program to get the number of nonzero elements in an array.
# import numpy as np
# x = np.array([[0, 10, 20], [20, 30, 40]])
# print("Original array:")
# print(x)
# print("Number of non zero elements in the above array:")
# print(np.count_nonzero(x))

# Question 3:Write a NumPy program to compute the multiplication of two given matrixes. 
# import numpy as np
# p = [[1, 0], [0, 1]]
# q = [[1, 2], [3, 4]]
# print("original matrix:")
# print(p)
# print(q)
# result1 = np.dot(p, q)
# print("Result of the said matrix multiplication:")
# print(result1)
# print(result2)

# Question 4:Write a NumPy program compute the inverse of a given matrix. 
# import numpy as np
# m = np.array([[1,2],[3,4]])
# print("Original matrix:")
# print(m)
# result =  np.linalg.inv(m)
# print("Inverse of the said matrix:")
# print(result)

# Question 5:Write a program to calculate factorial of a given number and store result into variable
# ##using iterative method
# num = int(input("Enter a number: "))    
# factorial = 1    
# if num < 0:    
#    print(" Factorial does not exist for negative numbers")    
# elif num == 0:    
#    print("The factorial of 0 is 1")    
# else:    
#    for i in range(1,num + 1):    
#        factorial = factorial*i    
#    print("The factorial of",num,"is",factorial) 

# ##recursive
# def fact(n):  
#     return 1 if (n==1 or n==0) else n * fact(n - 1);  
  
# num = 5  
# print("Factorial of",num,"is",)  
# fact(num))  


# Question 6:Write a function that tests if a number is prime. Test it by writing out all prime numbers less than 50. 
# # Python program to display all the prime numbers within an interval

# lower = 900
# upper = 1000

# print("Prime numbers between", lower, "and", upper, "are:")

# for num in range(lower, upper + 1):
#    # all prime numbers are greater than 1
#    if num > 1:
#        for i in range(2, num):
#            if (num % i) == 0:
#                break
#        else:
#            print(num)

# Question 7:Write a NumPy program to get the element-wise remainder of an array of division.
# import numpy as np
# x = np.arange(7)
# print("Original array:")
# print(x)
# print("Element-wise remainder of division:")
# print(np.remainder(x, 5))

# Question 8:Write a program to generate a multiplication table for a given number. 
# number = int(input ("Enter the number of which the user wants to print the multiplication table: "))      
# # We are using "for loop" to iterate the multiplication 10 times       
# print ("The Multiplication Table of: ", number)    
# for count in range(1, 11):      
#    print (number, 'x', count, '=', number * count)   
# Question 9:Write a program to find the distance between two points, area of a circle.
# ##distance between two points
# def distance(x1, y1, x2, y2):

# # Calculating distance

# return (((x2 - x1)**2 +(y2 - y1)**2)**0.5)

# # Drivers Code

# print( distance(3, 4, 4, 3))
# ##area of circle 
# π = 3.14  
# Radius = float (input ("Please enter the radius of the given circle: "))  
# area_of_the_circle = π * Radius * Radius  
# print (" The area of the given circle is: ", area_of_the_circle)  

# Question : find gcd of two numbers using recursion
# def gcd(a,b):
#     if(b==0):
#         return a
#     else:
#         return gcd(b,a%b)
# a=int(input("Enter first number:"))
# b=int(input("Enter second number:"))
# GCD=gcd(a,b)
# print("GCD is: ")
# print(GCD)

# Question :Consider the string str = ’Hello Word’. Write statements in Python to implement the following
# i)To display the last four characters.
#  print str[-4:] 
# ii)To display the substring starting from index 2 and ending at index 6.
# print str[2:6]
# iii) To check whether string has alphanumeric characters or not.
# str.isalnum( ) 
# iv)To trim the last four characters from the string.
#  str[:-4] 
# v)To trim the first four characters from the string.
# str[4:]
# vi)To display the starting index for the substring ‘He’.
# print("index of 'He' in string:", string.index('He'))
# vii)To change the case of the given string
# str.swapcase( ) 
# viii)To check if the string is in title case.
# str.istitle( )
# ix)To replace all the occurrences of letter ‘o’ in the string with ‘*’.
# str.replace(‘o’,’*’)


# question :Generate two array of same length and plot on x axis and y-axis. 
