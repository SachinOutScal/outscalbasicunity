#include <iostream>
using namespace std;
int getBoxScore(char box){
   
  int currentScore; 
  //if(box is red ) {
  if(box == 'r') {
    currentScore = 10; 
    cout<<currentScore<<"\n"; 
    return currentScore; 
  }
  //else if(box is blue){
  else if(box == 'b') {
      currentScore = 20; 
    cout<<currentScore<<"\n"; 
    return currentScore;
  }
  else {
     currentScore = 0; 
    cout<<currentScore<<"\n"; 
    return currentScore;
  }
  
}

void calculatePlayerScore(char boxes[]) {
  int totalScore = 0;
   
  for(int i = 0; i < 4; i++){
    int score = getBoxScore( boxes[i] );
    totalScore = totalScore + score;
  }
  std::cout << "Total score: " << totalScore << "\n";
}
int main(){
  char boxes1[4] ;
   
      for(int i=0;i<4;i++)
      {
        cout<<"enter a char \n"; 
        cin>>boxes1[i]; 
      }
    calculatePlayerScore(boxes1);

    char boxes2[4] ;
      for(int i=0;i<4;i++)
      {
        cout<<"enter a char \n"; 
        cin>>boxes2[i]; 
      }
    calculatePlayerScore(boxes2); 

    return 0; 
}