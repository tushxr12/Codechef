def greet(name):
    return f"Hello, {name}!"

def capitalize(text):
    return text.upper()

def greet_and_capitalize(name):
    # Update the code below this line
    greetMessage = greet(name)
    return capitalize(greetMessage)



# Call the functions
name = "Alice"
final_result = greet_and_capitalize(name)

# Display the results
print("Final Result:", final_result)
