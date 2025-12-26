#include <iostream>
using namespace std;
//41...45
/*float read(string mess) {
    float hour;
    do {
        cout << mess << endl;
        cin >> hour;

    } while (hour <= 0);
    return hour;
}
float hourtoday(float hour) {
    return (float)hour/24;
}
float hourtoweek(float hour) {
    return (float)hour / 24 / 7;
}
float daytoweek(float day) {
    return (float)day/7;
}
float daytosec(float day) {
    return day * 24 * 3600;
}
float hourtosec(float hour) {
    return hour * 3600;

}
float mintosec(float min) {
    return min * 60;
}
float totalsec(float sec, float day,float hour,float min){
    float total = sec + daytosec(day) + hourtosec(hour) + mintosec(min);
    return total;
}*/
/*struct readall {
   int day, min, hour, sec;
};//43
int read(string mess) {
    int num;
    do {
        cout << mess << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
readall readtask() {
    readall info;
    info.day = read("enter the day: ");
    info.hour = read("enter the hour:");
    info.min = read("enter the min:");
    info.sec = read("enter the sec:");
    return info;
}
int taskinto(readall task) {
    int all;
    all = (task.day * 24 * 3600) + (task.hour * 3600) + (task.min * 60) + task.sec;
    return all;
}
readall secinto(int sec) {
    readall info;
    const int secperday = 24 * 60 * 60;
    const int secperhour = 60 * 60;
    const int secpermin = 60;
    int re = 0;
    info.day = floor(sec / secperday);
    re = sec % secperday;
    info.hour = floor(re / secperhour);
    re = re % secperhour;
    info.min = floor(re / secpermin);
    re = re % secpermin;
    info.sec = re;
    return info;
}
void print(readall intd) {
    cout << intd.day << ":" << intd.hour << ":" << intd.min << ":" << intd.sec;
}*/
/*enum enweek { sun = 1, mon = 2, tus = 3, wed = 4, thur = 5, fri = 6, sat = 7 };
int read(string mess,int from,int to) {
    int num=0;
    do {
        cout << mess<<endl;
        cin >> num;
    } while (num>to||num<from );//ممنوع منعا باتا نحط اند لانه وقتها لازم الشرطين مع بعض يتحققن
    return num;
}
enweek week() {
    return (enweek)read("enter day", 1, 7);
}//كل رقم لازززم يتحول لاينم
string day(enweek day) {
    switch (day) {
    case enweek::fri:
        return "friday";
    case enweek::mon:
        return "monday";
    case enweek::sat:
        return "satarday";
    case enweek::sun:
        return "sunday";
    case enweek::thur:
        return "thursday";
    case enweek::tus:
        return "tusday";
    case enweek::wed:
        return "wednesday";
    default:
        return "not a valid day";
    }
}*/
enum enmonth{jan=1,feb=2,march=3,april=4,may=5,june=6,july=7,aug=8,sep=9,oct=10,nov=11,dec=12};
int readmon(string mess, int from, int to) {
    int num=0;
    do {
        cout << mess;
        cin >> num;
    } while (num<from || num>to);
    return num;
}
enmonth month() {
    return (enmonth)readmon("enter the month number:", 1, 12);
}
string monthly(enmonth mon) {
    switch (mon) {
    case enmonth::april:
        return "april";
    case enmonth::aug:
        return "aug";
    case enmonth::dec:
        return "dece";
    case enmonth::feb:
        return "feb";
    case enmonth::jan:
        return "jan";
    case enmonth::july:
        return "july";
    case enmonth::june:
        return "june";
    case enmonth::march:
        return "march";
    case enmonth::may:
        return "may";
    case enmonth::nov:
        return "nov";
    default:
        return "not";
    }
}
int main()
{
   cout<< monthly(month());











    //cout << day(week());
    //int sec = read("enter the second:");
   // print(secinto(sec));
  //  cout << taskinto(readtask());
    /*float day = read("enter the day:");
    float hours = read("enter the hour:") ;
    float min = read("enter the min");
    float sec = read("enter the secc");
    cout << endl;
    cout << "day:" << daytosec(day) << endl;
    cout <<"hour:" << hourtosec(hours) << endl;
    cout << "min:" << mintosec(min) << endl;
    cout << "sec" << totalsec(sec, day, hours, min);*/
   /*float numberofdays = hourtoday(hours);
    float numberofweeks = daytoweek(numberofdays);
    cout << endl;
    cout << "total hours" << hours<<endl;
    cout << "total day" << numberofdays << endl;
    cout << "total week:" << hourtoweek(hours) << endl;*/ 
}
