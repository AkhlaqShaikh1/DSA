# Naive Algorithm
def gcdSlow(a,b):
    best =0
    for i in range(1,a+b):
        if(a%i==0 and b%i==0):
            best = i
    return best

def gcdFast(a,b):
    if b ==0:
        return a
    
    A = a%b
    return gcdFast(b,A)

result = gcdSlow(10,4)
res2 = gcdFast(10,4)
print(f"First Ans is {result} and second is {res2}")