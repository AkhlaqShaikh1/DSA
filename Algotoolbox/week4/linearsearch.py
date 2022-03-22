from typing import List


def linearSearch(target, array:List):
    n = len(array)
    for i in array:
        if array[i] == target:
            return i
    else:
        return -1


def main():
    arr = [1,5,8,9,6,4,7,5,2,3,5]
    print(linearSearch(9,arr))

if __name__ == '__main__':
    main()       

