#User function Template for python3
class Solution:

	def matchPairs(self, n, nuts, bolts):
		# code here
		nt=[]
		bt=[]
	    if '!' in nuts and '!' in bolts:
	        nt.append('!')
	        bt.append('!')
	    if '#' in nuts and '#' in bolts:
	        nt.append('#')
	        bt.append('#')
	    if '$' in nuts and '$' in bolts:
	        nt.append('$')
	        bt.append('$')
	    if '%' in nuts and '%' in bolts:
	        nt.append('%')
	        bt.append('%')
	    if '&' in nuts and '&' in bolts:
	        nt.append('&')
	        bt.append('&')
	    if '*' in nuts and '*' in bolts:
	        nt.append('*')
	        bt.append('*')
	    if '?' in nuts and '?' in bolts:
	        nt.append('?')
	        bt.append('?')
	    if '@' in nuts and '@' in bolts:
	        nt.append('@')
	        bt.append('@')
	    if '^' in nuts and '^' in bolts:
	        nt.append('^')
	        bt.append('^')
		for i in range(n):
		    nuts[i]=nt[i]
		    bolts[i]=bt[i]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        nuts = list(map(str, input().strip().split()))
        bolts = list(map(str, input().strip().split()))
        ob = Solution()
        ob.matchPairs(n, nuts, bolts)
        for x in nuts:
            print(x, end=" ")
        print()
        for x in bolts:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends