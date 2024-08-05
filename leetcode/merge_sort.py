nums1=[1,2,3,0,0,0]
nums2=[2,5,6]
# n=3
# i=0
# num1.sort()
# num2.sort()
# print(num1)
# print(num2)
# num1=num1+num2

for i in range(len(nums2)):
            nums1.append(nums2[i])
            nums1.remove(0)
nums1.sort()   

print(nums1)