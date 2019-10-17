#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

  // current date/time based on current system
   time_t now = time(0);
   // convert now to string form
   char* dt = ctime(&now);
   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;


   // current date/time based on current system
   time_t now2 = time(0);
   cout << "Number of sec since January 1,1970:" << now2 << endl;
   tm *ltm = localtime(&now2);
   // print various components of tm structure.
   cout << "Year: " << 1970 + ltm->tm_year << endl;
   cout << "Month: " << 1 + ltm->tm_mon << endl;
   cout << "Day: " <<  ltm->tm_mday << endl;
   cout << "Time: " << 1 + ltm->tm_hour <<":"<< 1 + ltm->tm_min <<":"<< 1 + ltm->tm_sec << endl;

  system("pause");
  return 0;

}
