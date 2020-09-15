#include <iostream>


int consequtiveBoxCounter;
char lastBoxChar; 
// solution for 1 single score value 
void printScore(int score) {
      std::cout << "Box score is " << score << "\n";
}

int chkConequtiveCharacters( char currentboxCharacter){

  if (lastBoxChar == currentboxCharacter){
      consequtiveBoxCounter++; 

    } else {
      consequtiveBoxCounter =1; 
    }
    lastBoxChar = currentboxCharacter; 
    return consequtiveBoxCounter; 
}

// solution for 1 single box 
int getBoxScore(char box){
   
  int currentScore; 
  //if(box is red ) {
  if(box == 'r') {
    currentScore = 10*chkConequtiveCharacters('r'); 
    
  }
  //else if(box is blue){
  else if(box == 'b') {
      currentScore = 20*chkConequtiveCharacters('b'); 
    
  }
  else if (box != 'r' || box != 'b') {
      currentScore = 0; consequtiveBoxCounter =1; 
    
  }
    printScore(currentScore);  
    return currentScore; 
}

void calculatePlayerScore(char boxes[]) {
  int totalScore = 0;
  int consequtiveBoxCounter =1; //initialised for the current array
   
  for(int i = 0; i < 4; i++){
    int score = getBoxScore( boxes[i] );
    totalScore = totalScore + score;
  }
  std::cout << "Total score: " << totalScore << "\n";
}


int main() {
 

  char boxes1[] = {'b', 'r', 'b', 'r'};
  calculatePlayerScore(boxes1);

  char boxes2[] = {'b', 'r', 'b', 'b'};
  calculatePlayerScore(boxes2);

 
  return 0;
}