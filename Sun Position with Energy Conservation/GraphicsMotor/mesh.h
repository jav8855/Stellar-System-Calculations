#pragma once

#include "common.h"
#include "vertex.h"
#include <vector>
#include "shader.h"
#include "texture.h"

class Mesh{

public:
//atributos
	std::vector<vertex_t>* vertexList;
	std::vector<int>* faceList;
	GLShader* shader;
	Texture* tex = nullptr;
//métodos	
	Mesh();
	Mesh(std::string fileName, std::string textureFileName);
	~Mesh();
	void loadFromFile(std::string fileName, std::string textureFileName);
	void setColor(int idxVertex, glm::vec4 color);
};
