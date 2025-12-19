list1=[1,2,1]
list2=[1,2,3]

copy_list=list1.copy()
copy_list.reverse()

if(copy_list == list1):
    print("Palindrome")
else:
    print("Not Palindrome")