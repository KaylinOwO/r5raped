#pragma once
#include "Cheat.h"
#include "math\QAngle.hpp"
#include "math\Vector2D.hpp"
class IVEngineClient
{
public:
	void ServerCmd(const char* chCommandString, bool bReliable = true);
	int GetLocalPlayerID();
	bool IsConnected(void);
//	bool FullLoadGame(void);
	bool IsInGame(void);
	bool W2S(const Vector & origin, Vector2D & screen);
//	bool W2S(const Vector& origin, Vector& screen);
};
