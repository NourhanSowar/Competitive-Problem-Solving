from collections import OrderedDict

def merge_the_tools(string, k):
    # your code goes here
    substring=[]

    for i in range (0,len(string),k):
        u_list=OrderedDict.fromkeys(string[i:i + k])
        #print(u_list)
        print (''.join(u_list))
        #substring.append(''.join(u_list))

    #print (substring)
        
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)