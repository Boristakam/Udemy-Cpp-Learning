// Subscripting cipher

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'-"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr%!"} ;

    cout << "\nEnter your secret message: ";
    string secret_message {};
    getline(cin, secret_message);

    string encrypted_message;

    // Encrypting message 
    for(auto c: secret_message)
    {
        size_t position = alphabet.find(c); //note 'position' is just an interger representing at which point a character in secret message was found in alphabet 
        if(position != string::npos)
        {
            char new_char {key.at(position)}; //taking character at that new position within the key string this time, and concatenating in a new string called encripted_message 
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += c; 
        }  
    }
    cout << "\nEncrypted message: " << encrypted_message << endl;

    // Dencrypting message 
    string decrypted_message;

    for (auto c: encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        }
        else
        {
            decrypted_message += c;
        }
    } 
    cout << "\nDecrypted message: " << decrypted_message << endl;


    cout << endl;
    return 0;
}