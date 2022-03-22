def smallFact(n):
    fact =1
    while n>1:
        fact *= n
        n-=1
    return fact

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(smallFact(n))

main()