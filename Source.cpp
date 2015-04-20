#include <iostream>
#include <array>
using namespace std;
int n[4]={1,4,2,3};
double power(int powerof, double base) {
	if(powerof>1)
	{
	base= base*power(powerof-1, base);
	}
	return base;
}
int knapsack(int currentSum, int target, int index, int tab[]) 
 {
 cout <<"\n";
 for ( int i = index; i < 4 ; i ++) 
   {
   if (currentSum + tab[i] == target) 
     {
     cout<<"("<<tab[i]<<") ";
     return 0;
     // Success, we can stop searching
     }
   else if (currentSum + tab[i] < target) 
     {
       cout<<"("<<tab[i]<<") ";
      return knapsack(currentSum + tab[i] , target, index+1, tab);
     }
   }
 return currentSum;
 }
int main()
{
/*   if(knapsack(0, 10, 0, n)==0)
     {
     cout << ":) " << endl; 
     }
   else
     {
     cout << ":(" << endl; 
     }
  */
	cout<<power(2,3)<<endl;
   return 0;
}
using namespace std;
