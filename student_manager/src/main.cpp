#include <iostream>
#include <string>

using namespace std;

int main(){
    //  types of varibles  in c++
    string studentName = "John Doe";
    int studentAge = 20;
    bool isEnrolled = true;
    double studentGrade = 3.6;
    char studentGender = 'M';
// constant variable in c++
    const int nombreMaxEtudiants = 100;
// arithmetic operations in c++
    int a = 10;
    int b = 3;
//operations in c++
cout << a + b << endl; // addition : 13
cout << a - b << endl; // soustraction : 7
cout << a * b << endl; // multiplication : 30
cout << a / b << endl; // division entière : 3
cout << a % b << endl; // reste : 1

// assignment operations in c++
int age = 20;
age += 1; // age = age + 1
age -= 1; // age = age - 1
age *= 2; // age = age * 2
age /= 2; // age = age / 2
age++;    // ajouter 1
age--;    // retirer 1

// comparison operations in c++
studentAge == 20 // égal à
studentAge != 18 // différent de
studentAge > 18  // supérieur à
studentAge < 25  // inférieur à
studentAge >= 18 // supérieur ou égal
studentAge <= 25 // inférieur ou égal

// logical operations in c++ 
studentAge >= 18 && isEnrolled // ET
studentAge < 18 || isEnrolled  // OU
!isEnrolled                    // NON

// Affichage simple d'un texte avec cout
cout << "Bienvenue dans Student Manager" << endl;

// Affichage de plusieurs valeurs avec l'operateur <<
cout << "Nom : " << studentName << endl;
cout << "Age : " << studentAge << endl;
cout << "Note : " << studentGrade << endl;

// Retour a la ligne avec \n, sans forcer le vidage du flux
cout << "Premiere ligne\nDeuxieme ligne" << endl;

// Saisie d'un nombre avec cin
int enteredAge;
cout << "Entrez un age : ";
cin >> enteredAge;

// Saisie d'un texte sans espace avec cin
string enteredFirstName;
cout << "Entrez un prenom : ";
cin >> enteredFirstName;

// Nettoyage du retour a la ligne restant avant getline
cin.ignore();

// Saisie d'une phrase complete, espaces compris, avec getline
string enteredFullName;
cout << "Entrez votre nom complet : ";
getline(cin, enteredFullName);

// Concatenation : assemblage de plusieurs chaines avec l'operateur +
string welcomeMessage = "Bonjour " + enteredFullName + " !";
cout << welcomeMessage << endl;

// Conversion d'un nombre en texte pour la concatenation
string ageMessage = "Vous avez " + to_string(enteredAge) + " ans.";
cout << ageMessage << endl;










    cout <<"Student Manager Hello World!"<<endl;
    return 0;
}