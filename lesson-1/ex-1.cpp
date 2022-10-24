#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "strings.h"
#include <iostream>

using namespace std;

class Computer {
public:
    int ID;
    string username;
    string pass;

    void printPCinfo(void);

    Computer() {}

    Computer(int, string);
};

void Computer::printPCinfo(void) {
    cout << "ID = " << ID << ", Username = " << username << "\n";
}

Computer::Computer(int ID, string username) {
    this->ID = ID;
    this->username = username;
}


class Room {
public:
    int number;
    int pc_amount_limit;
    int pc_amount;
    Computer *computers;

    Room() {}

    Room(int pc_amount) {
        this->pc_amount_limit = pc_amount;
        computers = new Computer[pc_amount];
        pc_amount = 0;
    }

    void addComputer(Computer);

    void showAllPCinfo(void);
};

void Room::showAllPCinfo(void) {
    for (int i = 0; i < pc_amount; ++i) {
        Computer pc = computers[i];
        pc.printPCinfo();
    }
}

void Room::addComputer(Computer pc) {
    if (pc_amount != pc_amount_limit) {
        computers[pc_amount++] = pc;
    }
}

class Building {
public:
    Building() {

    }

    string name;
    string address;
    Room *rooms;

    Room getRoom(int);

    Building(int numRooms, int numPCs);
};

Building::Building(int numRooms, int numPCs) {
    rooms = new Room[numRooms];
    for (int i = 0; i < numRooms; ++i) {
        rooms[i] = Room(numPCs);
    }
}

Room Building::getRoom(int room_num) {
    return rooms[room_num];
}

int main(int argc, char *argv[]) {
    Building building(10, 12);
    Computer pc1(1001, "user1");
    Computer pc2(1002, "user2");
    Computer pc3(1003, "user3");

    Room room = building.getRoom(2);
    room.addComputer(pc1);
    room.addComputer(pc2);
    room.addComputer(pc3);
    room.showAllPCinfo();
}