#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

if __name__ == '__main__':
    s = sorted(input().strip())
    
    x=Counter(s).most_common(3) #get the highest repeated number
    #print(x)
    
    for i in range(3):
        print(x[i][0],x[i][1])
