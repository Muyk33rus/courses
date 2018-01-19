a=int(input())
b=int(input())
h=int(input())
if h>=a:
    if h<=b:
        print ("Это нормально")
if h>b:
    print ("Пересып")
if a>h:
    print ("Недосып")
