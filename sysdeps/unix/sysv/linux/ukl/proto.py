import os 
import sys
from subprocess import run, PIPE
from os.path import dirname,join

def sh(cmd):
    return run(cmd,stdout=PIPE).stdout.decode('utf-8')

files = os.listdir(join(dirname(__file__),'protos'))
for file in files:
    file = join('protos',file)
    with open(file) as fp:
        lines = fp.readlines()
    for i,line in enumerate(lines):
        if 'errno' in line:
            lines.pop(i)
            break
    with open(file,'w') as fp:
        fp.writelines(lines)
