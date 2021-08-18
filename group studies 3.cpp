#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float values [10];
  float variance = 0.0;
  float meanvalues = 0.0;
  float standardDeviations = 0.0;
  float SumValues = 0.0;
  float mean = 0.0;
  int i;
   cout<<"Enter 10 values"<<endl;
   for (i=1;i<=10;i++);
   {
       cin>>values[i];
       SumValues+=values[i];
       meanvalues = SumValues/10;
   }
   for(i=1;i<=10;i++);
   {
      variance = pow((values[i]-meanvalues),2);
      variance = variance/10;
      standardDeviations = sqrt (variance);
   }
   cout<<"The standard Deviation is"<<standardDeviations;

  return 0;

}
