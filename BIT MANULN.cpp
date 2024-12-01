//CODE FOR CONVERTING DECIMAL TO BINARY SYSTEM

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string res="";
	while(n!=0)
	{
		if(n%2==1)
		{
			res=res+'1';
		}
		else
		{
			res=res+'0';
		}
		n=n/2;
	}
	if(res.size()==0)
	{
		cout<<0;
	}
	for(int i=res.size()-1;i>=0;i--)
	{
		cout<<res[i];
	}
	return 0;
}*/

/*TC IS O(LOG BASE 2 N)
SC IS O(LOG BASE 2 N)*/


//CODE FOR CONVERTING BINARY TO DECIMAL

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	int p2=1,num=0;
	for(int i=len-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			num=num+p2;
		}
		p2=p2*2;
	}
	cout<<num<<endl;
	return 0;
}*/


/*WHEN WE SAY int a=13;
COMPUTERS ONLY STORES BITS 0 OR 1
SO 13 IN BINARY IS 1101 WILL BE STORED
BUT FOR INTEGER DATA TYPE 32 BITS BUT HERE THERE IS ONLY 4 BITS
OTHER 28 BITS WILL BE LEFT SIDE OF THAT 4 BITS AS ALL 0 ONLY
WHEN WE WANT TO READ THAT MEANS PRINTING COMPUTER CONVERTS THAT 
BINARY TO DECIMAL AND PRINT IT
*/



/*1`s COMPLIMENT


INTEGER 13 -> 1101

FLIP THE BITS (MEANS 1->0  AND 0->1)

              0010
IS 1`S COMPLIMENT OF 13
*/



/*2`s COMPLIMENT

1.GET 1`S COMPLIMENT
2.ADD 1 TO IT

1)
INTEGER 13 -> 1101

FLIP THE BITS (MEANS 1->0  AND 0->1)

              0010
IS 1`S COMPLIMENT OF 13


2)
ADD 1 TO 0010 THEN

0010
0001
____

0011
____

*/
  
  
/*&,|,^ OPERATORS IN NOTES
   
AND ALL TRUE->TRUE
    1 FALSE->FALSE
	
OR 1 TRUE->TRUE
   ALL FALSE->FALSE
   
XOR NO OF 1`S->ODD->1
    NO OF 1`S->EVEN->0

RIGHT SHIFT  >>   
	 
	 13>>1
	 1101
	  110-->6 IN DECIMAL
	  
	 13>>2
	 1101
	   11-->3 IN DECIMAL
	   
	 13>>4
	 1101
	     --> 0 IN DECIMAL    
	     
	 THERE IS A SIMPLE FORMULA TO GET THE DECIMAL VALUE
	 
	 X>>K  --->  X/2^K
	 THE PROOF IS
	 
	 13>>1
	 1101  1*2^3+1*2^2+0*2^1+1*2^0
	  110  1*2^2+1*2^1+0*2^0
	  
	      HERE THE DIFF IS ONE 2 IS DECREASED    
	      13/2^1
	 
*/

/*X=13      X=-13
HOW DOES THE COMPUTER STORES THIS - AND +
INTEGER HAS 32 BITS 
LEFT MOST BIT 
DECIDES + OR -
0-> +
1-> -

HOW DOES THE COMPUTER STORE -13

WHENEVER THE COMPUTER HAS TO STORE A NEGATIVE NUMBER
WITHIN ITSELF IT CONVERTS IT INTO ITS 2`S COMPLEMENT
FOR 13
1101

0010
____+1
0011
LEFT ALL ARE 1`S 
*/

/*
LEFT SHIFT  <<
   
   13<<1
   
   0000.......1101
             11010----> 26 IN DECIMAL
             
   1*2^3+1*2^2+0*2^1+1*2^0
   1*2^4+1*2^3+0*2^2+1*2^1
   
   DIFF IS ONE 2 INCREASED
    
   X<<K     ----->      X*2^K

*/


/*NOT(~)
X=~(5)
1)FLIP
2)CHECK -VE
 IF NEGATIVE
 CONVERT IT INTO 2`S COMPLIMENT
 OTHERWISE STOP
 
5  IN BINARY 0 0 0 0........1 0 1
FLIP
1 1 1 1........0 1 0
LEFT MOST BIT 1 SO -VE
SO 2`S COMPLIMENT
  0 0 0........1 0 1
                  +1
  0 0 0......0 1 1 0   IT IS EQUAL TO 6
  
SIGN BIT SAYS -
SO ENTIRE IS -6
THIS IS WHAT COMPUTER STORES

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int x=~5;
    cout<<x<<endl;
    return 0;
}
OUTPUT IS -6

X=~(-6)
COMPUTER STORES NEGATIVE NUMBERS IN 2`S COMPLIMENT FORMAT
FIRST WHAT IS 6
0 0 0 ........ 1 1 0
1 1 1 ........ 0 0 1
                  +1
                  
1 1 1......1 1 0 1 0 
NOW APPLY NOT OPERATOR TO THIS 2`S COMPLIMENT

FLIP
0 0 0 .......... 1 0 1
IT IS NOT NEGATIVE
SO STOP
IT IS EQUAL TO 5

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int x=~-6;
    cout<<x<<endl;
    return 0;
}
OUTPUT  IS 5
*/

