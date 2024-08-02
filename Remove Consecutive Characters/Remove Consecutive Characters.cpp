#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        # code here
        ans = S[0] if S else ''

        for i in range(1,len(S)):

            if S[i] != S[i-1]:

                ans += S[i]

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        s = input()
        ob = Solution()
        print(ob.removeConsecutiveCharacter(s))

# } Driver Code Ends