def pisanoPeriod(m):
    prev, curr = 0,1
    for i in range(0,m*m):
        prev, curr /= curr, (prev+curr)%m;

        if(prev ==0 and curr ==1):
            return i+1

def fib_huge(n,m):
    pisano_per = pisanoPeriod(m)
    n = n % pisano_per
    pre, cu =0,1
    if n==0:
        return 0
    if n==1:
        return 1
    
    for i in range(n-1):
        pre,cu /=cu , pre + cu

    return(cu%m);


if __name__ == "__main__":
    n = 239
    m =1000
    print(fib_huge(n,m))