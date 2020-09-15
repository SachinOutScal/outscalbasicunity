#include <iostream>
using namespace std;
int getCurrentBoxScore(char box){
   
  int currentScore; 
  //if(box is red ) {
  if(box == 'r') {
    currentScore = 10;     
  }
  //else if(box is blue){
  else if(box == 'b') {
      currentScore = 20;    
  }
  else {
     currentScore = 0;     
  }

  cout<<currentScore<<"\n"; 
    return currentScore; 
}
int inputAndCalcBoxValues()
{
    char boxes[4] ;
    int totalScore =0; 
      for(int i=0;i<4;i++)
      {
        cout<<"enter a char \n"; 
        cin>>boxes[i]; 
        totalScore +=getCurrentBoxScore(boxes[i]); 
      }  
 return totalScore; 

}

int main(){
   
cout <<"ENTER VALUES FOR BOX1\n"<<inputAndCalcBoxValues()<<"\t Is total Box Score\n"; ; 

cout <<"ENTER VALUES FOR BOX2\n"<<inputAndCalcBoxValues()<<"\tIs total box Score\n";  

    return 0; 
}