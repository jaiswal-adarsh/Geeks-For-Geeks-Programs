#User function Template for python3
from math import sqrt, gcd
class Solution:
    def InternalCount(self, p, q, r):
        #code here
        x1, y1 = p[0], p[1]
        x2, y2 = q[0], q[1]
        x3, y3 = r[0], r[1]
        A = self.area(x1, y1, x2, y2, x3, y3)
        b1 = self.boundry(x1, y1, x2, y2)
        b2 = self.boundry(x1, y1, x3, y3)
        b3 = self.boundry(x3, y3, x2, y2)
        B = b1 + b2 + b3 + 3
        return ( A - B + 2) // 2
        
    def boundry(self, x1, y1, x2, y2):
        if x1 == x2:
            return abs(y1 - y2) - 1
        elif y1 == y2:
            return abs(x1 - x2) - 1
        
        return gcd(abs(x1 - x2), abs(y1 - y2)) - 1
        
        
    
    def area(self, x1, y1, x2, y2, x3, y3):
        return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))




#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        p=[0]*2
        q=[0]*2
        r=[0]*2
        p[0],p[1],q[0],q[1],r[0],r[1]=map(int,input().strip().split(" "))
        ob=Solution()
        ans=ob.InternalCount(p,q,r);
        print(ans)
# } Driver Code Ends