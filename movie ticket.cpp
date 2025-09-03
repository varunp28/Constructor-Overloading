#include <iostream>
using namespace std;
class ticket{
    public:
    string MovieName;
    string seatNumber;
    int price;
    string Showtime;
    
    ticket() {
        MovieName = "Unknown";
        seatNumber = "Not Assigned";
        price = 0;
        Showtime = "TBD";
    }
    
    ticket(string movieName, string seatNumber) {
        MovieName = movieName;
        seatNumber = seatNumber;
        price = 250; 
        Showtime = "7:00 PM"; 
    }
    ticket(string MovieName,string seatNumber,string Showtime){
            MovieName="Fight Club";
            seatNumber="D18";
            price=400;
            Showtime="7:00 PM";
        }
        
        void display() {
        cout << "Movie: " << MovieName << endl;
        cout << "Seat: " << seatNumber << endl;
        cout << "Price: " << price << endl;
        cout << "Showtime: " << Showtime << endl;
    }
};
int main(){
        ticket t1;
    ticket t2("Inception", "A12");
    ticket t3("Fight Club", "D18", "9:00 PM");

    cout << "Default Ticket:\n";
    t1.display();
    cout << "\nPartial Ticket:\n";
    t2.display();
    cout << "\nFull Ticket:\n";
    t3.display();

    return 0;
}



//Ouput:
/*
Default Ticket:
Movie: Unknown
Seat: Not Assigned
Price: 0
Showtime: TBD

Partial Ticket:
Movie: Inception
Seat: 
Price: 250
Showtime: 7:00 PM

Full Ticket:
Movie: 
Seat: 
Price: 400
Showtime: 
*/
