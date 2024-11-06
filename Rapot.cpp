/*
Budi, Asep, Jainal, Arip dan Yahya
Sangat baik (A) = 80 - 100
Baik (B) = 70 - 80
Cukup (C) = 60 - 50
Kurang (D) = 50 - 60
Enginer (E) = dibawah 50 
*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    int Nilaitotal;

    cout <<"=========== Data Nilai Rapot Mahasiswa Teknik Elrktro =========="<< endl;
    cout <<"Interval Nilai dari 0 sampai 100 ya >//<" << endl;
    cout <<"Masukkan Nilai Budi : ";
    cin >> a;
        if(a<= 100 && a>= 80){
        cout << "Budi mendapat Nilai A"<< endl;
    }   else if (a>=70){
        cout << "Budi mendapat Nilai B"<< endl;
    }   else if (a>=60){
        cout << "Budi mendapat Nilai C"<< endl;
    }   else if (a>=50){
        cout << "Budi mendapat Nilai D"<< endl;
    }   else {
        cout << "Budi mendapat Nilai E"<< endl;
    }

    cout <<"Masukkan Nilai Asep : ";
    cin >> b;
      if(b<=100 && b>= 80){
        cout << "Asep mendapat Nilai A"<< endl;
    }   else if (b>=70){
        cout << "Asep mendapat Nilai B"<< endl;
    }   else if (b>=60){
        cout << "Asep mendapat Nilai C"<< endl;
    }   else if (b>=50){
        cout << "Asep mendapat Nilai D"<< endl;
    }   else {
        cout << "Asep mendapat Nilai E"<< endl;
    }

    cout <<"Masukkan Nilai Jainal : ";
    cin >> c;
     if(c<=100 && c>= 80){
        cout << "Jainal mendapat Nilai A"<< endl;
    }   else if (c>=70){
        cout << "Jainal mendapat Nilai B"<< endl;
    }   else if (c>=60){
        cout << "Jainal mendapat Nilai C"<< endl;
    }   else if (c>=50){
        cout << "Jainal mendapat Nilai D"<< endl;
    }   else {
        cout << "Jainal mendapat Nilai E"<< endl;
    }

    cout <<"Masukkan Nilai Arip : ";
    cin >> d;
     if(d<=100 && d>= 80){
        cout << "Arip mendapat Nilai A"<< endl;
    }   else if (d>=70){
        cout << "Arip mendapat Nilai B"<< endl;
    }   else if (d>=60){
        cout << "Arip mendapat Nilai C"<< endl;
    }   else if (d>=50){
        cout << "Arip mendapat Nilai D"<< endl;
    }   else {
        cout << "Arip mendapat Nilai E"<< endl;
    }

    cout <<"Masukkan Nilai Yahya : ";
    cin >> e;
     if(e<=100 && e>= 80){
        cout << "Yahya mendapat Nilai A"<< endl;
    }   else if (e>=70){
        cout << "Yahya mendapat Nilai B"<< endl;
    }   else if (e>=60){
        cout << "Yahya mendapat Nilai C"<< endl;
    }   else if (e>=50){
        cout << "Yahya mendapat Nilai D"<< endl;
    }   else {
        cout << "Yahya mendapat Nilai E"<< endl;
    }

    Nilaitotal = a + b + c + d + e;
    cout <<"========== Nilai Rata Rata Mahasiswa Teknik Elektro =========="<< endl;
    cout <<"Nilai total : "<< a + b + c + d + e << endl;
    cout <<"Nilai rata-rata :"<< Nilaitotal/5 << endl;

    cout <<"=============== Data Nilai Mahasiswa Teknik Elektro UPI =============="<< endl;
    cout <<"==================== Mata Kuliah Fikri Ahmad Abe ===================="<<endl;
    cout <<"Budi Mendapat nilai: "<< a << endl;
    cout <<"Asep Mendapat nilai:  "<< b << endl;
    cout <<"Jainal Mendapat nilai: "<< c << endl;
    cout <<"Arip Mendapat nilai: "<< d << endl;
    cout <<"Yahya Mendapat nilai: "<< e << endl;
    cout <<"Total Nilai: "<< Nilaitotal << endl;
    cout <<"Nilai rata rata: "<< Nilaitotal/5;
    
return 0 ;


}
