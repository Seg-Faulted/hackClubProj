#include <ctime>
#include <iostream>
using namespace std;

////////////////////serperation

string beginninginput;
string beginningtext = "Would you like to begin the program? y/n: ";
int option_input;
string input;
////////////////////serperation

void cont();
void helloWorld();
void handlingHelloWorld();
void questionUser();
void dealHangman();
void playhangman();

////////////////////serperation

void helloWorld() {
  cout << beginningtext;
  cin >> beginninginput;
  handlingHelloWorld();
}

void handlingHelloWorld() {
  if (beginninginput == "y" || beginninginput == "Y") {
    cont();
  } else if (beginninginput == "n" || beginninginput == "N") {
    questionUser();
  }
}

void cont() {
  // time_t now = time(0);
  // char *date_time = ctime(&now);
  // string welcome = "Hello, welcome to the program, press D to see the date!";
  cout << "The current date and time is: "
          "\n";
  cout << "what would you like to do?\n"
       << "1. play hangman?"
       << "\n"
       << "enter selection: ";
  cin >> input;

  dealHangman();
}

void questionUser() {

  string question =
      "\nWhy did you even bother to look if you didn't want to explore?\n";
  string option_1 = "1. idk, just because\n";
  string option_2 = "2. why are you being so intrusive?\n";
  string option_3 = "3. i wanted to see something cool, so show me something "
                    "cool!\n"; // maybe implement a 3D render, or a mini-game
  cout << question << "\n"
       << option_1 << option_2 << option_3 << "\n"
       << "enter selection: ";
  cin >> option_input;
  cout << "debug: " << option_input;
  dealHangman();
}

void dealHangman() {
  if (input == "1") {
    playhangman();
  }
}

void playhangman() {
  string letters = "letters:  d l c u b c k a h";
  string answer = "hack club";
  string hangman = "\n____\n   "
                   "|  |\n"
                   "|\n"
                   "|\n"
                   "|\n";

  cout << "1" << hangman;
}
