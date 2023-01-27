
def find(n,m,edges):
    indegree = calculate_indegree(n,edges)
    res = list()
    for key, value in indegree.items():
        if value ==0:
            res.append(key)
    return len(res)

def calculate_indegree(n,edges):
    ind = dict()
    for i in range(n):
        ind[i] = 0
    for edge in edges:
        src = edge[0]
        dest = edge[1]
        if dest not in ind:
            ind[dest] = 0
        ind[dest]+=1
    return ind

if __name__ == '__main__':
    q = int(input())
    for q_itr in range(q):
        n,m = list(map(int,input().split()))
        cities = []
        for _ in range(m):
            cities.append(list(map(int,input().split())))

        result = find(n,m,cities)
    print(result)