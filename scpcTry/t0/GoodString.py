s, k = str(input()).split()
k = int(k)
s = s.lower()
chars = dict()

for c in s:
    if chars.get(c):
        chars[c] += 1
    else: chars[c] = 1

for x in chars.keys():
    if chars.get(x) == k:
        print("YES %s" % x)
        break
else:
    print("NO")
