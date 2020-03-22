/*Birthday Guessing Game by Hissamuddin Shaikh*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{   /* Initialization of variables*/
    string A = "Set 1"; string a; bool a_result = false; int end_result;
    string B = "Set 2"; string b; bool b_result = false;
    string C = "Set 3"; string c; bool c_result = false;
    string D = "Set 4"; string d; bool d_result = false;
    string E = "Set 5"; string e; bool e_result = false;
    /* Setup for displaying Set 1 */
    cout << setw(15)<< A << endl << " ------------------------" << endl <<
            setw(3) << "1" << setw(3) << "3" << setw(3) << "5" << setw(3)<< "7" << setw(3) << "9" <<
            setw(3)<< "11" << setw(3) << "13" << setw(3) << "15" << endl;
    cout << setw(3) << "17" << setw(3)<< "19" << setw(3) << "21" << setw(3) << "23" << setw(3) << "25" <<
            setw(3) << "27" << setw(3) << "29" << setw(3) << "31" <<endl;
    /* Setup for getting response to Set 1 */
    cout << endl << " Does your Birthday appear in this set? (Answer Yes or No) ";
    cin >> a;
    /*Setup for checking what they entered and initialization for the final output*/
    if (a=="Yes"||a=="yes"||a=="YES"||a=="YEs"||a=="yES"||a=="yEs"||a=="yeS")
        a_result = true;
    /* Setup for displaying Set 2 */
    cout << endl <<setw(15)<< B << endl << " ------------------------" << endl <<
            setw(3) << "2" << setw(3) << "3" << setw(3) << "6" << setw(3)<< "7" << setw(3) << "10" <<
            setw(3)<< "11" << setw(3) << "14" << setw(3) << "15" << endl;
    cout << setw(3) << "18" << setw(3)<< "19" << setw(3) << "22" << setw(3) << "23" << setw(3) << "26" <<
            setw(3) << "27" << setw(3) << "30" << setw(3) << "31" <<endl;
    /* Setup for getting response to Set 2 */
    cout << endl << " Does your Birthday appear in this set? (Answer Yes or No) ";
    cin >> b;
        /*Setup for checking what they entered and initialization for the final output*/
    if (b=="Yes"||b=="yes"||b=="YES"||b=="YEs"||b=="yES"||b=="yEs"||b=="yeS")
    b_result = true;
    /* Setup for displaying Set 3 */
    cout << endl<< setw(15)<< C << endl << " ------------------------" << endl <<
            setw(3) << "4" << setw(3) << "5" << setw(3) << "6" << setw(3)<< "7" << setw(3) << "12" <<
            setw(3)<< "13" << setw(3) << "14" << setw(3) << "15" << endl;
    cout << setw(3) << "20" << setw(3)<< "21" << setw(3) << "22" << setw(3) << "23" << setw(3) << "28" <<
            setw(3) << "29" << setw(3) << "30" << setw(3) << "31" <<endl;
    /* Setup for getting response to Set 1 */
    cout << endl << " Does your Birthday appear in this set? (Answer Yes or No) ";
    cin >> c;
    /*Setup for checking what they entered and initialization for the final output*/
    if (c=="Yes"||c=="yes"||c=="YES"||c=="YEs"||c=="yES"||c=="yEs"||c=="yeS")
    c_result = true;
    /* Setup for displaying Set 1 */
    cout << endl <<setw(15)<< D << endl << " ------------------------" << endl <<
            setw(3) << "8" << setw(3) << "9" << setw(3) << "10" << setw(3)<< "11" << setw(3) << "12" <<
            setw(3)<< "13" << setw(3) << "14" << setw(3) << "15" << endl;
    cout << setw(3) << "24" << setw(3)<< "25" << setw(3) << "26" << setw(3) << "27" << setw(3) << "28" <<
            setw(3) << "29" << setw(3) << "30" << setw(3) << "31" <<endl;
    /* Setup for getting response to Set 1 */
    cout << endl << " Does your Birthday appear in this set? (Answer Yes or No) ";
    cin >> d;
    /*Setup for checking what they entered and initialization for the final output*/
    if (d=="Yes"||d=="yes"||d=="YES"||d=="YEs"||d=="yES"||d=="yEs"||d=="yeS")
    d_result = true;
    /* Setup for displaying Set 1 */
    cout << endl <<setw(15)<< E << endl << " ------------------------" << endl <<
            setw(3) << "16" << setw(3) << "17" << setw(3) << "18" << setw(3)<< "19" << setw(3) << "20" <<
            setw(3)<< "21" << setw(3) << "22" << setw(3) << "23" << endl;
    cout << setw(3) << "24" << setw(3)<< "25" << setw(3) << "26" << setw(3) << "27" << setw(3) << "28" <<
            setw(3) << "29" << setw(3) << "30" << setw(3) << "31" <<endl;
    /* Setup for getting response to Set 1 */
    cout << endl << " Does your Birthday appear in this set? (Answer Yes or No) ";
    cin >> e;
    /*Setup for checking what they entered and initialization for the final output*/
    if (e=="Yes"||e=="yes"||e=="YES"||e=="YEs"||e=="yES"||e=="yEs"||e=="yeS")
    e_result = true;
    /*Calculating and displaying the Final Output*/
    end_result = (a_result*1)+(b_result*2)+(c_result*4)+(d_result*8)+(e_result*16);
    cout << endl << endl << " Your Birthday is on the " << end_result <<" of your respective month."<< endl << endl;
    return 0;
}
