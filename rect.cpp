/*1.
ex-:
* * * *
* * * *
* * * *
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*2.
*
* *
* * *
* * * *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*3.
* * * *
* * *
* *
*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*4.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*5.
          *
        *  *
      * *  * *
    * * *  * * *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*6.
* * * * * * * 
  * * * * *
    * * *
      *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*7.              
          *
        *  *
      * *  * *
    * * *  * * *
    * * * * * * * 
      * * * * *
        * * *
          *
             

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/* 8.
          *
          * *
          * * *
          * * * *
          * * * 
          * * 
          * 
          

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
-------------------------------OR------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n) star= 2*n-i; 
        for(int j=1;j<=star;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/* 9.
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*10 .
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


/*11.
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else  start=0;
        for(int j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 12
*           *
* *       * *
* * *   * * *
* * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
       space-=2;
    }
    return 0;
}
*/

/*13.
1        1
12      21
123    321
1234  4321
1234554321

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"j";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"j";
        }
        cout<<endl;
       space-=2;
    }
    return 0;
}
*/

/*14.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=1;
    for(int i=1;i<=n;i++)
    {
         for( int j=1;j<=i;j++)
        {
          cout<<start<<" ";
          start++;
        }
        cout<<endl;
     }
    return 0;
}
*/

/* 16.
A
A B       
A B C     
A B C D   
A B C D E 

#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    for(int  i=1;i<=n;i++)
    {
        for( char ch='A';ch<'A'+i;ch++)
        {
          cout<<ch<<" ";
        }
        cout<<endl;
        }
    return 0;
}
*/

/*17.
A B C D
A B C
A B
A


#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    for(int  i=1;i<=n;i++)
    {
        for( char ch='A';ch<='A'+(n-i-1);ch++)
        {
          cout<<ch<<" ";
        }
        cout<<endl;
         }
    return 0;
}
*/

/*18.
A
B B
C C C
D D D D
E E E E E
#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
     for(int  i=0;i<n;i++)
    {
       char s='A'+i;
        for( int j=0;j<=i;j++)
        {
          cout<<s<<" ";
         }
        cout<<endl;
     }
    return 0;
}
*/

/*19 .
     A
   A B A
  A B C B A
 A B C D C B A
A B C D E D C B A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
    {
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i+1);j++)
        {
            cout<<ch<<" ";
            if(j<=breakpoint)ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*20.
E
D E
C D E
B C D E
A B C D E

#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
     for(int  i=0;i<n;i++)
    {
        for( char ch='E'-i;ch<='E';ch++)
        {
          cout<<ch<<" ";
        }
        cout<<endl;
     }
    return 0;
}
*/

/*21.
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int s=0;
    for(int i=0;i<n;i++)
    {
       for(int j=1;j<=n-i;j++)
       {
        cout<<"*";
       }
       for(int j=0;j<s;j++)
       {
        cout<<" ";
       }
        for(int j=1;j<=n-i;j++)
       {
        cout<<"*";
       }
       s+=2;
       cout<<endl;
    }
     s=8;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<s;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        s-=2;
        cout<<endl;
       
    }
    return 0;
}
*/
/*22.
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int s=0;
     int s1=2*(n-1);
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<s1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        s1-=2;
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i;j++)
       {
        cout<<"*";
       }
       for(int j=0;j<s;j++)
       {
        cout<<" ";
       }
        for(int j=1;j<=n-i;j++)
       {
        cout<<"*";
       }
       s+=2;
       cout<<endl;
    }
    return 0;
}
*/
/*23.
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
       else  space+=2;
     }
    
    return 0;
}
*/
/*24.
*****
*   *
*   *
*   *
*****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
           if(i==1||j==1||i==n||j==n)
           {
            cout<<"*";
           }
           else{
            cout<<" ";
           }
       } 
       cout<<endl;
    }
    
    return 0;
}
*/
/*25.
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++)
    {
       for(int j=0;j<2*n-1;j++)
       {
           int top=i;
           int left=j;
           int right=(2*n-2)-j;
           int bottom=(2*n-2)-i;
           cout<<(n-min(min(top,bottom),min(left,right)));
       } 
       cout<<endl;
    }
    
    return 0;
}
*/