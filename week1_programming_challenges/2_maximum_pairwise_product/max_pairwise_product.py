# Uses python3
n = int(input())
a = [int(x) for x in input().split()]
max_1_ind = 1
max_2_ind = 0
for i in range(1,n):
    if (a[max_1_ind] < a[i]):
        max_1_ind = i
for j in range(0, n):
    if ((a[max_2_ind] < a[j]) & (max_1_ind != j)):
        max_2_ind = j
product = a[max_2_ind]*a[max_1_ind]
print(product)
