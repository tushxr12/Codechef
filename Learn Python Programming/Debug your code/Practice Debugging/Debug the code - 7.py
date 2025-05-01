# your code goes here
a, b, c, d = map(int, input().split())
p = a - c
q = b - d
if p < q:
    print("First")
elif p > q:
    print("Second")
else:
    print("Any")
