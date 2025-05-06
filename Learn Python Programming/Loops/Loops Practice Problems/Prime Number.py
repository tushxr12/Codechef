n = int(input())
isPrime = True # Assume n is prime

i = 2
while i < n:
    # Update your code below this line
    if(n%i == 0):
        isPrime = False
        break;
    i+=1
    
    
if isPrime:
    print('Yes')
else:
    print('No')
