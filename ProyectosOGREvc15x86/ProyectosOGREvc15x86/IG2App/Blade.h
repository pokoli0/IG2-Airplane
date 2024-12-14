#pragma once
#include "IG2Object.h"

class Blade : public IG2Object
{
public:
	Blade(const Vector3 initPos, SceneNode* node, SceneManager* sm);

	virtual ~Blade() {};

	SceneNode* getBladeNode() { return blade; }

private:

	SceneNode* blade; // ppal

	SceneNode* ala;
	SceneNode* ogrehead;
	
};

