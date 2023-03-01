/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
char char1Input;
char char2Input;
char char3Input;
string codeInput;
const char k_cAuthenticatorCodeCharacter1	=	'E';
const char k_cAuthenticatorCodeCharacter2	=	'C';
const char k_cAuthenticatorCodeCharacter3	=	'A';
cout << "Enter the first character of the message code: " << endl;
cin >> char1Input;
codeInput += char1Input;
cout << "Enter the second character of the message code: " << endl;
cin >> char2Input;
codeInput += char2Input;
cout << "Enter the thrid character of the message code: " << endl;
cin >> char3Input;
codeInput += char3Input;
string codeAuthenticator;
codeAuthenticator += k_cAuthenticatorCodeCharacter1;
codeAuthenticator += k_cAuthenticatorCodeCharacter2;
codeAuthenticator += k_cAuthenticatorCodeCharacter3;
cout << "Authenticator Code: " << codeAuthenticator << endl;
cout << "Message code: " << codeInput << endl;
if (char1Input == k_cAuthenticatorCodeCharacter1 && char2Input == k_cAuthenticatorCodeCharacter2 && char3Input == k_cAuthenticatorCodeCharacter3){
    cout << "Message is authentic." << endl;
} else {
    cout << "Message is invalid." << endl;
}
    return 0;
}
