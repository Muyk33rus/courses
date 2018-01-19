h=int(input())
if h%4==0 and h%100!=0 or h%400==0 :
        print("Високосный")
else:
  print("Обычный")
