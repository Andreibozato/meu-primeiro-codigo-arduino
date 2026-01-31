#define VM1 2
#define AM1 3
#define VD1 4
#define PD_VM1 5
#define PD_VD1 6
#define VM2 7
#define AM2 8
#define VD2 9
#define PD_VM2 10
#define PD_VD2 11


void setup() {
  pinMode (VM1, OUTPUT);
 pinMode (AM1, OUTPUT);
 pinMode (VD1, OUTPUT);
 pinMode (PD_VM1, OUTPUT);
 pinMode (PD_VD1, OUTPUT);
 pinMode (VM2, OUTPUT);
 pinMode (AM2, OUTPUT);
 pinMode (VD2, OUTPUT);
 pinMode (PD_VM2, OUTPUT);
 pinMode (PD_VD2, OUTPUT);
}

void verde () {
  
 
}
void loop() {


  digitalWrite (VM1,0);
  digitalWrite (VD1,1);
  digitalWrite (AM1,0);
  digitalWrite (PD_VM1,1);
  digitalWrite (PD_VD1,0);
 
  digitalWrite (VM2,1);
  digitalWrite (VD2,0);
  digitalWrite (AM2,0);
  digitalWrite (PD_VM2,0);
  digitalWrite (PD_VD2,1);
  
  delay(4000);
  digitalWrite (VM1,0);
  digitalWrite (VD1,0);
  digitalWrite (AM1,1);
   
   digitalWrite (VM2,1);
  digitalWrite (VD2,0);
  digitalWrite (AM2,0);
  
  
  delay(2000);
  digitalWrite (VM1,1);
 digitalWrite (VD1,0);
  digitalWrite (AM1,0);
  digitalWrite (PD_VM1,0);
  digitalWrite (PD_VD1,1);

  digitalWrite (VM2,0);
  digitalWrite (VD2,1);
  digitalWrite (AM2,0);
  digitalWrite (PD_VM2,1);
  digitalWrite (PD_VD2,0);

 delay(5000);
  digitalWrite (VM1,1);
 digitalWrite (VD1,0);
  digitalWrite (AM1,0);
  digitalWrite (PD_VM1,0);
  digitalWrite (PD_VD1,1);

  digitalWrite (VM2,0);
  digitalWrite (VD2,0);
  digitalWrite (AM2,1);
  digitalWrite (PD_VM2,1);
  digitalWrite (PD_VD2,0);
  
  delay(2000);
 digitalWrite (VM1,0);
  digitalWrite (VD1,1);
  digitalWrite (AM1,0);
  digitalWrite (PD_VM1,1);
  digitalWrite (PD_VD1,0);
  
  digitalWrite (VM2,1);
  digitalWrite (VD2,0);
  digitalWrite (AM2,0);
  digitalWrite (PD_VM2,0);
  digitalWrite (PD_VD2,1);
  



 

}
