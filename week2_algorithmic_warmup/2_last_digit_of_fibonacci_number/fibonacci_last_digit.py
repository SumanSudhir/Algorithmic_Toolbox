# Uses python3
import sys
#import time
#S = time.time()
def get_fibonacci_last_digit_naive(n):
    F = []
    F.append(0)
    F.append(1)
    for i in range(2,n+1):
        F.append((F[i-1]%10 + F[i-2]%10)%10)
    return F[n]

#if __name__ == '__main__':
#   input = sys.stdin.read()
n = int(input())
print(get_fibonacci_last_digit_naive(n))
#E = time.time()
#print(E-S)
