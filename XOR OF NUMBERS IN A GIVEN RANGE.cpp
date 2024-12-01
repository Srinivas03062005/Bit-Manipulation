
 GIVEN AN INTEGER N,FIND THE XOR OF ALL NUMBERS FROM 1 TO N
 
 N=4
 1^2^3^4=4
 
 INT ANS=0
 FOR(INT I=1;I<=N;I++)
 {
 	ANS=ANS^I;
 }
 COUT<<ANS<<ENDL;
 TC IS O(N)
 SC IS O(1)
 
 BEST WAY
 
 
 N=1                            1
 N=2   1^2                      3
 N=3   1^2^3                    0
 N=4   1^2^3^4                  4
 
 N=5   1^2^3^4^5                1  
 N=6   1^2^3^4^5^6              7  
 N=7   1^2^3^4^5^6^7            0      
 N=8   1^2^3^4^5^6^7^8          8  
    
	
 FROM HERE THE OBSERVATION IS
 
 IF(N%4==1)     ANS IS    1
 IF(N%4==2)     ANS IS    N+1
 IF(N%4==3)     ANS IS    0
 IF(N%4==0)     ANS IS    N
 
 
#include<bits/stdc++.h>
using namespace std;
int xorofnumbersinagivenrange(int n)
{
    if(n%4==0)
        return n;
    else if(n%4==1)
        return 1;
    else if(n%4==3)
        return 0;
    else if(n%4==2)
        return n+1;
    return 0;    //this is dummy return statement
}
int main()
{
    int n;
    cin>>n;
    cout<<xorofnumbersinagivenrange(n);
    return 0;
}
 
 
 
	
IF THE QUESTION IS LIKE THIS L--->R
L=4   R=7
4^5^6^7

THE TRICK IS 

L=4   R=7
1^2^3  ^   1^2^3^4^5^6^7

WHILE DOING XOR SAME NUMBERS WILL GO OFF
SO THE ANSWER IS 4^5^6^7  



#include<bits/stdc++.h>
using namespace std;
int xorofnumbersinagivenrange(int n)
{
    if(n%4==0)
        return n;
    else if(n%4==1)
        return 1;
    else if(n%4==3)
        return 0;
    else if(n%4==2)
        return n+1;
    return 0;    //this is dummy return statement
}
int main()
{
    int l,r;
    cin>>l>>r;
    int ans=xorofnumbersinagivenrange(l-1)^xorofnumbersinagivenrange(r);
    cout<<ans;
    return 0;
}

        
