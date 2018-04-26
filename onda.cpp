#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;



double seno(double x);

double seno(double x){
   
  return sin(2*M_PI*x);

}

int main(){

  double c=0.1;
  double t=0.5;
  double *u;
  double delta_x=0.01;
  double delta_t=0.00001;
  
  double *u_viejo;
  double *u_nuevo;
  double *u_viejo2;
  double min = 0.0 , max = 1.0 ;
  double x =0.0;
  double y;
  double k = c*c*delta_t*delta_t/(delta_x*delta_x);
  int xn = ((max-min)/delta_x) +1;
  int tn = xn* 0.5;  
 
  int i ;
  int j; 
  u = new double[xn];
  u_viejo= new double[xn];
  u_viejo2= new double[xn];
  u_nuevo= new double[xn];
  

  
  for (i =0; i<xn; i++){
   
    
    u_viejo[i]= seno(i * delta_x);
      
    }
 
  while(u_viejo[tn]> 0.5){
    u_nuevo[0]=0;
    u_viejo[xn-1]=0;

    for(j=0;j<xn;j++){
       for (i=0; i< xn ; i++){
     
	 u_nuevo[i]=k*(u_viejo[i+1]-u_viejo[i-1]-u_viejo2[i])/(2*k-1); 
     }


    }

     
    for(i=0; i < xn ; i++){

      u_viejo[i]= u_nuevo[i];

    }


  }
   for(i=0;i<xn;i++){

    cout << i * delta_x << " " << u_nuevo[i] << endl;
  }
 
    
 return 0; 
}
