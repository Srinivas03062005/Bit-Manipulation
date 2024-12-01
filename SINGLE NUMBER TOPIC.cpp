 /*   SINGLE NUMBER 1 

EVERY ELEMENT APPEARS TWICE BUT ONE
ELEMENT APPEARS ONLY ONCE

4 1 2 1 2

ANS IS 4

XOR OF SAME NUMBERS IS ZERO

4^1^2^1^2
ANS IS 4


XOR=0;
FOR(INT I=0;I<ARRAYSIZE;I++)
{
	XOR=XOR^ARRAY[I];
}
COUT<<XOR;


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
    int xor1=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];
    }
    cout<<xor1<<endl;
    return 0;
}

*/





//PENDING 
/*STATEMENT IS
NUMS=[5,5,5,6,4,4,4]

ARRAY IS GIVEN ONE NUMBER APPEARS ONCE ALL 
OTHER NUMBERS APPEARS THRICE
FIND THAT SINGLE NUMBER

2 1 0

1 0 1 -> 5
1 0 1 -> 5
1 0 1 -> 5
1 1 0 -> 6
1 0 0 -> 4
1 0 0 -> 4
1 0 0 -> 4

NUMBER OF SET BITS
7 1 3
7->NOT A MULTIPLE OF 3 SO 1
1->NOT A MULTIPLE OF 3 SO 1
3->MULTIPLE OF 3       SO 0

110->6

PSEUDO CODE

ANS=0;
FOR(BITINDEX=0->31)
{
	COUNT=0;
	FOR(INT I=0->N-1)
	{
		IF(NUMS[I]&(1<<BITINDEX))
		{
			COUNT++;
		}
	}
	IF(COUNT%3==1)
	{
		ANS=ANS|(1<<BITINDEX);
	}
}*/



/*ANOTHER APPROACH 1

NUMS=[2,2,1,2,1,1,4,3,4,4]
   
PROCESS

SORT THE ARRAY
     [1,1,1,2,2,2,3,4,4,4]
     
FOR(INT I=1;I<N;I=I+3)
{
	IF(NUMS[I]!=NUMS[I-1])
	{
		RETURN NUMS[I-1];
	}
}

RETURN NUMS[N-1];
*/




