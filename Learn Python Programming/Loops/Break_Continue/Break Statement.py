# Find the anomaly month in the list below

days = [30, 31, 30, 30, 31, 30, 20, 30, 31, 30, 31, 30]
for day in days:
    if(day < 30):
        print(day)
        break
    print(day)
