n = input()
for i in range(int(n)):
    j = int(i) % 2
    if (j % 2 == 0):
        print(0, end = ' ')
    else:
        print(1, end = ' ')
print('')
for i in range(int(n)):
    j = int(i) % 2
    
    if (j % 2 == 1):
        print(0, end = ' ')
    else:
        print(1, end = ' ')