# fast IO
# import math
import sys
input = sys.stdin.readline


def print(x, end='\n'):
    sys.stdout.write(str(x) + end)

# IO helpers


def get_int():
    return int(input())


def get_list_ints():
    return list(map(int, input().split()))


def get_char_list():
    s = input()
    return list(s[:len(s) - 1])


def get_tuple_ints():
    return tuple(map(int, input().split()))


def print_iterable(p):
    print(" ".join(map(str, p)))


def main():
    T = get_int()
    # N=get_int()
    for i in range(0, T):
        N =get_int()
        array = get_tuple_ints()
        maximum = array[0]
        minimum = array[0]
        for i in array:
            maximum = max(maximum, i)
            minimum = min(minimum, i)
        val1 = (maximum-1)*(maximum+1)+1
        val2 = (minimum-1)*(minimum+1)+1

        print(max(val1, val2))


if __name__ == '__main__':
    main()
