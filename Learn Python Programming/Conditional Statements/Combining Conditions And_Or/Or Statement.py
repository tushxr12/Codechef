# The following helps accept multiple user input
z, x, c = map(int, input().split())

# Update your code below this line to compare c with z and x
if(c > x or c > z):
    print("PASS")
else:
    print("FAIL")
