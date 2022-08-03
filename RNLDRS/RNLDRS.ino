#include "math.h"  
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x23,16,2);  //

//ENTRADAS SENSORES
int s0 = A0;   
int s1 = A1;   
int s2 = A2;   
int s3 = A3;   
int s4 = A4;   
int s5 = A5;   
int s6 = A6;   
int s7 = A7;   
int s8 = A8;   
int s9 = A9;   
int s10 = A10;   
int s11 = A11;   


 
int p1 = 0;   
int p2 = 0;   
int p3 = 0;   
int p4 = 0;   
int p5 = 0;   
int p6 = 0;   
int p7 = 0;   
int p8 = 0;   
int p9 = 0;   
int p10 = 0;   
int p11 = 0;   
int p12 = 0;   

float n1 , n2 , n3, n4, n5, n6, n7, n8 , n9, n10 , n11, n12,n13,n14,n15; // variables de las salidas de las neuronas
float a1 , a2 , a3, a4, a5, a6, a7, a8 , a9, a10 , a11, a12 ; // las salidas de las funciones de activacion 
float e=2.7182818 ; // Definimos e para trabjar con la tanjente hiperbolica


void setup() { 
   
   pinMode (s0 , INPUT);
   pinMode (s1 , INPUT);
   pinMode (s2 , INPUT);
   pinMode (s3 , INPUT);
   pinMode (s4 , INPUT);
   pinMode (s5 , INPUT);
   pinMode (s6 , INPUT);
   pinMode (s7 , INPUT);
   pinMode (s8 , INPUT);
   pinMode (s9 , INPUT);
   pinMode (s10 , INPUT);
   pinMode (s11 , INPUT);
   Serial.begin(9600);
   lcd.init();
  
  }

  
void loop()
{

  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0);
  lcd.print("Figuras UPS !!");
  
   p1 = analogRead(s0);
   p2 = analogRead(s1);
   p3 = analogRead(s2);
   p4 = analogRead(s3);
   p5 = analogRead(s4);
   p6 = analogRead(s5);
   p7 = analogRead(s6);
   p8 = analogRead(s7);
   p9 = analogRead(s8);
   p10 = analogRead(s9);
   p11 = analogRead(s10);
   p12 = analogRead(s11);


   
   
 
   Serial.print(p1);
   Serial.print(" ");
   Serial.print(p2);
   Serial.print(" ");
   Serial.print(p3);
   Serial.print(" ");
   Serial.print(p4);
   Serial.print(" ");
   Serial.print(p5);
   Serial.print(" ");
   Serial.print(p6);
   Serial.print(" ");
   Serial.print(p7);
   Serial.print(" ");
   Serial.print(p8);
   Serial.print(" ");
   Serial.print(p9);
   Serial.print(" ");
   Serial.print(p10);
   Serial.print(" ");
   Serial.print(p11);
   Serial.print(" ");
   Serial.print(p12);
   Serial.println(" ");


   // definimos la sumatoria de nuestra neurona

