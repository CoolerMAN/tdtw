// copyright (c) 2007 magnus auvinen, see licence.txt for more info
#ifndef ENGINE_DEMO_H
#define ENGINE_DEMO_H

#include "kernel.h"

class IDemoPlayer : public IInterface
{
	MACRO_INTERFACE("demoplayer", 0)
public:
	class CInfo
	{
	public:
		bool m_Paused;
		float m_Speed;

		int m_FirstTick;
		int m_CurrentTick;
		int m_LastTick;
	};

	~IDemoPlayer() {}
	virtual void SetSpeed(float Speed) = 0;
	virtual int SetPos(float Precent) = 0;
	virtual void Pause() = 0;
	virtual void Unpause() = 0;
	virtual const CInfo *BaseInfo() const = 0;
};

class IDemoRecorder : public IInterface
{
	MACRO_INTERFACE("demorecorder", 0)
public:
	~IDemoRecorder() {}
	virtual bool IsRecording() = 0;
	virtual int Start(class IStorage *pStorage, const char *pFilename, const char *pNetversion, const char *pMap, int MapCrc, const char *pType) = 0;
	virtual int Stop() = 0;

	virtual void RecordSnapshot(int Tick, const void *pData, int Size) = 0;
	virtual void RecordMessage(const void *pData, int Size) = 0;
};


#endif
