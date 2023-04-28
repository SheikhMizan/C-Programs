#include <iostream>
using namespace std;
#include <cctype>
void quadrant(float x, float y){
   if (x > 0 && y > 0) {
      cout << "The point is in the 1st quadrant.\n" ;
   } else if (x < 0 && y > 0) {
       cout << "The point is in the 2nd quadrant.\n" ;
   } else if (x < 0 && y < 0) {
      cout << "The point is in the 3rd quadrant.\n" ;
   } else if (x > 0 && y < 0) {
       cout << "The point is in the 4th quadrant.\n" ;
   } else {
       cout << "The point is on the origin.\n" ;
   } 
}

void leap_year(int year){
    if( year % 4 == 0 ){
        cout << "This year is leap year" << endl;
    }else{
        cout << "This is not a leap year" << endl;
    }
}


void checker_types(int ghostInput){
   if (ghostInput >= 'a' && ghostInput <= 'z' || ghostInput >= 'A' && ghostInput <= 'Z') {
      cout << ghostInput << " is an alphabet." << endl;
   } else if (ghostInput >= '0' && ghostInput <= '9') {
      cout << ghostInput << " is a digit." << endl;
   } else {
      cout << ghostInput << " is a special character." << endl;
   }
}

void vowel_constant_checker(char word[]) {
    bool hasVowel = false;
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            hasVowel = true;
            break;
        }
    }
    if (hasVowel) {
        cout << "The word " << word << " contains a vowel." << endl;
    } else {
        cout << "The word " << word << " does not contain a vowel." << endl;
    }
}

int main() {
   float x, y;
   cout << "Enter the x and y coordinates of the point: ";
   cin >> x;
   cin >> y;   
   quadrant(x,y);
   
   cout << "\nEnter year to check if its leap year: ";
   int year;
   cin >> year;
   leap_year(year);
   
   cout << "\nInput something to check what it is: ";
   int ghostInput;
   cin >> ghostInput;
   checker_types(ghostInput);
   
   cout << "\n Check vowel or constant: ";
   char word[50];
   cin >> word;
   vowel_constant_checker(word);
   
   cout << "\n Put your weeknumber to check if its weekday: [input 1-7]";
   int weekNumber;
   cin >> weekNumber;

    switch (weekNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid week number." << endl;
    }
   
      
   cout << "\n Put your mark to see grade: ";
   int mark;
   cin >> mark;

    switch (mark / 10) {
        case 10:
        case 9:
            cout << "Your grade is A." << endl;
            break;
        case 8:
            cout << "Your grade is B." << endl;
            break;
        case 7:
            cout << "Your grade is C." << endl;
            break;
        case 6:
            cout << "Your grade is D." << endl;
            break;
        default:
            cout << "Your grade is F." << endl;
    }
   
   
   return 0;
}
