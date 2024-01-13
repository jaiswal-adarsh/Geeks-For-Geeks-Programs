#User function Template for python3

class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        seen_rows = set()
        duplicates = []
    
        for row_num, row in enumerate(arr):
            row_tuple = tuple(row)
            if row_tuple in seen_rows:
                duplicates.append(row_num)
            else:
                seen_rows.add(row_tuple)
    
        return duplicates



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        arr = []
        for i in range(n):
            nums = list(map(int, input().strip().split()))
            arr.append(nums)
        ob = Solution()
        ans = ob.repeatedRows(arr, n, m)
        
        for x in ans:
            print(x, end=" ")
            
        print()
        tc -= 1

# } Driver Code Ends