# Constructors-and-Destructors
How do we initialize the attributes in a class with overloading functions.


## Constructors

Initially the attributes assigned under private inside a class are normally initialized to Garbage values. What if you want to initialize them in to some values. Then we have to use Constructors.   

- Constructors are a special kind of function inside a class.   
- Constructors have no return type (not even void)  
- Conctructor has the same name as the class 
- Single Constructor will only be executed once when the object is created in the main program
```c++
class Employee
{
  private:
    int empNo;
    char name[20];
    double basicSalary;
    double allowance;
    double salary;

  public:
    Employee();
    Employee(int pempNo, char pname[], double pbasicSalary);
    void setAllowance(double pallowance);
    void caSalary;
    void printPaySlip;
}

//fuction implementation
Employee::Employee()
{
  empNo = 0;
  strcpy(name, "");
  basicSalary = 0;
  allowance = 0;
}
Employee::Employee(int pempNo, char pname[], double pbasicSalary)
{
  empNo = pempNo;
  strcpy(name, pname);
  basicSalary = pbasicSalary;
}
```
### Activity 1
Implement Default and Overload Constructors

Class is **Recatngle**  
Private attributes are:  
- lenght
- width

Public functions are: 
- setWidth();
- getWidth();
- setLenght();
- getLength();
- calcArea();

create two objects using those constructors in the main progarm. 

## Destructors

- It doesn't specify any parameters or any return types
- The destructor is called implicitly when the object is destroyed 

```c++
~Employee();

Employee::~Employee()
{
  cout<<"Deleted Employee"<<endl; 
}

```








