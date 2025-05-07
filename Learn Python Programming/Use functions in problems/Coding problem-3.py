# Debug the code below to solve the problem
def multiply(a, b):
    return(a*b)

def sum(x, y):
    return(x+y)
    
def abs_diff(a,b):
    if a > b:
        return(a - b)
    else:
        return b - a



A, B = map(int, input().split())
C = multiply(A, B)
D = sum(A, B)
E = abs_diff(C, D)
print(E)
