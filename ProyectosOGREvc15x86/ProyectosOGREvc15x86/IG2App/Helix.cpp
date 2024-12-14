#include "Helix.h"

Helix::Helix(const Vector3 initPos, SceneNode* node, SceneManager* sm, int n)
	: IG2Object(initPos, node, sm)
{
    helix = mNode->createChildSceneNode();

    float x, y, z = 0;
    float radius = 50;
	for (int i = 0; i < n; i++) 
    {
        float angle = Ogre::Math::TWO_PI * i / n;   // Ángulo en radianes

        x = radius * Ogre::Math::Cos(angle);
        y = radius * Ogre::Math::Sin(angle);

        Blade* b = new Blade(Vector3(), helix->createChildSceneNode("Blade" + std::to_string(i + 1)), mSM);

        b->getBladeNode()->setPosition(x, y, z);

        b->getBladeNode()->pitch(Degree(90));   // para q miren hacia delante
        b->getBladeNode()->yaw(Radian(angle));  // rotacion en Y

        // Guardar la Blade en el vector
        blades.push_back(b);
	}

	center = helix->createChildSceneNode("centro");
    Entity* ent = mSM->createEntity("sphere.mesh");
    center->attachObject(ent);
    center->setScale(0.2, 0.2, 0.5);


}
