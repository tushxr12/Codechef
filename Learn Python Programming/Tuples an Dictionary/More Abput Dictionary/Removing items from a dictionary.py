student_info = {"name": "Alice", "age": 25, "course": "Python"}

# Using del to remove a specific key-value pair
del student_info["course"]
print(student_info)

# Using pop() to remove and retrieve a specific key-value pair
removed_age = student_info.pop("age")

# Using clear() to clear all key-value pairs
student_info.clear()

print("Updated Student Info:", student_info)
print("Removed Age:", removed_age)
