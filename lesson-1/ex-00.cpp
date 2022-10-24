#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "strings.h"
#include <iostream>

using namespace std;

class Computer {
private:
    int id;
    string username;
public:
    string pass;

    void setID(int n) {
        id = n;
    }

    int getID() {
        return id;
    }

    void setUsername(string name) {
        username = name;
    }

    string getUsername() {
        return username;
    }
};

class Room {
public:
    int number;
    Computer computers[10];

};

class Building {
public:
    string name;
    string adress;
    Room rooms[];
};

int main(int argc, char *argv[]) {
    Building building;
    Computer pc = building.rooms[0].computers[1];
    pc.setID(123);
    pc.setUsername("admin");
}