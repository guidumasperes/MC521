user_input = input()
conv = "{0:b}".format(int(user_input))
rev = "".join(reversed(conv))
conv1 = int(rev, 2)
print(conv1)