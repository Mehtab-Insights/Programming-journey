# info={
#     "Name": "Mehtab",
#     "Rollno": "35" ,
#     "City" : "Charsadda",
#     "Marks" : [98,97,95],
# }
# # info["Name"]="Ali"  #add new
# # info["SurName"]="Kamran"  #to save anothere
# print(info)



# Nasted Dictionaries

student={
    "name" : "Mehtab",
    "subject" : {
        "Chem" : 98,
        "Phy" : 97,
        "Math" : 95,
    }
}
print(student)
print(student["subject"])
print(student["subject"]["Math"])