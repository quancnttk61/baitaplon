// snack2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"Header.h"
#define MAX 100
using namespace std;
int sl = 6;

void vetuongtren();
void vetuongphai();
void vetuongduoi();
void vetuongtrai();
void taoran( int toadoX[], int toadoY[]);
void xulyran(int toadoX[], int toadoY[], int x, int y);
void veran(int toadoX[], int toadoY[]);
void xoadulieucu(int toadoX[], int toadoY[]);
void them(int a[], int x);
void xoa(int a[]);
int main()
{
    int toadoX[100];
    int toadoY[100];
        vetuongtren();
        vetuongphai();
        vetuongduoi();
        vetuongtrai();
        taoran(toadoX, toadoY);
        int x = 50, y = 13;
        while (true) {
            int check = 2;
            //=======thực hiện cho rắn chạy sang phải=
            if (check == 2) {
                x++;
            }
            xoadulieucu(toadoX, toadoY);
            xulyran(toadoX, toadoY, x, y);
        }

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
void xoadulieucu(int toadoX[], int toadoY[]) {
    int sl = 6;
    for (int i = 0; i < sl; i++) {
        gotoXY(toadoX[i], toadoY[i]);
        cout << " ";
    }
}

void xulyran(int toadoX[], int toadoY[],int x,int y) {
    // thêm tọa độ mới  vào đầu mảng
    them(toadoX, x);
    them(toadoY, y);
    // xóa tọa độ cuối mảng
    xoa(toadoX, sl - 1);
    xoa(toadoY, sl - 1);
    // ve ran
    veran(toadoX, toadoY);


}
void them(int a[],int x) {

    for (int i = sl; i <= 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = x;
    sl++;
}
void xoa(int a[]) {
    
    for (int i = 0; i < sl; i++) {
        a[i] = a[i + 1];
    }
    sl--;
}
