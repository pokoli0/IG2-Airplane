#pragma once
#include "IG2Object.h"
#include "Helix.h"

class Airplane : public IG2Object
{
public:
	Airplane(const Vector3 initPos, SceneNode* node, SceneManager* sm);
	
private:
	SceneNode* plane;

	SceneNode* body;
	SceneNode* wings;
	SceneNode* pilot;
	SceneNode* rudder;

	SceneNode* helix1;
	SceneNode* helix2;
};

