className = input("Class name : ")
members = input("members : ")

membersList = members.split(' ')

def generateHeader(name):

    print(f"void get{name.title()}();")

def generateFuntion(name):
    print(f"void {className}::get{name.title()}()", end='')
    print("{")
    print(f"\treturn this->{name}")
    print("}")


for member in membersList:
    generateHeader(member)

print("\n\n")

for member in membersList:
    generateFuntion(member)