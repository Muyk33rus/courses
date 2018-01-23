a =int (input())
b =int (input())
c=0
s=0
for i in range (a,b+1):
    if i%3 == 0:
        s+=i
        c+=1
    i+=1
print(s/c)
