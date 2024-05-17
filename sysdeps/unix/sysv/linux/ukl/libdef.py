import sys

while True:
    line = sys.stdin.readline()
    if not len(line):
        break
    line = line.strip().split()
    for fname in line:
        if not any(["libc_hidden_def" in line for line in open(fname)]):
            print(fname)
