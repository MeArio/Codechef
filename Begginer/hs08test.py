want, total = input().split()
want = int(want)
total = int(total)
#total = int(input())
comission = 0.50
if want % 5 == 0:
    if total > (want + comission):
        total -= want + comission
print(total)
