   
#include <iostream>
using namespace std;
int main() {
   // 1. area of rectangle
   
    int l,w,a;
    cin >> l;
    cin >> w;
    cout << "Area of Rectangle " << l*w << endl;



    // 2. Volume of a sphere
    float r, v;
    cin >> r;
    v = (4*3.14*r*r*r)/3;
    cout << "The volume of sphere is = " << v << endl;
    return 0;

    // 3.  conversion of Fahrenheit to centrigrade
    float F, C;
    cout << "Enter the temperature in Fahrenheit\n";
    cin >> F;
    C = 5 * (F - 32) / 9;
    cout << F <<" Fahrenheit = "
        << C <<" Centigrade";


    // 4. average of 3 numbers
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    float avg = (n1+n2+n3) / 3;
    cout << "The average is " << avg << endl;




      // 5. BMI Calculator
    float h, w, BMI;
    cin >> h >> w;
    BMI = (w/1000) / (h*h);
    cout << "Body Mass = " << BMI << endl;


    // 6 program that asks the user to enter their current weight, their goal weight, and the number of weeks they have to reach their goal, and then calculates and displays the number of pounds they need to lose per week.
    float crntweight, goal, weeks;
    cout << "Please input your current weight and then your goal weight followed by number of week to reach your goal" << endl;
    cin >> crntweight >> goal >> weeks;
    cout << "Number of pounds to lose per week to reach the goal " << ( crntweight - goal ) / weeks << endl;


  // 7. program that asks the user to enter the amount of money they want to save and the interest rate (as a percentage), and then calculates and displays the number of years it will take to reach their savings goal.
    
    float savings_goal, interest_rate;
    cout << "Enter your savings goal: $";
    cin >> savings_goal;
    cout << "Enter the interest rate (%): ";
    cin >> interest_rate;
    interest_rate /= 100.0;
    int years = 0;
    float savings_balance = 0;
    while (savings_balance < savings_goal) {
        float savings_for_year;
        cout << "How much money will you save for year " <<  years << endl;
        cin >> savings_for_year;
        savings_balance += savings_balance * interest_rate;
        savings_balance += savings_for_year;
        years++;
    }
    cout << "It will take " << years << " years to reach your savings goal of $" << savings_goal << endl;
}
