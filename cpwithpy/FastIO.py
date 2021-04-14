# fast IO
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
    # code goes here
    # example:
    # a, b = get_tuple_ints()
    # l = [a + b, a - b]
    # print(a + b)
    # print_iterable(l)
    # pass
    T = get_int()
    for i in range(0, T):
        D, C = get_tuple_ints()
        a1, a2, a3 = get_tuple_ints()
        b1, b2, b3 = get_tuple_ints()
        s1 = a1+a2+a3
        s2 = b1+b2+b3
        s11 = s1+s2+2*D
        s12 = d(s1, D)+d(s2, D)+C
        if (s12 < s11):
            print("YES")
        else:
            print("NO")


def d(s, D):
    if (s >= 150):
        return s
    else:
        return s+D


if __name__ == '__main__':
    main()
