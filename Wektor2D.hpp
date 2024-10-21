class Wektor2D
{
public:
    double x, y;

    Wektor2D(double xVal = 0, double yVal = 0) : x(xVal), y(yVal)
    {
        std::cout << "Konstruktor: Wektor(" << x << ", " << y << ") został utworzony.\n";
    }

    ~Wektor2D()
    {
        std::cout << "Destruktor: Wektor(" << x << ", " << y << ") zostaje zniszczony.\n";
    }

    double getX() const { return x; }

    double getY() const { return y; }

    void setX(double newX) { x = newX; }

    void setY(double newY) { y = newY; }

    Wektor2D operator+(Wektor2D other) const { return Wektor2D(x + other.x, y + other.y); }
    double operator*(Wektor2D other) const { return x*other.x + y*other.y; }
    double   norm() { return sqrt(x * x + y * y); }

    void print();
};
void Wektor2D::print()
{
    std::cout << "Wartosc y, " << y << "\n";
    std::cout << "Wartosc normy, " << norm() << "\n";
    std::cout << "Wartosc x, " << x << "\n";
}
