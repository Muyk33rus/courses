s = input().split()
print(' '.join(set([i for i in s if s.count(i) > 1])))
