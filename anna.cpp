#include <iostream>
// This is for doing for all the OPPS programming
using  namespace  std;

class Students {
private:

    int scores[5];



public:
    void input(){
        cout << "Enter 5 exam marks:" << endl;  // Added a single prompt for clarity
        for (int i = 0; i < 5; i++) {
            cout << "Mark " << (i + 1) << ": ";  // Show which mark is being entered
            cin >> scores[i];
        }


    }
    int totalScore(){
        int totalScore = 0 ;

        for(int i = 0 ; i < 5 ; i++){
            totalScore = scores[i] + totalScore;
        }

        return totalScore;

    }




};

int main() {

    int n ;

    cout <<"Enter the number of students";
    cin >> n ;

    Students s[n];


    for(int i = 0 ; i < n ; i ++){

        s[i].input();

    }

    int t = s[0].totalScore();

    int count = 0 ;

    for(int i = 1 ; i < n ; i++){

        int c = s[i].totalScore();

        if(c > t ){
            count++;
        }

    }

    cout <<"The number of people more tha anna " << count ;



    return 0;
}