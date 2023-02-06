#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

Date createDate(int year, int month, int day) {
    Date newDate;
    newDate.year = year;
    newDate.month = month;
    newDate.day = day;
    return newDate;
}

int main() {
    int year, month, day;
//    cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the year: \";\n    cin >>"}`&#8203; year;
//    cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter the month: \";\n    cin >>"}`&#8203; month;
//    cout &#8203;`oaicite:{"index":2,"invalid_reason":"Malformed citation << \"Enter the day: \";\n    cin >>"}`&#8203; day;
     cout<<"year:";
     cin>>year;
     cout<<"month:";
     cin>>month;
     cout<<"day:";
     cin>>day;
     

    Date today = createDate(year, month, day);

    cout << "Today's date is: " << today.year << "/" << today.month << "/" << today.day << endl;

    return 0;
}

