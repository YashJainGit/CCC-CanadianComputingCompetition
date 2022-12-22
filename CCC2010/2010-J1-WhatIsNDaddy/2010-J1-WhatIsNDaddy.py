# 2010 J1 What is n, Daddy?
# Code by Yash Jain
# Time Complexity : O(1)

n = int(input())
count = 0

for i in range(0, 6, 1):
    if i <= n-i <= 5:
        count += 1

print(count)
