#User function Template for python3

def isValid(s):
    #code here
    l = s.split(".")
    if(len(l) != 4):
        return 0
    for i in l:
        si = len(i)
        if(si > 3 or si  == 0):
            return 0
        
        if(i[0] == "0" and si >1):
            return 0
            
        try:
            k = int(i)
        except:
            return 0
        else:
            if(k == 0):
                if(si > 1):
                    return 0
                    
        if(k > 255 or k < 0):
            return 0
    
    return 1          



#{ 
 # Driver Code Starts
#Initial Template for Python 3

    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValid(s)):
            print(1)
        else:
            print(0)
    

# } Driver Code Ends