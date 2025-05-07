# Click on submit to see the result

# Global variable
x = 10

def my_function():
    # Local variable with the same name as the global variable
    x = 20
    
    # Accesses the local variable
    print(x)

my_function()
# Output: 20

print(x)
# Output: 10 (global variable is not affected)
