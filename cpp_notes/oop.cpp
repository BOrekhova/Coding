Object-oriented programming (OOP)
  

// OOP = objects + classes
// Incapsulation is the first principle of OOP

class User
{
    private: // folowing fields are accesible only for given class
    std::string pass;
    std::string username = "Name";
    public: // following field can be accessed everywhere
    // getter
    std::string getUrename() { return username; }
    // setter
    void setUsername(std::string username)
    {
        this->username = username;
    }
}

// Inheritance is the second principle of OOP

class Animal  //abstract classes cannot be instantiated, but they can be subclassed
{
    int legs;
    int arms;
}

class Mammal :: Animal
{
    void climb() {}
}
