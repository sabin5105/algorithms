cnt=0

a = int(input(""))
b = int(input(""))

for i in range(a):
    name = input("")

for j in range(b):
    name = input("")
    if(name==""):
        ++cnt
    else:
        ans = name
       
print(cnt) 
for k in range(b):
    if(ans!=""):
        print(ans)