#include <iostream>
// This is for doing for all the OPPS programming
using  namespace  std;

class hotel {
private:
    int rno;
    string name;
    float traffic;
    int NOD;

    int calc(){

        int total = traffic * NOD;
        if(total > 10000){
            return total = (total * 0.15) + total;
        }

        return total;

    }
public:
    void setCheckIn(int r , string n , float t , int nod){
        rno = r;
        name = n;
        traffic = t ;
        NOD = nod;

    }
    void checkOut( ){
        cout  <<  "name "  << name << endl;
        cout  <<  "Room no  "  << rno << endl;
        cout  <<  " Charge per day"  << traffic << endl;
        cout  <<  "No of day stayed"  << NOD << endl;

        cout << "Totol amount that has to be paid " << calc() ;

    }

};

int main() {


    string name;
    int rno;
    float traffic;
    int NOD;


    int n ;
    cout << "enter the number of entries";

    cin >> n ;

    hotel p1[n]; // this is the array p1 , that has n number of object insie

    for(int i = 0 ; i < n ; i ++ ){

        p1[i];

        cout << "Enter the name ";
        cin >> name;

        cout << "Enter the Room no  ";
        cin >> rno;

        cout << "Enter the Charge per day ";

        cin >> traffic;

        cout << "Enter the No of days stayed ";
        cin >> NOD;

        p1[i].setCheckIn(rno,name, traffic ,NOD);


    }

    for ( int i = 0 ; i < n ; i++ ){

        p1[i].checkOut();

    }




    return 0;
}