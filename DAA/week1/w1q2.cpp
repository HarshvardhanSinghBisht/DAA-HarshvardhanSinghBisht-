//binary search: searching the sorted array by repeatedly dividing the search interval in half.
#include <bits/stdc++.h>
using namespace std;

void binarysearch(vector<int> &v, int key)
{
    int low = 0;
    int high = v.size() - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (v[mid] == key)
        {
            cout<< mid;
        }
        else if (key > v[mid])

            low = mid + 1;

        else
            high = mid - 1;
    }
 return;
}

int main()
{
   vector<int>v;
   int n;
   cout<<"enter the no. of ele";
   cin>>n;
   cout<<"enter the element in a sorted order";
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   int key;
   cout<<"enter the key";
   cin>>key;

   binarysearch(v,key);

 return -1;
   
}