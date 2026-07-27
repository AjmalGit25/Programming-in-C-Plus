class Birthday {
public:
    Birthday (int d, int m, int y) : day(d), month(m), year(y) {}

private:
    int day;
    int month;
    int year;
};


class Person {
public:
    Person (string n, Birthday b) : name(n), bd(b) {}

private:
    string name;
    Birthday bd;
};


Birthday myBirthday (21, 5, 2003);

Person me ("Ajmal", myBirthday);

// -------------------------------------------------------------

/* Real-life examples of Composition */

// Car has an Engine
class Engine {};

class Car {
private:
    Engine engine;
};


// House has Rooms
class Room {};

class House {
private:
    Room livingRoom;
    Room kitchen;
};


// Computer has a CPU
class CPU {};

class Computer {
private:
    CPU cpu;
};


// Book has Pages
class Page {};

class Book {
private:
    vector<Page> pages;
};


// We're composing one object from other objects.