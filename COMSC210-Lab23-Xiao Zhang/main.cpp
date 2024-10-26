//
//  main.cpp
//  COMSC210-Lab23-Xiao Zhang
//
//  Created by Xiao Zhang on 10/26/24.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <cstdlib>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string names[], string colors[]);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

int main_menu(){
    int choice = 0;
    cout<<"*** GOAT MANAGER 3001 ***"<<endl;
    cout<<"[1] Add a goat"<<endl;
    cout<<"[2] Delete a goat"<<endl;
    cout<<"[3] List goats"<<endl;
    cout<<"[4] Quit"<<endl;
    cout<<"Choice --> ";
    
    cin>>choice;
    
    return choice;
}

void display_trip(list<Goat> trip){
    int i = 1;
    for(const auto& goat : trip){
        cout<<"["<<i<<"] "<<goat.get_name()<<" ("<<goat.get_age()<<", "<<goat.get_color()<<")"<<endl;
        i++;
    }
    
}

void add_goat(list<Goat> &trip, string names[], string colors[]){
    string name = names[rand() % SZ_NAMES];
    string color = colors[rand() % SZ_COLORS];
    int age = rand() % (MAX_AGE + 1);
    
    trip.push_back(Goat(name, age, color));
    
}

int select_goat(list<Goat> trip){
    int i = 1;
    for(const auto& goat : trip){
        cout<<"["<<i<<"] "<<goat.get_name()<<" ("<<goat.get_age()<<", "<<goat.get_color()<<")"<<endl;
        i++;
    }
    
    int choice;
    cout<<"Please select a certain goat: ";
    cin>>choice;
    return choice - 1;
}

void delete_goat(list<Goat> &trip){
    int choice = select_goat(<#list<Goat> trip#>);
    auto it = trip.begin();
    
    
}
