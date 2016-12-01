#include <iostream>
#include <cstddef>
using namespace std;
float sum(float x, float y)
{ 
        return (x + y);
}
float mult(float x, float y)
{ 
        return (x*y);
}
float *dev(float x, float y)
{ 
        if (y)        
        { 
        float *s=new float; 
        *s= x/y; 
        return s;         
        } 
        else return nullptr;
}
float sub(float x, float y)
{ 
        return(x - y);
}
float power (float x, float y)
{      
      float b; 
        b=1;         
          for (int i = 0; i <= y-1; i++)   
          {     
                 b = b * x;         
          } 
      return b;
}
float sq(float x)
{ 
      unsigned int div = 1, rslt = 0;
      while (x > 0) 
      { 
              x -= div, div += 2;  
              rslt += x < 0 ? 0 : 1; 
      } 
      return rslt;
}
int main()
{    
     float x, y;
     cin >> x;
     cin >> y;
     cout << sum( x, y ) << endl;   
     cout << sub( x, y ) << endl;    
     cout << mult( x, y ) << endl;    
     float *s=dev(x, y);    
     if (s)        
         cout << *s << endl;    
     else        
         cout << "Forbidden" << endl;    
     delete s;    
     cout << power( x, y ) << endl;    
     if (x >= 0)    
         cout << sq( x ) << endl;    
     else    cout << "Forbidden" << endl;        
     return 0;
}
