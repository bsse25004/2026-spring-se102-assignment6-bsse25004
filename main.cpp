#include <iostream>
#include <string>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Guild.h"

using namespace std;

int main() {
    string guildName;
    cout << "Enter the name of your guild: ";
    getline(cin, guildName);

    //Making the object of Guild class
    Guild myGuild(guildName);
    int choice;
    do {
        //Taking the choice fronm the user
        cout << "\nChoose Hero Type to Add:\n";
        cout << "1. Hero\n2. Warrior\n3. Knight\n4. Display Guild Stats\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline

        if (choice == 1) {
            // Add basic Hero
            string name;
            int health, power;
            cout << "Enter Hero Name: ";
            getline(cin, name);
            cout << "Enter Health: ";
            cin >> health;
            cout << "Enter Power: ";
            cin >> power;
            cin.ignore();

            if (health <= 0 || power <= 0) {
                cout << "Invalid stats! Health and Power must be positive." << endl;
            } 
            else if (myGuild.getMemberCount() >= 15) {
                cout << "Guild is at full capacity!" << endl;
            } 
            else {
                myGuild += new Hero(name, health, power); 
                // Guild owns the hero
                cout << name << " added to the guild!" << endl;
            }
        }
        else if (choice == 2) {
            // Add Warrior
            string name;
            int health, power, armor;
            cout << "Enter Warrior Name: ";
            getline(cin, name);
            cout << "Enter Health: ";
            cin >> health;
            cout << "Enter Power: ";
            cin >> power;
            cout << "Enter Armor: ";
            cin >> armor;
            cin.ignore();

            if (health <= 0 || power <= 0 || armor < 0) {
                cout << "Invalid stats! Health/Power must be positive and Armor cannot be negative." << endl;
            } 
            else if (myGuild.getMemberCount() >= 15) {
                cout << "Guild is at full capacity!" << endl;
            } 
            else {
                myGuild += new Warrior(name, health, power, armor);
                cout << name << " added to the guild!" << endl;
            }
        }
        else if (choice == 3) {
            // Add Knight
            string name;
            int health, power, armor, charge;
            cout << "Enter Knight Name: ";
            getline(cin, name);
            cout << "Enter Health: ";
            cin >> health;
            cout << "Enter Power: ";
            cin >> power;
            cout << "Enter Armor: ";
            cin >> armor;
            cout << "Enter Charge Bonus: ";
            cin >> charge;
            cin.ignore();

            if (health <= 0 || power <= 0 || armor < 0 || charge < 0) {
                cout << "Invalid stats! All values must be positive (except armor can be zero)." << endl;
            } 
            else if (myGuild.getMemberCount() >= 15) {
                cout << "Guild is at full capacity!" << endl;
            } 
            else {
                myGuild += new Knight(name, health, power, armor, charge);
                cout << name << " added to the guild!" << endl;
            }
        }
        else if (choice == 4) {
            // Display Guild Stats
            myGuild.displayGuildStats();
            cout << "\nFull Guild Details:\n" << myGuild;
        }
        else if (choice == 5) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice! Please select between 1 and 5." << endl;
        }

    } while (choice != 5);
    return 0;
}