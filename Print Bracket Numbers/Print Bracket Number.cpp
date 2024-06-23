#User function Template for python3
class Solution:
	def bracketNumbers(self, str):
		# code here
		v,k = 0,[] 
		res = []
		for i in str:
		    if i=='(':
		        v+=1
		        k.append(v)
		        res.append(v)
		    if i==')':
		        x = k.pop()
		        res.append(x)
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input()
        ob = Solution()
        answer = ob.bracketNumbers(S)
        for value in answer:
            print(value, end=" ")
        print()

# } Driver Code Ends