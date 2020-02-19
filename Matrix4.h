//
// Created by Andrew on 12/23/2019.
//

#ifndef INC_4D_VR_MATRIX4_H
#define INC_4D_VR_MATRIX4_H


class Matrix4{
private:
    const SIZE = 4;
    float[SIZE][SIZE] matrix4;
public:
    Matrix4();
    Matrix4(Matrix4 inMatrix);
    float getVal(index1, index2);
    float setVal(value, index1, index2);
    friend Matrix4 operator * (Matrix4 left, Matrix4 right);
    friend operator *= (Matrix4 left, Matrix4 right);
    friend Matrix4 operator * (Matrix4 matrix4, Vector4 vec);
    friend operator *= (Matrix4 matrix4, Vector4 vec);
};


#endif //INC_4D_VR_MATRIX4_H
