# Uses python3
def cal_fib(n):
    F = []
    F.append(0)
    F.append(1)
    for i in range(2,n+1):
        F.append(F[i-1] + F[i-2])
    return F[n]

n = int(input())
print(cal_fib(n))
