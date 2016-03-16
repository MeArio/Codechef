test_cases = int(input())
for i in range(0, test_cases):
    a = input()
    b = input()
    ok = False
    for c1 in a:
        for c2 in b:
            if c1 == c2:
                ok = True
                break
    if ok:
        print("Yes")
    else:
        print("No")
