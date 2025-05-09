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
