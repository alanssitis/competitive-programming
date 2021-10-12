test_num = int(input())
for case in range(1, test_num + 1):
    n, k = (int(c) for c in input().split(' '))
    str = input()
    score = 0
    for i in range(len(str)//2):
        score += 1 if str[i] != str[n - i - 1] else 0
    print(f"Case #{case}: {abs(score - k)}")