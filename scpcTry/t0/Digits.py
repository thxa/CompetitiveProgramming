s = input()
chars = dict()
for c in s:
    if chars.get(c): chars[c] += 1
    else: chars[c] = 1
s = list(s)
index = 0
while(len(s) > index):
    if (chars.get(s[index]) > 1):
        chars[s[index]] -= 1
        s[index] = "-"
    index+=1
s = "".join(s).replace('-', "")
print(s, end="")
