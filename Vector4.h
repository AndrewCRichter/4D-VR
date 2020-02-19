//
// Created by Andrew on 11/13/2019.
//

#ifndef INC_4D_VR_VECTOR4_H
#define INC_4D_VR_VECTOR4_H
using namespace std;

class Vector4
{
    private:
    int x;
    int y;
    int z;
    int w;

    public:
    Vector4();
    Vector4(float x, float y, float z, float w);
    float dot(Vector4 other);
    friend Vector4 operator + (Vector4 left, Vector4 right);
    friend Vector4 operator - (Vector4 left, Vector4 right);
    friend Vector4 operator * (Vector4 left, float factor);
    friend Vector4 operator / (Vector4 left, float factor);
    friend Vector4 operator += (Vector4 left, Vector4 right);
    friend Vector4 operator -= (Vector4 left, Vector4 right);
    friend Vector4 operator *= (Vector4 left, float factor);
    friend Vector4 operator /= (Vector4 left, float factor);
    float getValue(int index);
    void setValue(float val, int index);
};

#endif //INC_4D_VR_VECTOR4_H
