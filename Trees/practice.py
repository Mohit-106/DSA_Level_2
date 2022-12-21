import matplotlib.pyplot as plt
array1=[1,2,3,4]
array2=[5,6,7,8]

plt.plot(range(1,5), array1, 'g', label='Label 1')
plt.plot(range(1,5), array2, 'b', label='Label 2')
plt.title('Sample Graph')
plt.xlabel('X Axis')
plt.ylabel('Y Axis')
plt.legend()
plt.show()