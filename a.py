n = input()
lst=[]
for i in range(0, n):
    ele = int(input())
  
    lst.append(ele)
q = input()
qq=[]
for k in range(0, q):
    elem = int(input())
  
    qq.append(elem)
total = sum(lst)

for p in range(0,q):
	total = (total%(1000000007)*(2%1000000007))%(1000000007)
	print(total)
