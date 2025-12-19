with open("practice.txt","r") as f:
    data=f.read()

new_data=data.replace("java","Python")
print(new_data)

with open("practice.txt","w") as g:
    g.write(new_data)