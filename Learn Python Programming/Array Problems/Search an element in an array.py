# cook your dish here
n,x = map(int, input().split())
user_input = list(map(int, input().split()))

flag = False;
for num in user_input:
    if(num == x):
        print("YES")
        flag = True
        break

if(not flag):
    print("NO")

#Better
# cook your dish here
n, x = map(int, input().split())
user_input = list(map(int, input().split()))

if x in user_input:
    print("YES")
else:
    print("NO")
