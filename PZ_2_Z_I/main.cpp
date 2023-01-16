#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include<windows.h>
#include<string.h>
#include <vector>
#include<clocale>
#include<locale>
#include <cstdio>
#include <cstring>
#include<fstream>
#include<ostream>
#include <string>


using namespace std;

const int n = 1000;
char enc_text[n];
char decr_text[n];

void encrypting(char text[])
{
    

    for (int i = 0; i < n; i++)
    {
        enc_text[i] = text[i];
    }
    for (int x = 0; x < strlen(enc_text); x++)
        enc_text[x] = putchar(toupper(enc_text[x]));
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;


    for (int i = 0; i < n; i++)
    {
        switch (enc_text[i])
        {
        case 'A':enc_text[i] = 'X';
            break;
        case 'B':enc_text[i] = 'Z';
            break;
        case 'C':enc_text[i] = 'Y';
            break;
        case 'D':enc_text[i] = 'S';
            break;
        case 'E':enc_text[i] = 'R';
            break;
        case 'F':enc_text[i] = 'T';
            break;
        case 'I':enc_text[i] = 'U';
            break;
        case 'G':enc_text[i] = 'V';
            break;
        case 'K':enc_text[i] = 'Q';
            break;
        case 'L':enc_text[i] = 'P';
            break;
        case 'M':enc_text[i] = 'C';
            break;
        case 'N':enc_text[i] = 'A';
            break;
        case 'O':enc_text[i] = 'B';
            break;
        case 'P':enc_text[i] = 'O';
            break;
        case 'Q':enc_text[i] = 'D';
            break;
        case 'R':enc_text[i] = 'I';
            break;
        case 'S':enc_text[i] = 'G';
            break;
        case 'T':enc_text[i] = 'E';
            break;
        case 'U':enc_text[i] = 'F';
            break;
        case 'V':enc_text[i] = 'K';
            break;
        case 'X':enc_text[i] = 'L';
            break;
        case 'Y':enc_text[i] = 'M';
            break;
        case 'Z':enc_text[i] = 'N';
            break;
        case ' ':enc_text[i] = '!';
            break;
        case '.':enc_text[i] = '$';
            break;
        case ',':enc_text[i] = '^';
            break;


        }
    }


    cout << "\n\nYour encrypted data:\n\n " << enc_text << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;
    
}

void decrypting(char text[])
{


    for (int i = 0; i < n; i++)
    {
        decr_text[i] = text[i];
    }
    for (int x = 0; x < strlen(decr_text); x++)
        decr_text[x] = putchar(toupper(decr_text[x]));
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;


    for (int i = 0; i < n; i++)
    {
        switch (decr_text[i])
        {
        case 'X':decr_text[i] = 'A';
            break;
        case 'Z':decr_text[i] = 'B';
            break;
        case 'Y':decr_text[i] = 'C';
            break;
        case 'S':decr_text[i] = 'D';
            break;
        case 'R':decr_text[i] = 'E';
            break;
        case 'T':decr_text[i] = 'F';
            break;
        case 'U':decr_text[i] = 'I';
            break;
        case 'V':decr_text[i] = 'G';
            break;
        case 'Q':decr_text[i] = 'K';
            break;
        case 'P':decr_text[i] = 'L';
            break;
        case 'C':decr_text[i] = 'M';
            break;
        case 'A':decr_text[i] = 'N';
            break;
        case 'B':decr_text[i] = 'O';
            break;
        case 'O':decr_text[i] = 'P';
            break;
        case 'D':decr_text[i] = 'Q';
            break;
        case 'I':decr_text[i] = 'R';
            break;
        case 'G':decr_text[i] = 'S';
            break;
        case 'E':decr_text[i] = 'T';
            break;
        case 'F':decr_text[i] = 'U';
            break;
        case 'K':decr_text[i] = 'V';
            break;
        case 'L':decr_text[i] = 'X';
            break;
        case 'M':decr_text[i] = 'Y';
            break;
        case 'N':decr_text[i] = 'Z';
            break;
        case '!':decr_text[i] = ' ';
            break;
        case '$':decr_text[i] = '.';
            break;
        case '^':decr_text[i] = ',';
            break;


        }
    }


    cout << "\n\nYour decrypted data:\n\n " << decr_text << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;

}


void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 125
  
    
/*
    char text[n];
    cout << "Enter the text: ";
    cin.getline(text, n);
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;
    
    encrypting(text);

    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;

    decrypting(enc_text);
    
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;
    */
    /*
    //opening file
    string data[n];
    fstream f;
    f.open("E:\\order.txt");
    if (true)
    {
        for (int i = 0; i < n; i++)
        {
            f >> data[i];
        }
    }
    f.close();
    
    //summing the massive one string
    string sum_data;
    for (int i = 0; i < n; i++)
    {
        sum_data += data[i];
        sum_data += " ";
    }
    
    //converting string to char
    char* c = const_cast<char*>(sum_data.c_str());
    
    //encrypting data
    cout << "/////////////////////////////////////////////////////////////////////////////" << endl;
    encrypting(c);
    cout << "\n\n/////////////////////////////////////////////////////////////////////////////" << endl;

    //decrypting data
    decrypting(enc_text);
    cout << "\n\n/////////////////////////////////////////////////////////////////////////////" << endl;

    //writing data to file
    string enc_data = string(enc_text);
    ofstream file;
    file.open("E:\\encrypted_order.txt");
    if (true)
    {
        file << enc_data << endl;
    }
    file.close();
    */
    //decrypting file
    string dec_data[n];
    string d_data;
    fstream d;
    d.open("E:\\encrypted_order.txt");
    if (true)
    {
        for (int i = 0; i < n; i++)
        {
            d >> dec_data[i];
        }
    }
    d.close();
    for (int i = 0; i < n-1; i++)
    {
        d_data += dec_data[i];
        d_data += " ";
    }
    char* q = const_cast<char*>(d_data.c_str());
    decrypting(q);
    cout << "\n\n/////////////////////////////////////////////////////////////////////////////" << endl;
}