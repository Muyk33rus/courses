#objects = [1, 2, 1, 2, 3]
ans = 0
objA = []
for obj in objects: 
    if id(obj) not in objA:
        ans += 1
        objA.append(id(obj))
    
print(ans)