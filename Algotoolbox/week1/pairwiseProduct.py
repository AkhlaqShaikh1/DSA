from typing import List


def maxProduct(numbers : List):
    max1 = -1
    n = len(numbers)
    for i in range(0,n):
        if max1 == -1 or numbers[i] > numbers[max1]:
            max1 = i

    max2 = -1
    for j in range(0,n):
        if j!= max1 and (max2==-1 or numbers[j] > numbers[max2]):
            max2 = j
    
    result = numbers[max1] *  numbers[max2]
    return result


def main():
    numb = []
    n = int(input())
    for i in range(0,n):
        ele = int(input())
        numb.append(ele)
    res = maxProduct(numb)
    print(res)

main()
