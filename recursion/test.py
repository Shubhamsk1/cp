def gcd(x,y):
    if(x==y):
        return x
    elif(x>y):
        return gcd(x-y,y)
    else:
        return gcd(x,y-x)
t = int(input()) 
new_list_dig=[]
for i in range(1, t + 1):
    n, m = [int(s) for s in input().split(" ")] 
    list_dig=[int(s) for s in input().split(" ")] 
    print(len(list_dig))
    for i in range(1,len(list_dig)-2):
        cf=gcd(list_dig[i],list_dig[i+1])
        new_cf=int(list_dig[i]/float(cf))
        new_list_dig.append(cf)
        new_list_dig.append(new_cf)
    all_prime=set(new_list_dig)
    all_prime1=list(all_prime)
    all_prime1.sort()

    dict1={}
    for i,j in zip(range(65,91),all_prime1):
        dict1[j]=chr(i)

    for i in range(len(new_list_dig)):
        key=new_list_dig[i]
        print(dict1[key],end='')

    print(dict1.keys(),end='\n')
    print(dict1.values())
    