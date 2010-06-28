// copyright (c) 2007 magnus auvinen, see licence.txt for more info
#ifndef GAME_CLIENT_COMPONENTS_MAPIMAGES_H
#define GAME_CLIENT_COMPONENTS_MAPIMAGES_H
#include <game/client/component.h>

class CMapImages : public CComponent
{	
	int m_aTextures[64];
	int m_Count;
	int m_EntitiesTextures;
public:
	CMapImages();
	
	int Get(int Index) const { return m_aTextures[Index]; }
	int GetEntities(); 
	int Num() const { return m_Count; }

	virtual void OnMapLoad();
};

#endif
