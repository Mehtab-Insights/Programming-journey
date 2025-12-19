collection=set()
collection.add(1) #Adds on element
collection.add(2)

collection.remove(2) #Removes the element
print(collection)
 
collection.clear() #Empties the set 
print(collection)

test={"Hello","My","Name","is","Mehtab"} 
print(test.pop())# Removes a random value

set1={1,2,3}
set2={3,4,5}
print(set1.union(set2)) #COmbine both set values & returns new

set3={1,2,3}
set4={2,3,4}
print(set3.intersection(set4)) #Combine common values & return new
