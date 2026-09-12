class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //brute solution 

    //     int m=matrix.size();
    //     int n=matrix[0].size();
    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(matrix[i][j]==0)
    //             {
    //                 markrow(i,n,matrix);
    //                 markcol(j,m,matrix);
    //             }
    //         }
    //     }
    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(matrix[i][j]==-1)
    //             {
    //                 matrix[i][j]=0;
    //             }
    //         }
    //     }
        
    // }
    // void markrow(int i,int n,vector<vector<int>>& matrix)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(matrix[i][j]!= 0)
    //         {
    //             matrix[i][j]=-1;
    //         }
    //     }
    // }
    // void markcol(int j,int m,vector<vector<int>>& matrix)
    // {
    //     for(int i=0;i<m;i++)
    //     {
    //         if(matrix[i][j]!= 0)
    //         {
    //             matrix[i][j]=-1;
    //         }
    //     }
    // }


    //better solution
    int m=matrix.size();
    int n=matrix[0].size();
    vector<int> row(m,0);
    vector<int>col(n,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                matrix[i][j]=0;
            }
        }
    }
    }
};