// copyright (c) 2007 magnus auvinen, see licence.txt for more info
#ifndef ENGINE_MAP_H
#define ENGINE_MAP_H

#include "kernel.h"

class IMap : public IInterface
{
	MACRO_INTERFACE("map", 0)
public:
	virtual void *GetData(int Index) = 0;
	virtual void *GetDataSwapped(int Index) = 0;
	virtual void UnloadData(int Index) = 0;
	virtual void *GetItem(int Index, int *Type, int *pId) = 0;
	virtual void GetType(int Type, int *pStart, int *pNum) = 0;
	virtual void *FindItem(int Type, int Id) = 0;
	virtual int NumItems() = 0;
};


class IEngineMap : public IMap
{
	MACRO_INTERFACE("enginemap", 0)
public:
	virtual bool Load(const char *pMapName) = 0;
	virtual bool IsLoaded() = 0;
	virtual void Unload() = 0;
	virtual unsigned Crc() = 0;
};

extern IEngineMap *CreateEngineMap();

#endif
