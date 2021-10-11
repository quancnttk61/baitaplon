// snack2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"Header.h"
#define MAX 100
using namespace std;

void vetuongtren();
void vetuongphai();
void vetuongduoi();
void vetuongtrai();
void taoran( int toadoX[], int toadoY[]);

void veran(int toadoX[], int toadoY[]);
int main()
{
    int toadoX[100];
    int toadoY[100];
        vetuongtren();
        vetuongphai();
        vetuongduoi();
        vetuongtrai();
        taoran(toadoX, toadoY);
        veran(toadoX, toadoY);
        return 0;
       
    
    
    
    
}
void vetuongtren()
{
    int x = 10, y = 1;
    while (x < 100) {
        gotoXY(x, y);
        cout << "+";
        x++;
    }

}
void vetuongphai()
{
    int x = 100, y = 1;
    while (y < 26) {
        gotoXY(x, y);
        cout << "+";
        y++;
    }
}
void vetuongduoi() {
    int x = 10, y = 26;;
    while (x < 100) {
        gotoXY(x, y);
        cout << "+";
        x++;

    }
}
void vetuongtrai()
{
    int x = 10, y = 1;
    while (y < 26) {
        gotoXY(x, y);
        cout << "+";
        y++;
    }
}
void taoran(int toadoX[], int toadoY[]) {
    int x = 50, y = 13;
    int sl = 6;
    for (int i = 0; i < sl; i++) {
        toadoX[i] = x;
        toadoY[i] = y;
        x--;
    }

}
void veran(int toadoX[], int toadoY[]) {
    int sl = 6;
    for (int i = 0; i < sl; i++) {
        gotoXY(toadoX[i], toadoY[i]);
        if (i == 0) {
            cout << "0";
        }else{
            cout << "o";
        }
    }

}
