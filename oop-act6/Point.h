class Point
{
    private:
    
        double x;

        double y;

    public:

        Point();

        Point(double x2, double y2);

        double getX();

        double getY();

        void setX(double _x);

        void setY(double _y);

        double distance(Point);
};