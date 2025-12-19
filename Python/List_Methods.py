list=[2,1,3]
print(list)
list.append(4) #adds one element at the end [2,1,3,4]
list.sort() #sort in ascending order
print(list)

list.sort(reverse=True) #sort indescending order [3,2,1]
print(list)

list.reverse() # Reverses list [3,1,2]
print(list)

list.insert(3,6) # insert element at index 
print(list)

list1=[2,1,3,1]

list1.remove(1) #removes first occurence of elements [2,3,1]
print(list1)

list1.pop(2) #removes element at idx
print(list1)
