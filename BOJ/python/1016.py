import math
import sys

MIN, MAX = map(int, sys.stdin.readline().split())

answer = MAX-MIN+1
check = [False]*(MAX-MIN+1)
i=2
while i*i <= MAX:
    square_number = i*i 
    
    remain = 0 if MIN%square_number==0 else 1
    j = MIN//square_number + remain 
    while square_number*j <= MAX:
        if not check[square_number*j-MIN]:
            check[square_number*j-MIN]=True
            answer-=1
        j+=1
    i+=1        
print(answer)