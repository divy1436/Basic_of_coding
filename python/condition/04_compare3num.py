# Q: Write a Python program to find the largest among three numbers.

# Taking input of three numbers from the user
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

# Checking which number is the largest
if (a >= b and a >= c):
    print("First number is the largest:", a)
elif (b >= c):
    print("Second number is the largest:", b)
else:
    print("Third number is the largest:", c)
