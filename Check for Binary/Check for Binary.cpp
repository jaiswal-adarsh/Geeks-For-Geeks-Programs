# Return true if str is binary, else false
def isBinary(str):
    #code here
    if str.count('1') + str.count('0') == len(str):
        return 1
    return 0


#{ 
 # Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        str = input().strip()
        if isBinary(str):
            print (1)
        else:
            print (0)
# } Driver Code Ends