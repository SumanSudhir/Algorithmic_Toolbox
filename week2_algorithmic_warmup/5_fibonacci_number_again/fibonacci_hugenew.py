# Uses python3
import sys

def get_fibonacci_huge_naive(n, m):
    F = []
    F.append(0)
    F.append(1)
    for i in range(2,m+1):
        F.append((F[i-1] + F[i-2])%m)


if __name__ == '__main__':
    input = sys.stdin.read();
    n, m = map(int, input.split())
    print(get_fibonacci_huge_naive(n, m))
