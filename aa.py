from collections import Counter
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    f = dict(Counter(a))
    f = list(f.items())
    f.sort(key = lambda x: x[1])
    m = f[-1][1]
    ct = 0
    while(m<n):
        m *=2
        ct+=1
    print(ct)