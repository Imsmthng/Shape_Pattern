/* *
 *  Shape Patterns in C++
 */
#include<iostream>
using namespace std;

int size = 0;
void Square_Shape(){
  cout << "Enter the size of the square: ";
  cin >> size;

  for(int rows = 0; rows < size; rows++){
    for(int cols = 0; cols < size; cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Left_Triangle(){
  cout << "Enter the size of Half Triangle: ";
  cin >> size;

  for(int rows = 0; rows < size; rows++){
    for(int cols = 0; cols < rows; cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Right_Triangle(){
  cout << "Enter the size of Right Triangle: ";
  cin >> size;

  int i = size;
  for(int rows = 0; rows < size; rows++){
    i = i - 1;
    for(int space = 0; space < i; space++){
      cout << " ";
    }
    for(int cols = 0; cols < rows; cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Full_Triangle(){
  cout << "Enter the size of Full Triangle: ";
  cin >> size;

  int i = size;
  for(int rows = 0; rows < size; rows++){
    i = i - 1;
    for(int space = 0; space < i; space ++){
      cout << " ";
    }
    for(int output = 0; output < (rows * 2 - 1); ++output){
      cout << "*";
    }
    cout << endl;
  }
}

void Diamond_Shape(){
  cout << "Enter size of Diamond: ";
  cin >> size;
  int i = size;
  for(int rows = 1; rows <= size; rows++){
    i = i - 1;
    for(int space = 1; space <= i; space++){
      cout << " ";
    }
    for(int cols = 1; cols <= (rows * 2 - 1); cols++){
      cout << "*";
    }
    cout << endl;
  }
  i = 1;
  for(int rows = 1; rows <= size - 1; rows++){
    for(int space = 1; space <= i; space++){
      cout << " ";
    }
    i++;
    for(int cols = 1; cols <= 2 * (size - rows) - 1; cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Inverted_Left_Triangle(){
  cout << "Enter size of Inverted Left Triangle: ";
  cin >> size;

  for(int rows = size; rows >= 1; rows--){
    for(int cols = 0; cols < rows; cols++){
      cout << "*";
    }
    cout << endl;
  }

}

void Inverted_Right_Triangle(){
  cout << "Enter size of Inverted Right Triangle: ";
  cin >> size;

  for(int rows = size; rows >=1; rows--){
    for(int space = rows; space < size; space++){
      cout << " ";
    }
    for(int cols = 0; cols < rows; cols++){
      cout << "*";
    }
    cout << endl;
  }

}

void Inverted_Full_Triangle(){
  cout << "Enter size of Inverted Full Triangle: ";
  cin >> size;

  for(int rows = size; rows > 0; rows--){
    for(int space = rows; space < size; space++){
      cout << " ";
    }
    for(int cols = 0; cols < (rows * 2 - 1); cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Heart_Shape(){

  cout << "Enter size of Hear Shape: ";
  cin >> size;
  int i = size;

  for(int rows = size / 2; rows <= size; rows = rows+2){
    for(int space = 1; space < size - rows; space = space+2){
      cout << " ";
    }
    for(int output = 1; output <= rows; output++){
      cout << "*";
    }
    for(int space = 1; space <= size - rows; space++){
      cout << " ";
    }
    for(int output = 0; output <= rows - 1; output++){
      cout << "*";
    }
    cout << endl;
  }
  i = 1;
  for(int rows = 1; rows <= size - 1; rows++){
    for(int space = 1; space <= i; space++){
      cout << " ";
    }
    i++;
    for(int cols = 1; cols <= 2 * (size - rows) - 1; cols++){
      cout << "*";
    }
    cout << endl;
  }
}

void Star_Shape(){

}

int main(){

  int choice = 0;

  cout << "< = = = = = Choose a Shape = = = = >" << endl;
  cout << "[1]. Square Shape"<< endl;
  cout << "[2]. Left Triangle" << endl;
  cout << "[3]. Right Triangle" << endl;
  cout << "[4]. Full Triangle" << endl;
  cout << "[5]. Diamond Shape" << endl;
  cout << "[6]. Inverted Left Triangle" << endl;
  cout << "[7]. Inverted Right Triangle" << endl;
  cout << "[8]. Inverted Full Triangle" << endl;
  cout << "[9]. Heart Shape" << endl;
  cout << "[10]. Star Shape" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  if(choice == 1){
    Square_Shape();
  }
  else if(choice == 2){
    Left_Triangle();
  }
  else if(choice == 3){
    Right_Triangle();
  }
  else if(choice == 4){
    Full_Triangle();
  }
  else if(choice == 5){
    Diamond_Shape();
  }
  else if(choice == 6){
    Inverted_Left_Triangle();
  }
  else if(choice == 7){
    Inverted_Right_Triangle();
  }
  else if(choice == 8){
    Inverted_Full_Triangle();
  }
  else if(choice == 9){
    Heart_Shape();
  }
  else if(choice == 10){
    Star_Shape();
  }
  return 0;
}
