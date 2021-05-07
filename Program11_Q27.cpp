#include<iostream>
#include<string>
using namespace std;
//function prototype
void flowChart();
//main function
int main()
{
    cout << "Looks like you're having WiFi problems!" << endl;
    //function call
    flowChart();
    return 0;
}
//function that leads user through a list of instructions using nested if statements
void flowChart()
{
    //string variable to store yes or no answers
    string yesOrNo;
    cout << "Reboot the computer and try to connect." << endl;
    cout << "Did that fix the problem? Type yes or no: ";
    cin >> yesOrNo;
    //ends program at any point if problem is fixed
    if (yesOrNo == "yes")
    {
        cout << "Yay! Goodbye." << endl;
        exit(1);
    }
    //every time the answer is no, leads the user to a new instruction
    if (yesOrNo == "no")
    {
        cout << "Reboot the router and try to connect." << endl;
        cout << "Did that fix the problem? ";
        cin >> yesOrNo;
        if (yesOrNo == "yes")
        {
            cout << "Yay! Goodbye." << endl;
            exit(1);
        }
        if (yesOrNo == "no")
        {
            cout << "Make sure the cables between the router and modem are plugged in firmly." << endl;
            cout << "Did that fix the problem? ";
            cin >> yesOrNo;
            if (yesOrNo == "yes")
            {
                cout << "Yay! Goodbye." << endl;
                exit(1);
            }
            if (yesOrNo == "no")
            {
                cout << "Move the router to a new location and try to connect." << endl;
                cout << "Did this fix the problem? ";
                cin >> yesOrNo;
                if (yesOrNo == "yes")
                {
                    cout << "Yay! Goodbye." << endl;
                    exit(1);
                }
                //ends program when there are no more available solutions to the problem
                if (yesOrNo == "no")
                {
                    cout << "Looks like you need a new router. Sorry!" << endl;
                    cout << "Goodbye." << endl;
                    exit(1);
                }
            }
        }
    }

}