def count_ranged_pairs(x, a, b):
    x.sort()

    output = [0] * len(x)
    output2 = [0] * len(x)

    i, j = 0, len(x)-1
    while i - j <= 0:
      if x[i] + x[j] >= a:
        output[j] = i
        j -= 1
      else:
        output[i] = j + 1
        i += 1

    i, j = 0, len(x) - 1
    while i-j <= 0:
      if x[i] + x[j] <= b:
        output2[i] = j
        i += 1
      else:
        output2[j] = i-1
        j -=1

    answer = [o2 - o + 1 - (o <= i <= o2) for i, (o, o2) in enumerate(zip(output, output2))]
    return int(sum(answer)/2)


def main():
    t = int(input())
    while t:
        n, l, r = map(int, input().split())
        arr = list(map(int,input().split()))
        print(count_ranged_pairs(arr, l, r))
        t -= 1
    return


if __name__ == '__main__':
    main()