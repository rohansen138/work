#include<iostram.h>
#include<stdio.h>
using namespace std;
 
int main()
{
   int z = -1;
 
   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (z < 0)
      {
         throw z;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int z ) {
      cout << "Exception Caught \n";
   }
 
   cout << "After catch (Will be executed) \n";
   return 0;
}
