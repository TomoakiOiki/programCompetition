import sys
import os
import re
import shutil
if __name__ == '__main__':
    count = 0
    filelist = os.listdir("./")
    for filename in filelist:
        if filename[0] == 'Y':
            count += 1
            pattern = '[0-9]+'
            match = re.findall(pattern,filename)
            if len(match) != 0:
                num = match[0]
                shutil.copy(filename,num+'.cpp')

    print(count)
