# Update the 2 functions given below - total_score() and high_score()

def users_with_rating(only_viewed, attempted, visited):
    return visited - only_viewed
    
    
def users_with_high_rating(only_viewed, attempted, visited):
    return visited - (only_viewed + attempted)
    
    
    

N, A, B = map(int, input().split())
result_1 = users_with_rating(A, B, N)
result_2 = users_with_high_rating(A, B, N)
print(result_1, result_2)
