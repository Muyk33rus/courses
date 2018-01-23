import itertools
print("".join([k+str(len(list(g))) for k, g in itertools.groupby(input())]))
