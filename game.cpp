#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <stdio.h>
#include <thread>
#include <windows.h>
#include <conio.h>
#include <Lmcons.h>
// enable your include path on your "includePath object" in your "c_cpp.properties.json" json properties

using namespace std;

void Menu()
{

    int choice;
    do
    {
        cout << "Main Menu\n0. Play\n1. Settings\n2. Awards\n3. exit";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Enjoy the game \n"
                 << endl;
            break;
        case 1:
            cout << "There seems to be no issues\n"
                 << endl;
            break;
        case 2:
            cout << "you have 10 outstanding awards in completing this game \n"
                 << endl;
            break;
        case 3:
            cout << "Ok Bye\n"
                 << endl;
            break;
        }
    } while (choice != 0);
}

void Username()
{
    // reference to w3schools.com
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Welcome " << name << endl;
}

// the names of the members of the family
string name1 = "Cobie";     // first child
string name2 = "Robert";    // second child
string name3 = "Gabrielle"; //  daughter
string name4 = "Scarlett";  // wife
string name5 = "Tom";       // last child

int main()
{
    Menu();
    Username();
    char test[] = "You are a young man so passionate about adventures...\n"
                  "You travel on an expedition to a Cave far away in Vietnam with your family\n"
                  "While exploring the cave you find yourself lost from the rest of your family\n"
                  "\n";

    for (int i = 0; i < sizeof(test); i++)
    {
        cout << test[i];
        Sleep(100);
    }
    int i = 1;
    while (i < 5)
    {
        char name[20];
        cout << "You come across three path in the cave" << endl;
        gets(name);
        Sleep(1000);
        cout << "On the left you see a path with human footprints" << endl;
        Sleep(1000);
        cout << "In the middle you see a path with animal footprints" << endl;
        Sleep(1000);
        cout << "On the right you see a path with no footprints" << endl;
        cout << "left, middle or right" << endl;
        string path;
        cin >> path;

        if (path == "left")
        {
            cout << "You follow the left path to find your family" << endl;
            Sleep(100);
            cout << "You find nothing there but just human footprints down the way" << endl;
            Sleep(100);
            cout << "help or continue?" << endl;
            // you type in help to politely ask for help from the people you see;
            // you input continue to further the journey;
            string path7;
            cin >> path7;
            if (path7 == "continue")
            {
                cout << "You continue until you see a group of people ahead" << endl;
                cout << "You confront them but quickly realize that they are armed" << endl;
                cout << "fight or run?" << endl;

                string path8;
                cin >> path8;
                if (path8 == "fight")
                {
                    cout << "You prepare to face a massive battle until one of the armed men approaches you" << endl;
                    cout << "Luckily they believe in a fair fight so they put down their weapons" << endl;
                    cout << "You are challenged to fight the best man from group" << endl;
                    cout << "In panic you pick up a rock and chuck it at your opponent" << endl;
                    cout << "He falls and you flee for the jungle" << endl;
                    cout << "You run as fast as you can until you see an abandoned house in the woods" << endl;
                    cout << "Enter or Continue?" << endl;
                }

                // Enter the abandoned house
                // continue to keep running
                string path9;
                cin >> path9;
                if (path9 == "enter")
                {
                    cout << "You find your daughter " << name3 << " trapped in a box" << endl;
                    cout << "Then you go ahead to save her :)" << endl;
                    cout << "Congratulations! You have earned 2 points! :)" << endl;
                }
                if (path9 == "continue")
                {
                    cout << "You go through the jungle but without any protection looking out for help..." << endl;
                    cout << "You were caught by the armed men, and you were killed! :(" << endl;
                }
                if (path8 == "run")
                {
                    cout << "You run and they suspect you are an enemy" <<endl;
                    cout << "You got fired by one them" <<endl;
                    cout <<"Unfortunately, you have been killed" <<endl;
                    cout <<"You failed! Try again" <<endl;
                }
                break;
            }
            if (path7 == "help")
            {
                cout << "They point you straight ahead in the cave telling you they saw some stranger go that way" << endl;
                cout << "They tell you to follow any footprints in the mud" << endl;
                cout << "Halfway through the cave you are faced with another tough decision" << endl;
                cout << "Left or right?" << endl;
                string path11;
                cin >> path11;
                if (path11 == "left")
                {
                    cout << "On the left you find a blonde lady sitting on a rock" << endl;
                    cout << "She instructs you to follow the path to find your family" << endl;
                    cout << "Follow or turn back" << endl;
                    string path10;
                    cin >> path10;
                    if (path10 == "turn back")
                    {
                        cout << "You turn back but are lost to where to go" << endl;
                        cout << "You are scared your family may have been killed " << endl;
                        cout << "You got depressed and drove back home" << endl;
                        cout << "Unfotunately, you lost the game!" << endl;
                        cout << "No award given!" << endl;
                        break;

                        if (path10 == "follow")
                        {
                            cout << "The lady didnt lie to you" << endl;
                            cout << "You find your last child" << name5 << " trapped in a box" << endl;
                            cout << "You quickly saved pulled him out and saved him" << endl;
                            cout << "Congratulations you have earned 2points! :)" << endl;
                            break;
                        }
                    }
                }
                if (path11 == "right")
                {
                    cout << "You find literally nothing on this path" << endl;
                    cout << "You find a place to lay your head, but you can't because your family is in danger" << endl;
                    cout << "Keep searching!" << endl;
                    break;
                }
            }

            break;
        }

        if (path == "right")
        {
            cout << "You follow the path until you come across ancient artifacts " << endl;
            Sleep(100);
            cout << "You can either explore the artifacts or continue in the cave" << endl;
            Sleep(100);
            cout << "search or continue?" << endl;

            string path2;
            cin >> path2;
            if (path2 == "search")
            {
                cout << "You find that the artifacts have some puzzle in it leading to a door" << endl;
                cout << "You can either solve the puzzle or ignore" << endl;
                cout << "solve or ignore?" << endl;
                string path3;
                cin >> path3;
                if (path3 == "solve")
                {
                    cout << "You solve the puzzle correctly and can access the door" << endl;
                    cout << "You either enter or continue on another path " << endl;
                    cout << "enter or continue?" << endl;
                    string path6;
                    cin >> path6;
                    if (path6 == "enter")
                    {
                        cout << "Inside you find " << name1 << " trapped in a box" << endl;
                        cout << "You go ahead to save your child" << endl;
                        cout << "Congratulations! You have earned 2 points :)" << endl;
                        break;
                        if (path6 == "continue")
                        {
                            cout << "You continue through a the cave and find no sign of clue to your family" << endl;
                            cout << "While wandering through the cave, you were bit by a rattle snake" << endl;
                            cout << "You die the next day" << endl;
                            cout << "Try again :(" << endl;
                        }
                    }
                }
                if (path3 == "ignore")
                {
                    cout << "You ignore the puzzle and head on another route" << endl;
                    cout << "You walk into a dark environment and fall into a deep hole" << endl;
                    cout << "You injured and died" << endl;
                    cout << "Try again :(" << endl;
                }
                break;
            }
            if (path2 == "continue")
            {
                cout << "You see some mud and shallow water ahead" << endl;
                cout << "You must choose which way to move forward" << endl;
                cout << "mud or water?" << endl;
                string path4;
                cin >> path4;
                if (path4 == "mud")
                {
                    cout << "You quickly realize that mud is quicksand and meet your demise" << endl;
                    cout << "Try again :(" << endl;
                }
                if (path4 == "water")
                {
                    cout << "You sprint through the water" << endl;
                    cout << "dodging all the nasty beasts that may lurk within it" << endl;
                    cout << "You continue until you see a path straight ahead and a path to your right" << endl;
                    cout << "Straight or right?" << endl;
                    string path5;
                    cin >> path5;
                    if (path5 == "straight")
                    {
                        cout << "You go forward and follow the path" << endl;
                        cout << "as you are walking in the darkness you suddennly feel a sharp pain in your leg" << endl;
                        cout << "You have fallen into a natives animal trap left to die" << endl;
                        cout << "Try again :(" << endl;
                    }
                    if (path5 == "right")
                    {
                        cout << "You find a box lay on the water" << endl;
                        cout << "You opened it and found" << name2 << " trapped in the box" << endl;
                        cout << "You saved your second child" << endl;
                        cout << "Congratulations you just earned 2 points! :)" << endl;
                    }
                }
            }
            break;
        }
        if (path == "middle")
        {
            cout << "You walk straight in the middle and find two doors" << endl;
            cout << "The doors are painted in red and blue" << endl;
            cout << "you select the door to go through.." << endl;
            cout << "blue or red" << endl;
            Sleep(1000);
            string path12;
            cin >> path12;
            if (path12 == "blue")
            {
                cout << "You opened the blue door, and  and found three boxes" << endl;
                cout << "You opened the first box, and found nothing.." << endl;
                cout << "You opened the second box, and found a letter that says do not open the red door" << endl;
                cout << "You opened the third box, and found your wife " << name4 << " trapped in the box" << endl;
                cout << "You saved your wife out of the box..." << endl;
                cout << "Congratulations you earned 2 points" << endl;
            }
            if (path12 == "red")
            {
                cout << "You opened the red door, and immediately got attacked by wild beast" << endl;
                cout << "Unfortunately, you were torn apart and died!" << endl;
                cout << "Try again" << endl;
            }
            break;
        }
        else
        {
            cout << "Invalid input" << endl;
            Sleep(1000);
            cin >> path;
            int i = 0;
        }
    }
}
