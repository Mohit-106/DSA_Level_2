# def factorial(n):
#     if n==0:
#         return 1
#     return n * factorial(n-1)

# num = 6;
# print("factorial is:", factorial(num))

# def prime(n,i):
#     if(i>(n/2)): return True
#     if(n%i==0): return False
    
#     return prime(n,i+1)
# num = 10
# print("isprime",prime(num,2))

# import matplotlib.pyplot as plt
# array1=[1,2,3,4,6]
# array2=[5,6,7,8,9]

# plt.plot(range(1,6), array1, 'g', label='Label 1')
# plt.plot(range(1,6), array2, 'b', label='Label 2')

# plt.title('Sample Graph')
# plt.xlabel('X Axis')
# plt.ylabel('Y Axis')
# plt.legend()
# plt.show()

# import numpy as np
# x = np.arange(7)
# print("Original array:")
# print(x)
# print("Element-wise remainder of division:")
# print(np.remainder(x, 5))

# str = "Hello World"
# l = len(str)
# c= str[l-4:l]
# print(c)
# print(str[2:7])

# y = str.isalnum()
# print("str has alphanumeric chars:",y)

# t = str[l-4:l]
# print(t," ",str[0:4])

# mod =""
# for char in range(0,l):
#     if(str[char]=='o'):
#         mod += '*'
#     else: mod += str[char]
# print(mod)

# import numpy as np
# x = np.ones((5,5))
# y = np.ones((5,5))
# for i in range(1,5-1):
#     for j in range(1,5):
#         x[i][j]=0;
# x[1:-1,1:-1] = 0
# print(x)
# y[1:-1][1:-1] = 0
# print(y)

# import numpy as np
# import pandas as pd
# #counting non zeroes elements in array
# x= [[0,10,10],[30,0,20]]
# y = np.count_nonzero(x)
# print👍

# # 3->matrix multiplication
# import numpy as np
# p = [[1, 0], [0, 1]]
# q = [[1, 2], [3, 4]]
# print("original matrix:")
# print(p)
# print(q)
# result1 = np.dot(p, q)
# print("Result of the said matrix multiplication:")
# print(result1)

# # 4 - Inverse of matrix
# #linalg= linear algebra
# import numpy as np
# m = np.array([[1,2],[3,4]])
# print("Original matrix:")
# print(m)
# result =  np.linalg.inv(m)
# print("Inverse of the said matrix:")
# print(result)

# import numpy as np
# p = [[1, 0], [0, 1]]
# q = [[1, 2], [3, 4]]
# print("original matrix:")
# print(p)
# print(q)
# result1 = np.dot(p, q)
# print("Result of the said matrix multiplication:")
# print(result1)

# import numpy as np

# import pandas as pd
# #counting non zeroes elements in array
# x= [[0,10,10],[30,0,20]]
# y = np.count_nonzero(x)
# print(y)


# import pandas as pd
#  data ={'Name':["A","B","c"],'Roll No':[3,4,5]}
#  mydata = pd.DataFrame(data);
#  print(mydata)

print(chr(65+1))