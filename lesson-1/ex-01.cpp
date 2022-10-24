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
    Computer *computers;

    Room() {}

    Room(int pc_amount) {
        computers = new Computer[pc_amount];
    }
};

class Building {
public:
    Building() {

    }

    string name;
    string address;
    Room *rooms;

    Building(int numRooms, int numPCs);
};

Building::Building(int numRooms, int numPCs) {
    rooms = new Room[numRooms];
    for (int i = 0; i < numRooms; ++i) {
        rooms[i] = Room(numPCs);
    }
}

int main(int argc, char *argv[]) {
    Building building(10, 12);
    Computer pc = building.rooms[0].computers[1];
    pc.setID(123);
    cout << pc.getID();
}