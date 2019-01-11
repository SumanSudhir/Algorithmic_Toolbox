# Uses python3
#Author Sudhir Kumar Suman 
import sys

def get_change(m):
    #write your code here
    m10 = int(m/10)
    m5 = int((m%10)/5)
    m1 = (m-m10*10-m5*5)
    m = m1+m5+m10
    return m

if __name__ == '__main__':
    m = int(input())
    print(get_change(m))
