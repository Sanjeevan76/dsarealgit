#include<iostream>
#include<vector>
using namespace std;

// int printN(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     return n+printN(n-1);
// }



// int printN(int n,  vector<int>&ans)
// {
//     if(n==0)return ans[0]= 0;
//     if(n==1)return ans[1]= 1;
//       if (ans[n] != -1) return ans[n];
//     ans[n]= printN(n-1,ans)+printN(n-2,ans);
//     return ans[n];
// }

// int main()
// {   
//     int n;
    
//     cout<<"enter number";
//     cin>>n;
//     cout<<endl;
//     vector<int>ans(n+1,-1);
//    printN(n,ans);
//    for(int i=0;i<=n;i++)
//    {
//     cout<<ans[i]<<" ";
//    }
//     return 0;
// }

// int fact(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main()
// {
//     int n=3;
//    cout<< fact(n);
// }


// void series(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
     
//   series(n-1);
//   cout<<n;
  
// }

// int main()
// {
//     int n;
//     cout<<"enter number"<<endl;
//     cin>>n;
//    series(n);
//    return 0;
// }

//sum of first n number

// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
   
//    int result= n+sum(n-1); 
//    return result;
// }

// int main()
// {
//     int n;

//     cout<<"enter value of n";
//     cin>>n;
//    cout<< sum(n);

// }



// void reverse( string value,int &i,string &ans)
// {
//     if(i<0)
//     {
//         return ;
//     }
//   ans=ans+value[i];
//   i--;
//   reverse(value,i,ans);

// }
// int main()
// {
//     string value="sanjeevan";
//     int n=value.size()-1;
//      string ans="";
//     reverse(value,n,ans);
//     cout<<ans;
// }

int powerf(int p,int q )
{
    if(p==0)
    {
        return 0;
    }
    if(q==0)
    {
        return 1;
    }
    if(q==1)
    {
        return p;
    }
    return p*powerf(p,q-1);
}

int main()
{
    int p,q;
    cout<<"enter value of p and q";
    cin>>p>>q;
   cout<< powerf(p,q);
}

