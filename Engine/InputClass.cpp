#include "InputClass.h"

InputClass::InputClass()
{
}

InputClass::InputClass(const InputClass&)
{
}

InputClass::~InputClass()
{
}

void InputClass::Initialize()
{
	int i;
	for (i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return;
}

void InputClass::KeyDown(unsigned keyCode)
{
	m_keys[keyCode] = true;
	return;
}

void InputClass::KeyUp(unsigned keyCode)
{
	m_keys[keyCode] = false;
	return;
}

bool InputClass::IsKeyDown(unsigned keyCode)
{
	return m_keys[keyCode];
}
