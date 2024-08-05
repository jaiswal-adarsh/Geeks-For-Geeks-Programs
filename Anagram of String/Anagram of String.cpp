# function to calculate minimum numbers of characters
# to be removed to make two strings anagram
def remAnagram(str1,str2):
    
    #add code here
    frequency = [0]*26

    

    for i in str1:

        frequency[ord(i)-ord('a')] += 1

    

    for j in str2:

        frequency[ord(j)-ord('a')] -= 1

        

    result = 0

    for n in frequency:

        result += abs(n)

    

    return result
    
    


#{ 
 # Driver Code Starts

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        str2=input()
        print(remAnagram(str1,str2))
# } Driver Code Ends