def minion_game(string):
    # your code goes here
    Kevin_Score=0
    Stuart_Score=0
    for i in range (len (string)):
        if (s[i] in 'AEIOU'):
            Kevin_Score+=(len(string))-i
            #print("Kevin_Score is ",Kevin_Score)
        else:
            Stuart_Score+=(len(string))-i
            #print("Stuart_Score is ",Stuart_Score)
    
    if Kevin_Score>Stuart_Score : 
        print("Kevin", Kevin_Score)
    elif Kevin_Score<Stuart_Score : 
        print("Stuart", Stuart_Score)
    else:
        print("Draw")
if __name__ == '__main__':
    s = input()
    minion_game(s)