


POWER SET(PRINT ALL SUBSETS)
NUMS=[1,2,3]
[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]
TOTAL 8 SUBSETS

NO OF SUBSETS IS 2^SIZE OF ARRAY OR (1<<N) EX (FOR 8 = 2^3=1<<3=1000)

[1,2,3]
 0 1 2  -> INDEXING

 2 1 0  
 DEC    BIN                                FOR 8
 0 0 0  0     []                           4 2 1
 0 0 1  1     [1]
 0 1 0  2     [2]
 0 1 1  3     [1,2]
 1 0 0  4     [3]
 1 0 1  5     [1,3]
 1 1 0  6     [2,3]
 1 1 1  7     [1,2,3]

                                          FOR 16
                                          8 4 2 1
                      
0 SIGNIFIES NOT TAKE
1 SIGNIFIES TAKE



PSEUDO CODE

subsets=1<<n 
ans=[]

for(num=0->subsets-1)
{
    list=[]
	for(i=0->n-1)
	{
	    if(num&(1<<i)!=0)
		{
			list.add(nums[i]);
		}	
	}  
	ans.add(list)
}

return ans;
TC IS O(N*2^N)
SC IS O(2^N*N)






CODE

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int size=pow(2,n);
	for(int i=0;i<size;i++)
	{
	    cout<<'{';
	    for(int j=0;j<n;j++)
	    {
	        if(i&(1<<j))
	        {
	            cout<<a[j]<<" ";
	        }
	    }
	    cout<<'}'<<endl;
	}
    return 0;
}
