def mostActive(customers):
    dic={}
    n=len(customers)
    for i in customers:
        if i not in dic:
            dic[i]=1
        else:
            dic[i]+=1
    ans=[]
    for i in dic:
        a=(dic[i]*100)/n
        if(a>=5):
            ans.append(i)
    ans.sort()
    return ans
