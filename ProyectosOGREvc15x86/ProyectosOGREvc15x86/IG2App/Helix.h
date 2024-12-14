#pragma once
#include "IG2Object.h"
#include "Blade.h"
#include <vector>

class Helix : public IG2Object
{
public:
	Helix(const Vector3 initPos, SceneNode* node, SceneManager* sm, int n);

private:
	SceneNode* helix; //papa

	std::vector<Blade*> blades;
	SceneNode* center;

};

