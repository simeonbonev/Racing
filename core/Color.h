#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        ~Color();
        Color(int = 0, int = 0, int = 0);
        void setRed(int);
        void setGreen(int);
        void setBlue(int);
        int getRed() const;
        int getGreen() const;
        int getBlue() const;
};

#endif // COLOR_H_INCLUDED
