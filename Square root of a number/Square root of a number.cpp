#User function Template for python3

import math
#Complete this function
class Solution:
    def floorSqrt(self, n): 
        return math.floor(math.sqrt(n))
    #Your code here
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


def main():
    T = int(input())
    while (T > 0):

        x = int(input())

        print(Solution().floorSqrt(x))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends