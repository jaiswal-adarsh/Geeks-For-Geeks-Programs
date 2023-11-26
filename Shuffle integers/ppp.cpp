def solve(n, lst):

    def CSA(arr):
        scnt = 0
        for i in range(size - 1):
            for j in range(0, size - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
                    scnt += 1
        return scnt

    def CSD(array):
        scnt = 0
        for i in range(size - 1):
            for j in range(0, size - i - 1):
                if arr[j] < arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
                    scnt += 1
        return scnt

  
    swapA = CSA(lst.copy())
    swapD = CSD(lst.copy())

    
    return min(swapA, swapD)


n = int(input())
lst = list(map(int, input().split()))


res = solve(n, lst)
print(res)


////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

int CSA(vector<int>& arr) {
    int sc = 0;
    int n = arr.size();
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                sc++;
            }
        }
    }
    
    return sc;
}


int CSD(vector<int>& arr) {
    int sc = 0;
    int n = arr.size();
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                sc++;
            }
        }
    }
    
    return sc;
}

int solve(int n, vector<int>& arr) {
    vector<int> v = arr;


    int swapA = CSA(arr);
    int swapB = CSD(v);


    return min(swapA, swapB);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int res = solve(n, arr);
    cout << res;
    cout << endl;

    return 0;
}


/////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, bool asc) {
    int sc = 0;
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((asc && arr[j] > arr[j + 1]) || (!asc && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
                sc++;
            }
        }
    }

    return sc;
}

int solve(int n, vector<int>& arr) {
    vector<int> v = arr;

    int swapA = solve(arr, true);
    int swapD = solve(v, false);

    return min(swapA, swapD);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int res = solve(n, arr);
    cout << res;

    return 0;
}
////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int cntd=0,cnta=0;
void CSD(int arr[], int n) {
  for (int p = 0; p < n - 1; ++p) {
    for (int i = 0; i < n - p - 1; ++i) {
      if (arr[i] < arr[i + 1]) {
        int tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
        cntd++;
      }
    }
  }
}

void CSA(int arr[], int n) {
  for (int p = 0; p < n - 1; ++p) {
    for (int i = 0; i < n - p - 1; ++i) {
      if (arr[i] > arr[i + 1]) {
        int tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
        cnta++;
      }
    }
  }
}

int main() {
    int n;
    cin>>n;
    int asc[n],dsc[n];
    for(int i=0;i<n;i++){
        cin>>asc[i];
        dsc[i]=asc[i];
    }
  CSD(asc, n);
  CSA(dsc, n);
  if(cntd>cnta)
  cout<<cnta;
  else
  cout<<cntd;
}
////////////////////////////////////////////


def solve(m, n, plyr1, dis1, plyr2, d2):
    cnt = 0

    while True:
        
        nplyr1 = (plyr1[0] + d1[0], plyr1[1] + d1[1])

        # Check if player 1 goes out of bounds
        if nplyr1[0] < 0 or nplyr1[0] >= m or nplyr1[1] < 0 or nplyr1[1] >= n:
            dis1 = (-dis1[0], -dis1[1])  # Reverse the direction for player 1

        plyr1 = nplyr1

        # Calculate the next position for player 2
        nplyr2 = (plyr2[0] + d2[0], plyr2[1] + d2[1])

        # Check if player 2 goes out of bounds
        if nplyr2[0] < 0 or nplyr2[0] >= m or nplyr2[1] < 0 or nplyr2[1] >= n:
            d2 = (-d2[0], -d2[1])  # Reverse the direction for player 2

        plyr2 = nplyr2

        # Check if both players overlap at the same position
        if plyr1 == plyr2:
            return cnt

        cnt += 1

    return "never"

# Read input
m, n = map(int, input().split())
pl1 = tuple(map(int, input().split()))
ds1 = tuple(map(int, input().split()))
pl2 = tuple(map(int, input().split()))
ds2 = tuple(map(int, input().split()))

# Find the number of steps until overlap
n = solve(m, n, pl1, ds1, pl2, ds2)

try:
    num_steps = int(n)
    print(num_steps + 1)
except:
    print("Never")


    ///////////////////////////////


#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int solve(int m, int n, pair<int, int> plyr1, pair<int, int> dis1, pair<int, int> plyr2, pair<int, int> dis2) {
    int cnt = 0;

    while (true) {
        pair<int, int> npl1 = {plyr1.first + dis1.first, plyr1.second + dis1.second};

        if (npl1.first < 0 || npl1.first >= m || npl1.second < 0 || next_p1.second >= n) {
            dis1 = {-dis1.first, -dis1.second};
        }

        plyr1 = npl1;

        pair<int, int> npl2 = {plyr2.first + dis2.first, plyr2.second + dis2.second};

        if (npl2.first < 0 || npl2.first >= m || npl2.second < 0 || npl2.second >= n) {
            dis2 = {-dis2.first, -dis2.second};
        }

        plyr2 = npl2;

        if (plyr1 == plyr2) {
            return cnt;
        }

        cnt++;

        if (cnt > 1000000) {
            return numeric_limits<int>::max();
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    pair<int, int> pl1, ds1, pl2, ds2;
    cin >> pl1.first >> pl1.second >> ds1.first >> ds1.second;
    cin >> pl2.first >> pl2.second >> ds2.first >> ds2.second;

    int steps = solve(m, n, pl1, ds1, pl2, ds2);

    if (steps == numeric_limits<int>::max()) {
        cout << "Never";
    } else {
        cout << steps + 1;
    }

    return 0;
}

////////////////////////////////////

#include <bits/stdc++.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 15

typedef struct {
    int row, col, dist;
} Cell;

bool is_valid(int row, int col, int rows, int cols) {
    return row >= 0 && row < rows && col >= 0 && col < cols;
}

int maze_runner(int maze[MAX_SIZE][MAX_SIZE], int rows, int cols, Cell start, Cell target) {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool visited[MAX_SIZE][MAX_SIZE];
    memset(visited, false, sizeof(visited));

    Cell queue[MAX_SIZE * MAX_SIZE];
    int front = 0, rear = 0;
    queue[rear++] = start;
    visited[start.row][start.col] = true;

    while (front != rear) {
        Cell current = queue[front++];
        
        if (current.row == target.row && current.col == target.col) {
            return current.dist;
        }

        for (int i = 0; i < 4; ++i) {
            int new_row = current.row + directions[i][0];
            int new_col = current.col + directions[i][1];

            if (is_valid(new_row, new_col, rows, cols) && !visited[new_row][new_col]) {
                visited[new_row][new_col] = true;

                if (maze[new_row][new_col] == 0 || maze[new_row][new_col] == 2) {
                    Cell next = {new_row, new_col, current.dist + 1};
                    queue[rear++] = next;
                } else if (maze[new_row][new_col] == 3) {
                    continue; // Skip dangerous path
                } else if (new_row == target.row && new_col == target.col) {
                    Cell next = {new_row, new_col, current.dist + 1};
                    queue[rear++] = next;
                }
            }
        }
    }

    return -1; // STUCK
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int maze[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &maze[i][j]);
        }
    }

    Cell start, target;
    scanf("%d %d", &start.row, &start.col);
    scanf("%d %d", &target.row, &target.col);

    int result = maze_runner(maze, rows, cols, start, target);
    printf("%d\n", result);

    return 0;
}