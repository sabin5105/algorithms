alp = [-1]*26
word = input()

cnt = 1
for w in word:
    if alp[ord(w)-97] == -1:
        alp[ord(w)-97]+=cnt
    cnt+=1

print(alp)