   
#include <iostream>
using namespace std;
int main() {
 // area of rectangle
   
    int l,w,a;
    cin >> l;
    cin >> w;
    cout << "Area of Rectangle " << l*w << endl;



    // Volume of a sphere
    float r, v;
    cin >> r;
    v = (4*3.14*r*r*r)/3;
    cout << "The volume of sphere is = " << v << endl;
    return 0;

    // conversion of Fahrenheit to centrigrade
    float F, C;
    cout << "Enter the temperature in Fahrenheit\n";
    cin >> F;
    C = 5 * (F - 32) / 9;
    cout << F <<" Fahrenheit = "
        << C <<" Centigrade";


    // average of 3 numbers
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    float avg = (n1+n2+n3) / 3;
    cout << "The average is " << avg << endl;





    float h, w, BMI;
    cin >> h >> w;
    BMI = (w/1000) / (h*h);
    cout << "Body Mass = " << BMI << endl;



    float crntweight, goal, weeks;
    cout << "Please input your current weight and then your goal weight followed by number of week to reach your goal" << endl;
    cin >> crntweight >> goal >> weeks;
    cout << "Number of pounds to lose per week to reach the goal " << ( crntweight - goal ) / weeks << endl;


    // Get user input
    float savings_goal, interest_rate;
    cout << "Enter your savings goal: $";
    cin >> savings_goal;
    cout << "Enter the interest rate (%): ";
    cin >> interest_rate;

    // Convert interest rate to decimal form
    interest_rate /= 100.0;

    // Initialize variables
    int years = 0;
    float savings_balance = 0;

    // Calculate the number of years required to reach the savings goal
    while (savings_balance < savings_goal) {
        float savings_for_year;
        cout << "How much money will you save this year? $";
        cin >> savings_for_year;
        savings_balance += savings_balance * interest_rate;
        savings_balance += savings_for_year;
        years++;
    }

    // Print the result
    cout << "It will take " << years << " years to reach your savings goal of $" << savings_goal << endl;
}