//1ST VIDEO DONE 



/*
SWAP TWO NUMBERS

-> XOR OF SAME NUMBERS IS 0

A=A^B
B=A^B   -->  (A^B)^B=A
A=A^B   -->  (A^B)^B   -->  (A^B)^A=B



CHECK IF THE I TH BIT IS SET OR NOT

N=13 I=2
1101
3210   -> INDEXING
SET


N=13 I=1
1101
3210   -> INDEXING
NOT SET

 
USING LEFTSHIFT OPERATOR WE CAN DO THIS
N=13 I=2
1<<I

  1101
 & 100
 -----
  0100
  
  IF(N&(1<<I))!=0) SET
  ELSE NOT SET
  
  
USING RIGHTSHIFT OPERATOR ALSO WE CAN DO THIS
N=13 I=2
N>>I

1101

  0011
 &0001
 -----
  0001
  
IF((N>>I)&1==0) UNSET
ELSE SET
*/


/*
SET THE I TH BIT

N=9 I=2

1001 --> 1101 (13)

1001
0100
----
1101
----

N|(1<<I)
*/


/*
CLEAR THE I TH BIT
0->0
1->0

N=13 I=2

           1101
   & 1111111011
    -------------
            1001
    -------------
    
N&~(1<<I)
*/


/*TOGGLE THE I TH BIT 

IF THE I TH BIT IS 0->1
ELSE THE I TH BIT IS 1->0

N=13 I=2
1101
1001->9

N=13 I=1
1101
1111

PROCESS FOR THIS IS
N=13 I=2
1<<I
1101
0100 ^
____
1001
____


N=13 I=1
1<<I
1101
0010 ^
____
1111
____
*/

/*REMOVE THE LAST SET  BIT (RIGHT MOST)

110110
ANS IS 110100

N=16=2^4
10000
N=15
01111

N=40
101000
N=39
100111

N=84
1010100
N=83
1010011

HERE THE OBSERVATION IS 
FOR N-1
LAST BIT(RIGHTMOST) BECOMES 0
AND RIGHT FROM THERE ALL ONES

FINALLY TO REMOVE LAST SET BIT (RIGHT MOST)
DO N&N-1
*/

/*CHECK IF THE NUMBER IS POWER OF 2

N=16  10000(THERE IS ONE SET BIT SO YES)
N=13  1101(THERE IS MORE THEN 1 SET BIT SO NO)
N=32  100000(YES)
EVERY POWER OF 2 WILL HAVE ONE SET BIT

ANSWER TO THIS IS

IF N&N-1==0 YES
ELSE NO

SO WHAT HAPPENS IS
FOR N=16
10000
01111
_____
00000
_____

FOR N=13
1101
1100
____
1100
____
*/

/*COUNT THE NUMBER OF SET BITS
________
(BETTER EXPLANATION THAN NOTES EXPLANATION)
BRUTE FORCE
N=13
COUNT=0
13 IN BINARY IS 1101
COUNT=3

int countsetbits(int n)
{
	int count=0;
	while(n>1)
	{
		if(n%2==1)
		{
			count++;
		}
		n=n/2;
	}
	if(n==1)
	{
		count++;
	}
	return count;
}
THE LAST BIT OF AN ODD NUMBER WILL ALWAYS BE 1

SO IN PLACE OF N%2==1
REPLACE N&1==1

OR IN PLACE OF 
 if(n%2==1) 
 {
	count++;
 }
 COUNT=COUNT+N&1; N&1=(FOR EVEN IT RETURNS 0 FOR ODD IT RETURNS 1)
 

IN PLACE OF
N=N/2
N=N>>1 (N/2)

THERE IS A FUNCTION IN C++ TO COUNT THE NO OF SET BITS

*******ANOTHER WAY FOR
COUNT THE NUMBER OF SET BITS
FOR 84 NUMBER

N=84
N-1=83

1010100
& 1010011
_________
1010000
_________

1010000
& 1001111
__________
1000000
__________

1000000
& 0111111
__________
0000000
__________


COUNT=0;
WHILE(N!=0)
{
	N=N&(N-1);
	COUNT++;
}
COUNT WILL BE NUMBER OF SET BITS
*/


