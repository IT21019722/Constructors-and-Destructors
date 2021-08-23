class Rectangle
{
  private:
    int width;
    int length;
  
  public:
    Rectangle();   //default constructor
    Rectangle(int wd, int len); //overloading constructor
    void setWidth(int w);
    int getWidth();
    void setLength(int l);
    int getLength();
    int calcArea();
    ~Rectangle();

}