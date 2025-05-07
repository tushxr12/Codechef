def compute_value(a, b):
    # update your code below this line
    res1 = a**2 + 2*a*b + b**2
    res2 = a + b
    print(res1)
    print(res2)
    
    
    

t = 3
for _ in range(t):
    A, B = map(int, input().split())
    compute_value(A, B)
