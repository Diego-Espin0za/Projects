#include <iostream>
#include <vector> 

int main(int argc, char* argv[]){ 

 std::vector<std::vector<char>> board = {
                                        {'1', '2', '3'}, 
                                        {'4', '5', '6'}, 
                                        {'7', '8', '9'}
                                        };

    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

 int player_1; 
 int player_2;
//First Move
  std::cout << " Player 1: Please enter number 1-9 in which you would like to place your X: ";
  std::cin >> player_1;
  if (player_1== 1) {
    board[0][0] = 'X';
  }
  else if (player_1 == 2) {
    board[0][1] = 'X';
  }
  else if (player_1 == 3) {
    board[0][2] = 'X';
  }
  else if (player_1 == 4) {
    board[1][0] = 'X';
  }
  else if (player_1 == 5) {
    board[1][1] = 'X';
  }
  else if (player_1 == 6) {
    board[1][2] = 'X';
  }
  else if (player_1 == 7) {
    board[2][0] = 'X';
  }
  else if (player_1 == 8) {
    board[2][1] = 'X';
  }
  else if (player_1 == 9) {
    board[2][2] = 'X';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }

std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

  //Second Player First move 
std::cout<< "Player 2: Please enter number 1-9 in which you would like to place your O:  ";
std::cin >> player_2;

  if (player_2== 1) {
    board[0][0] = 'O';
  }
  else if (player_2 == 2) {
    board[0][1] = 'O';
  }
  else if (player_2 == 3) {
    board[0][2] = 'O';
  }
  else if (player_2 == 4) {
    board[1][0] = 'O';
  }
  else if (player_2 == 5) {
    board[1][1] = 'O';
  }
  else if (player_2 == 6) {
    board[1][2] = 'O';
  }
  else if (player_2 == 7) {
    board[2][0] = 'O';
  }
  else if (player_2 == 8) {
    board[2][1] = 'O';
  }
  else if (player_2 == 9) {
    board[2][2] = 'O';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }
std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

    //First player second Move 
    std::cout << " Player 1: Please enter number 1-9 in which you would like to place your X: ";
  std::cin >> player_1;
  if (player_1== 1) {
    board[0][0] = 'X';
  }
  else if (player_1 == 2) {
    board[0][1] = 'X';
  }
  else if (player_1 == 3) {
    board[0][2] = 'X';
  }
  else if (player_1 == 4) {
    board[1][0] = 'X';
  }
  else if (player_1 == 5) {
    board[1][1] = 'X';
  }
  else if (player_1 == 6) {
    board[1][2] = 'X';
  }
  else if (player_1 == 7) {
    board[2][0] = 'X';
  }
  else if (player_1 == 8) {
    board[2][1] = 'X';
  }
  else if (player_1 == 9) {
    board[2][2] = 'X';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }

std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

  //Second player second move
std::cout<< "Player 2: Please enter number 1-9 in which you would like to place your O:  ";
std::cin >> player_2;

  if (player_2== 1) {
    board[0][0] = 'O';
  }
  else if (player_2 == 2) {
    board[0][1] = 'O';
  }
  else if (player_2 == 3) {
    board[0][2] = 'O';
  }
  else if (player_2 == 4) {
    board[1][0] = 'O';
  }
  else if (player_2 == 5) {
    board[1][1] = 'O';
  }
  else if (player_2 == 6) {
    board[1][2] = 'O';
  }
  else if (player_2 == 7) {
    board[2][0] = 'O';
  }
  else if (player_2 == 8) {
    board[2][1] = 'O';
  }
  else if (player_2 == 9) {
    board[2][2] = 'O';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }
std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

//First player third move 
std::cout << " Player 1: Please enter number 1-9 in which you would like to place your X: ";
  std::cin >> player_1;
  if (player_1== 1) {
    board[0][0] = 'X';
  }
  else if (player_1 == 2) {
    board[0][1] = 'X';
  }
  else if (player_1 == 3) {
    board[0][2] = 'X';
  }
  else if (player_1 == 4) {
    board[1][0] = 'X';
  }
  else if (player_1 == 5) {
    board[1][1] = 'X';
  }
  else if (player_1 == 6) {
    board[1][2] = 'X';
  }
  else if (player_1 == 7) {
    board[2][0] = 'X';
  }
  else if (player_1 == 8) {
    board[2][1] = 'X';
  }
  else if (player_1 == 9) {
    board[2][2] = 'X';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }

std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

  //Second player third move 
std::cout<< "Player 2: Please enter number 1-9 in which you would like to place your O:  ";
std::cin >> player_2;

  if (player_2== 1) {
    board[0][0] = 'O';
  }
  else if (player_2 == 2) {
    board[0][1] = 'O';
  }
  else if (player_2 == 3) {
    board[0][2] = 'O';
  }
  else if (player_2 == 4) {
    board[1][0] = 'O';
  }
  else if (player_2 == 5) {
    board[1][1] = 'O';
  }
  else if (player_2 == 6) {
    board[1][2] = 'O';
  }
  else if (player_2 == 7) {
    board[2][0] = 'O';
  }
  else if (player_2 == 8) {
    board[2][1] = 'O';
  }
  else if (player_2 == 9) {
    board[2][2] = 'O';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }
std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

//First player fourth move
std::cout << " Player 1: Please enter number 1-9 in which you would like to place your X: ";
  std::cin >> player_1;
  if (player_1== 1) {
    board[0][0] = 'X';
  }
  else if (player_1 == 2) {
    board[0][1] = 'X';
  }
  else if (player_1 == 3) {
    board[0][2] = 'X';
  }
  else if (player_1 == 4) {
    board[1][0] = 'X';
  }
  else if (player_1 == 5) {
    board[1][1] = 'X';
  }
  else if (player_1 == 6) {
    board[1][2] = 'X';
  }
  else if (player_1 == 7) {
    board[2][0] = 'X';
  }
  else if (player_1 == 8) {
    board[2][1] = 'X';
  }
  else if (player_1 == 9) {
    board[2][2] = 'X';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }

std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

  //Second player fourth move
std::cout<< "Player 2: Please enter number 1-9 in which you would like to place your O:  ";
std::cin >> player_2;

  if (player_2== 1) {
    board[0][0] = 'O';
  }
  else if (player_2 == 2) {
    board[0][1] = 'O';
  }
  else if (player_2 == 3) {
    board[0][2] = 'O';
  }
  else if (player_2 == 4) {
    board[1][0] = 'O';
  }
  else if (player_2 == 5) {
    board[1][1] = 'O';
  }
  else if (player_2 == 6) {
    board[1][2] = 'O';
  }
  else if (player_2 == 7) {
    board[2][0] = 'O';
  }
  else if (player_2 == 8) {
    board[2][1] = 'O';
  }
  else if (player_2 == 9) {
    board[2][2] = 'O';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }
std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;

//First player fifth move
std::cout << " Player 1: Please enter number 1-9 in which you would like to place your X: ";
  std::cin >> player_1;
  if (player_1== 1) {
    board[0][0] = 'X';
  }
  else if (player_1 == 2) {
    board[0][1] = 'X';
  }
  else if (player_1 == 3) {
    board[0][2] = 'X';
  }
  else if (player_1 == 4) {
    board[1][0] = 'X';
  }
  else if (player_1 == 5) {
    board[1][1] = 'X';
  }
  else if (player_1 == 6) {
    board[1][2] = 'X';
  }
  else if (player_1 == 7) {
    board[2][0] = 'X';
  }
  else if (player_1 == 8) {
    board[2][1] = 'X';
  }
  else if (player_1 == 9) {
    board[2][2] = 'X';
  }
  else {
    std::cout << "Invalid input. Please enter a number 1-9: " << std::endl;
  }

std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << std::endl;
    
}
