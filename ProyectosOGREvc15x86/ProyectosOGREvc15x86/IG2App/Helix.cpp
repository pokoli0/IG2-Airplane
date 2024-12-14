#include "Helix.h"

Helix::Helix(const Vector3 initPos, SceneNode* node, SceneManager* sm, int n)
	: IG2Object(initPos, node, sm)
{
    //helix = mNode->createChildSceneNode();

    float x, y, z = 0;
    float radius = 50;
	for (int i = 0; i < n; i++) 
    {
        float angle = Ogre::Math::TWO_PI * i / n;   // Ángulo en radianes

        x = radius * Ogre::Math::Cos(angle);
        y = radius * Ogre::Math::Sin(angle);

        Blade* b = new Blade(mNode->getPosition(), mNode->createChildSceneNode(), mSM);

        b->getBladeNode()->setPosition(x, y, z);

        b->getBladeNode()->pitch(Degree(90));   // para q miren hacia delante
        b->getBladeNode()->yaw(Radian(angle));  // rotacion en Y
	}

	center = mNode->createChildSceneNode();
    Entity* ent = mSM->createEntity("sphere.mesh");
    center->attachObject(ent);
    center->setPosition(mNode->getPosition());
    center->setScale(0.2, 0.2, 0.5);


}
