a = int(input())
b = []
for i in range(1, a+1):
    b += ([i] * i)
print(*b[0:a])
