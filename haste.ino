#define r1  5
#define f1  3
#define r2 9
#define f2 11
#define s1 4
#define s2 8
#define s3 10
#define s4 12
int a,b,c,e;

char lr;
void setup() {
  pinMode(8,INPUT);
  pinMode(10,INPUT);
  pinMode(12,INPUT);
  pinMode(4,INPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT); 
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

a=digitalRead(s1);
Serial.print("s1= ");
Serial.print(a);
b=digitalRead(s2);
Serial.print("s2= ");
Serial.print(b);
c=digitalRead(s3);
Serial.print("s3= ");
Serial.print(c);
d=digitalRead(s4);
Serial.print("s4= ");
Serial.println(d);

if (a==1) lr='l';
else if(d==1) lr='r';


if(b==1 && c==1)   // forward
{
  analogWrite(f1,100);
  analogWrite(r1,0);
  analogWrite(f2,100);
  analogWrite(r2,0);
}
if(a==1 && b==1 && c==1)   // forward
{
  analogWrite(f1,0);
  analogWrite(r1,0);
  analogWrite(f2,90);
  analogWrite(r2,0);
  
}

if(b==1 && c==1 && d==1)   // forward
{
  analogWrite(f1,90);
  analogWrite(r1,0);
  analogWrite(f2,0);
  analogWrite(r2,0);
}

else if(a==1)   // forward
{
  analogWrite(f1,30);
  analogWrite(r1,0);
  analogWrite(f2,65);
  analogWrite(r2,0);
}


else if(d==1)   // forward
{
  analogWrite(f1,85);
  analogWrite(r1,0);
  analogWrite(f2,40);
  analogWrite(r2,0);
}

//
//else  // forward
//{
//  analogWrite(f1,0);
//  analogWrite(r1,0);
//  analogWrite(f2,0);
//  analogWrite(r2,0);
//}

if (a==0 && b==0 && c==0 && d==0 && lr=='l')
{
  analogWrite(f1,0);
  analogWrite(r1,60);
  analogWrite(f2,60);
  analogWrite(r2,0);
 }
 if (a==0 && b==0 && c==0 && d==0 && lr=='r')
 {
  analogWrite(f1,80);
  analogWrite(r1,0);
  analogWrite(f2,0);
  analogWrite(r2,60);
    }

  
 if (a==1 && b==1 && c==1 && d==1  )
 {
  analogWrite(f1,80);
  analogWrite(r1,0);
  analogWrite(f2,0);
  analogWrite(r2,0);
 }  
 if(a==1 && d==1)   
{
  analogWrite(f1,70);
  analogWrite(r1,0);
  analogWrite(f2,0);
  analogWrite(r2,50);
}
 
 }

//  
// if (a==0 && b==0 && c==0 && d==0  )
// {
//  analogWrite(f1,80);
//  analogWrite(r1,0);
//  analogWrite(f2,80);
//  analogWrite(r2,0);
// }   }
