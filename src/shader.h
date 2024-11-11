//
// Created by mika on 11/11/24.
//

#ifndef SHADER_H
#define SHADER_H

class Shader
{
public:
    unsigned int ID;

    Shader()
    {
    }

    Shader& Use();

    void Compile(
        const char* vertexSource,
        const char* fragmentSource,
        const char* geometrySource = nullptr
    );

    // Utility
    void SetFloat(const char* name, float value, bool useShader = false);
};

#endif //SHADER_H
