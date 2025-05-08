# Update the code below

A = [1, 2, 3, 1, 2, 4, 1, 3, 5]
A_freq = {}

for num in A:
    if(num in A_freq):
        A_freq[num] = A_freq[num] + 1
    else:
        A_freq[num] = 1
        
print(A_freq)
