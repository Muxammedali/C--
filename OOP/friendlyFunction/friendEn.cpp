#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int weight;
    void printforfun()
    {
        cout << "De name is: " << name << endl
             << "De age is: " << age << endl
             << "De weight is: " << weight << endl;
    }
};

class MyTest;
class Point
{
private:
    int x;
    int y;

public:
    ///    Constructors.

    Point() /*Default constructor.*/
    {
        x = 0;
        y = 0;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }

    // Overloading the equality operator

    bool operator==(const Point &other)
    {
        return this->x == other.x && this->y == other.y;
    }

    // Operator overloading is not equal
    bool operator!=(const Point &other)
    {
        return !(this->x == other.x && this->y == other.y);
    }

    // Overloading the addition operator
    Point operator+(const Point &other)
    {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }

    // Prefix increment overload. ++x;

    Point &operator++()
    {
        this->x++;
        // или this->x += 1;
        // or this->x = this->x + 1;
        this->y += 1;
        return *this;
    }

    // Postfix increment overload x++;

    Point &operator++(int value)
    {
        // using it directly with the copy constructor
        Point temp(*this);
        // what does the top mean?
        // this means that, here in this method, we will create
        // another exactly the same object, with exactly the same
        // fields at the time of calling the postfix increment operation.
        // we will actually return this same object return temp;
        //  and then we need to do the same with our object
        // operations that we did in the prefix increment.
        // well, that is, increase its fields.
        this->x++;
        this->y++;
        return temp;
    }

    // Prefix decrement overload --x;
    Point &operator--()
    {
        this->x--;
        // or this->x += 1;
        // or this->x = this->x + 1;
        this->y -= 1;
        return *this;
    }

    // Postfix decrement overload x++;
    Point &operator--(int value)
    {
        // using it directly with the copy constructor
        Point temp(*this);
        // what does the top mean?
        // this means that, here in this method, we will create
        // another exactly the same object, with exactly the same
        // fields at the time of calling the postfix increment operation.
        // we will actually return this same object return temp;
        //  and then we need to do the same with our object
        // operations that we did in the prefix increment.
        // well, that is, increase its fields.
        this->x--;
        this->y--;
        return temp;
    }
    /*   int setY(int valueY)
       {
           y = valueY;
       }*/
    int GetY()
    {
        return y;
    }

    int GetX()
    {
        return x;
    }
    /* int SetX(int valueX)
     {
         x = valueX;
     }*/

    void PrintInfo()
    {
        cout << "X = " << x << "\tY = " << y << endl;
    }

    friend void ChangeX(Point &value);
};

class Myclass
{
public:
    int *data;

    ///         Constructor
    Myclass(int size)
    {
        /*Below the code this->Size = size; we need it for
         so that we remember what size we have
         the array exists at all. Because
         here in the constructor copying in the code
         this->data = other.data; we just can't
         get this data without that variable. */
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << "Consctucror started " << this << endl;
    }

    ///    COPY CONSTRUCTOR.

    Myclass(const Myclass &other)
    {
        /* Below is the default constructor logic. */
        // this ->data = other.data;

        /*Below means that in the new facility in place
         just to stupidly copy the pointer,
         more precisely, a link to the pointer to which we already have
         yes, we create a new object the size of this
         the same number of array cells that we created in
         the first object, well, here in
        this->Size = size; и
        this->data = new int[size]; */
        this->Size = other.Size;
        /* here above when creating a variable and assigning it
         other.size values, below we immediately allocate the data to the array.*/

        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        cout << "Copy constructor started. " << this << endl;
    }

    // Overloading the assignment operator.

    Myclass &operator=(const Myclass &other)
    {
        cout << "The operator started =  " << this << endl;
        this->Size = other.Size;
        /*above, when copying, we must change the Size field which corresponds to the array
         since the Size field is not allocated in dynamic memory to us in it
         There is no need to clear anything, we can simply assign it.*/

        if (this->data != nullptr)
        {
            delete[] this->data;
        }
        this->data = new int[other.Size];
        /* below, this part refers to dynamic memory.
         We took (or rather copied) from the code above, we pasted it below
         after the memory of the current object (inside if)
         we will clean it up. we must change the Size field which corresponds to the array
         since the Size field is not allocated in dynamic memory to us in it
         There is no need to clear anything, we can simply assign it.*/
        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        return *this;
    }

    ///   Destructor.
    ~Myclass()
    {
        cout << "Destructor started. " << this << endl;
        delete[] data;
    }

private:
    int Size; // different from size variable

}; // end of class Myclass

class TestClass
{
public:
    int &operator[](int index)
    {
        return arr[index];
    }

private:
    int arr[5]{5, 44, 4, 987, 69};
};
class Mytest
{
private:
    int Data = 0;
    friend void ChangeX(Point &value, Mytest &test);
};
// Friendly Function
void ChangeX(Point &value, Mytest &test)
{
}

int main()
{
    setlocale(LC_ALL, "ru");
    Mytest b;
    Point a(5, 12);
    a.PrintInfo();
    ChangeX(a, b);
    a.PrintInfo();
}
