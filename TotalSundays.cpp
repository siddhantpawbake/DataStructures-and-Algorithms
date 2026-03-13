/*
#Question:
TCS NQT Coding Question Day 1 Slot 2 – Question 1
Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends.

So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

Count the number of Sunday jack will get within n number of days.

 Example 1:

Input

mon-> input String denoting the start of the month.

13  -> input integer denoting the number of days from the start of the month.

Output :

2    -> number of days within 13 days.

Explanation:

The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.

Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days.

*/
#include <bits/stdc++.h>
using namespace std;

int findDays(int day, int no_of_days)
{
    if (day >= no_of_days)
        return 0;
    int temp = no_of_days - day;
    return temp / 7 + 1;
}

int main()
{
    string day = "";
    int no_of_days;

    cin >> day;
    cin >> no_of_days;

    int dayint;

    if (day == "mon")
        dayint = 1;
    else if (day == "tue")
        dayint = 2;
    else if (day == "wed")
        dayint = 3;
    else if (day == "thu")
        dayint = 4;
    else if (day == "fri")
        dayint = 5;
    else if (day == "sat")
        dayint = 6;
    else if (day == "sun")
        dayint = 0;

    switch (dayint)
    {
    case 1:
        dayint = 6;
        break; // Monday
    case 2:
        dayint = 5;
        break; // Tuesday
    case 3:
        dayint = 4;
        break; // Wednesday
    case 4:
        dayint = 3;
        break; // Thursday
    case 5:
        dayint = 2;
        break; // Friday
    case 6:
        dayint = 1;
        break; // Saturday
    case 0:
        dayint = 0;
        break; // Sunday
    }

    int ans = findDays(dayint, no_of_days);
    cout << ans;

    return 0;
}