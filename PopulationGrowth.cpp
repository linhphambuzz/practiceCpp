*/In a small town the population is p0 = 1000 at the beginning of a year. 
The population regularly increases by 2 percent per year and moreover 50 new inhabitants per year come to live in the town. 
How many years does the town need to see its population greater or equal to p = 1200 inhabitants? */
//---------------------------------------------
#include<math.h> 
class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p);
};

int Arge::nbYear(int p0, double percent, int aug, int p){
  int year=0;  
  while (p0<p){
    p0= p0*(1+percent/100)+ aug ;
    p0=floor(p0); 
    year++; 
  }
  return year; 
    
}


