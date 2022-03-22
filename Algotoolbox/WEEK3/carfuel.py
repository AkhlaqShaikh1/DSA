""" def MinRefills(x,n,L):
    numRefills = 0
    currentRefills =0
    while currentRefills <= n:
        lastrefill = currentRefills
        while currentRefills <= n and (x[currentRefills+1]-x[lastrefill] <= L):
            currentRefills +=1
        if currentRefills == lastrefill:
            return -1
        if currentRefills <= n:
            numRefills +=1
    return numRefills

def main():
    x = [200,375, 550, 750]
    n = 4
    L = 400
    answer = MinRefills(x,n,L)
    if(answer == -1):
        print("-1")
    else:
        print(answer)
    

main()
 """

max_Dist = int(input())
average = int(input())
stops_len = int(input())
stops = input().split()
stops.append(max_Dist)

count = 0
previousStation = 0
currentFuel = average

for i in range(stops_len):
    currentStation = int(stops[i])
    nextStation = int(stops[i+1])
    # check current fuil after traveling previous poin to up to this station
    currentFuel = currentFuel - (currentStation - previousStation)
    # check reruaird fuil
    requirdFuil = nextStation - currentStation
    if(requirdFuil > average):
        count = -1
        break
    if(requirdFuil > currentFuel):
        currentFuel += average
        count += 1
    #
    previousStation = currentStation

print(count)