n1= p1 * (-0.0027) + p2 * (0.0012) + p3 * (-0.0006) + p4 * (0.0019) + p5 * ( 0.0024) + p6* (0.0009) + p7 * ( 0.0005) + p8 * (-0.0016) + p9 * (0.0032) + p10 * (-0.0005) + p11 * (0.0007) + p12 * (-0.0004) + (-0.8071) ;
n2= p1 * (-0.0011) + p2 * ( 0.0010) + p3 * (0.0007) + p4 * (0.0032) + p5 * (-0.0015) + p6* (0.0017) + p7 * (0.0045) + p8 * (0.0000) + p9 * (0.0024) + p10 * (-0.0009) + p11 * (0.0004) + p12 * (-0.0008) + (0.6439) ;
n3= p1 * (-0.0007) + p2 * (-0.0017) + p3 * (-0.0034) + p4 * (0.0023) + p5 * (0.0001) + p6* (0.0021) + p7 * (0.0024) + p8 * (-0.0014) + p9 * (0.0023) + p10 * (-0.0002) + p11 * (0.0006) + p12 * (0.0004) + (2.0218) ;
n4= p1 * (0.0021) + p2 * (0.0023) + p3 * (0.0012) + p4 * (-0.0015) + p5 * (-0.0031) + p6* (-0.0023) + p7 * (0.0010) + p8 * (-0.0004) + p9 * (0.0020) + p10 * (-0.0021) + p11 * (-0.0001) + p12 * (0.0000) + (-1.2393) ;
n5= p1 * (-0.0034) + p2 * (0.0014) + p3 * (0.0009) + p4 * (-0.0021) + p5 * (0.0014) + p6* (-0.0019) + p7 * (-0.0029) + p8 * (0.0025) + p9 * (0.0009) + p10 * (-0.0005) + p11 * (0.0014) + p12 * (-0.0005) + (1.0027) ;
n6= p1 * (0.0016) + p2 * (-0.0029) + p3 * (0.0006) + p4 * (0.0013) + p5 * (0.0006) + p6* (-0.0042) + p7 * (-0.0008) + p8 * (-0.0014) + p9 * (0.0014) + p10 * (-0.0018) + p11 * (-0.0019) + p12 * (-0.0024) + (1.0989) ;
n7= p1 * (-0.0017) + p2 * (-0.0031) + p3 * (-0.0029) + p4 * (0.0028) + p5 * (-0.0003) + p6* (0.0015) + p7 * (0.0021) + p8 * (-0.0015) + p9 * (-0.0006) + p10 * (-0.0017) + p11 * (-0.0003) + p12 * (-0.0001) + (-2.2818) ;
n8= p1 * (-0.0025) + p2 * (0.0024) + p3 * (-0.0005) + p4 * (-0.0019) + p5 * (0.0003) + p6* (-0.0016) + p7 * (0.0001) + p8 * (0.0009) + p9 * (0.0014) + p10 * (0.0003) + p11 * (0.0004) + p12 * (-0.0001) + (-0.0355) ;
n9= p1 * (-0.0007) + p2 * (0.0008) + p3 * (-0.0021) + p4 * (-0.0033) + p5 * (0.0015) + p6* (-0.0031) + p7 * (0.0012) + p8 * (0.0012) + p9 * (-0.0012) + p10 * (-0.0006) + p11 * (-0.0019) + p12 * (-0.0009) + (-0.9654) ;
n10= p1 * (0.0020) + p2 * (-0.0001) + p3 * (0.0015) + p4 * (0.0030) + p5 * (0.0008) + p6* (-0.0021) + p7 * (0.0037) + p8 * (0.0016) + p9 * (0.0017) + p10 * (0.0003) + p11 * (-0.0012) + p12 * (-0.0019) + (0.7761) ;
n11= p1 * (-0.0015) + p2 * (-0.0003) + p3 * (0.0019) + p4 * (0.0023) + p5 * (0.0002) + p6* ( 0.0014) + p7 * (0.0018) + p8 * (-0.0005) + p9 * (0.0039) + p10 * (0.0008) + p11 * (-0.0012) + p12 * (0.0008) + (-3.6886) ;
n12= p1 * (-0.0023) + p2 * (0.0003) + p3 * (-0.0014) + p4 * (0.0031) + p5 * (-0.0017) + p6* (-0.0002) + p7 * (-0.0025) + p8 * (-0.0005) + p9 * (0.0001) + p10 * (-0.0028) + p11 * (0.0014) + p12 * (-0.0014) + (1.1725) ;


   a1 = tansig ( n1 ) ; 
   a2 = tansig ( n2 );
   a3 = tansig ( n3 );
   a4 = tansig ( n4);
   a5 = tansig ( n5);
   a6 = tansig ( n6);
   a7 = tansig ( n7);
   a8 = tansig ( n8);
   a9 = tansig ( n9);
   a10 = tansig ( n10);
   a11 = tansig ( n11);
   a12 = tansig ( n12);

n13 = a1 *(-0.5930) + a2 *(-0.8929) + a3 *(-0.6694) + a4 *(-0.3404) + a5 *(-0.8600) + a6 *(-0.4271) + a7 *(0.0242) + a8 *(0.4642) + a9 *(-0.5210)+ a10 *(0.6848)+ a11 *(0.5878)+a12 *( 0.3752) + (0.6591) ;
n14 = a1 *(0.6275) + a2 *(-0.2499) + a3 *(0.8244) + a4 *(-0.5915) + a5 *(0.9001) + a6 *(0.3743) + a7 *(0.4427) + a8 *(0.4997) + a9 *(0.0417)+ a10 *(0.3258)+ a11 *(-0.0618) + a12 *(0.9737) + (0.4122) ;
n15 = a1 *(-0.2132) + a2 *(0.5500) + a3 *(-0.3616) + a4 *(0.5344) + a5 *(-0.6835) + a6 *(-0.7177) + a7 *(0.8577) + a8 *(-0.18540) + a9 *(-0.5618)+ a10 *(0.6325)+ a11 *(-0.3810) + a12 *(0.5399) + (0.1907) ;


n13=round(n13); //redondeamos para que no salga - negativos
n14=round(n14); //redondeamos para que no salga – negativos
n15=round(n15); //redondeamos para que no salga - negativos

Serial.println(n13);
Serial.println(n14);
Serial.println(n15);



if(n13==1)
{

  Serial.println("cuadrado");
  lcd.setCursor(0,1);
  lcd.print("cuadrado");
}

if(n14==1)
{
  
  Serial.println("circulo");
  lcd.setCursor(0,1);
  lcd.print("circulo");
}

if(n15==1)
{
  Serial.println("triangulo");
  lcd.setCursor(0,1);
 lcd.print("trinagulo");
}

   delay(1000);
   }


   // definimos la funcion tangente hiperbolica
// funcion tansig
float tansig ( float x ) { 
  float a ; 
  
  a = ( pow ( e , x ) -pow ( e , -x ) ) / ( pow ( e , x ) + pow ( e , -x ) ) ; 
  return a ; // regreseamos el valor de a
  }
