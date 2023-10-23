#include <iostream>
#include <iomanip>

using namespace std;

int converter(int hour24) // This just converts between 24hr and 12hr
{
    if (hour24 > 12)
    {
        return hour24 - 12;
    }
    else if (hour24 == 0)
    {
        return 1;
    }
    else
    {
        return hour24;
    }
}

string AMorPM(int hour24) // This returns the AM or PM status by time.
{
    if (hour24 > 12)
    {
        return " P M";
    }
    else
    {
        return " A M";
    }
}

void clock(int clockType, int hour, int minute, int second)
{
    // This outputs the clock, using the hour, minute, and seconds
    cout << "******************************     ******************************\n"
         << "*        12-Hour Clock       *     *        24-Hour Clock       *\n"
         << "*        "
         << converter(hour) << ":" << minute << ":" << second << AMorPM(hour)
         << "        *     "
         << "*          "
         << hour << ":" << minute << ":" << second
         << "          *\n"
         << "******************************     ******************************" << endl;
}

void decisionBox()
{
    // Just here to clean up things, this outputs the options.
    cout << "******************************\n"
         << "* 1 - Add One Hour           *\n"
         << "* 2 - Add One Minute         *\n"
         << "* 3 - Add One Second         *\n"
         << "* 4 - Exit Program           *\n"
         << "******************************"
         << endl;
}

void mainLoop(int hour, int minute, int seconds)
{
    int choice;
    while (choice != 4)
    {
        while ((seconds >= 60) || (minute >= 60) || (hour >= 24))
        {
            if (seconds >= 60)
            {
                minute += 1;
                seconds = 0;
            }
            if (minute >= 60)
            {
                hour += 1;
                minute = 0;
            }
            if (hour >= 24)
            {
                hour = 0;
            }
        }

        clock(10, hour, minute, seconds);
        decisionBox();
        cin >> choice;
        if (choice == 1)
        {
            hour += 1;
        }
        else if (choice == 2)
        {
            minute += 1;
        }
        else if (choice == 3)
        {
            seconds += 1;
        }
        else if (choice == 4)
        {
            cout << "Goodbye!";
        }
        else
        {
            cout << "Try Again, that was invalid user input";
        }
    }
}

int main()
{
    int hour;
    int minute;
    int seconds;
    // cin >> currentTime;
    cout << "Please enter an initial time:" << endl;
    cin >> hour >> minute >> seconds;
    mainLoop(hour, minute, seconds);
    return 0;
}

/*
I would have converted this to use a class/struct of time, with parameters for hour, minute, and second.
This would then allow for that to be passed thought functions and be modified as needed, based on a checker and decision tree.
*/