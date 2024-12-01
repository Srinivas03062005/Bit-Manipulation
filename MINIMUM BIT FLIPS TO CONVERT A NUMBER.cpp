/*
START =10        GOAL=7
1010             0111
TOTAL 3 BITS HAVE TO CHANGE


START =3        GOAL=4
011             100
TOTAL 3 BITS HAVE TO CHANGE


ANSWER FOR THIS IS 
1010    START
^ 0111  GOAL
______
1101->ANSWER
______
NUMBER OF SET BITS IN ANSWER IS THE FINAL ANSWER

COUNT=0
FOR(INT I=0;I<=31;I++)
{
	IF(ANS&(1<<I))
	{
		COUNT++;
	}
}
COUT<<COUNT<<ENDL;


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,goal;
    cin>>start>>goal;
    int ans=start^goal,count=0;
    for(int i=0;i<=31;i++)
    {
        if(ans&(1<<i))
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}


*/
