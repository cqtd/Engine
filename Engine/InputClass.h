#pragma once

#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H

class InputClass
{
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initialize();

	void KeyDown(unsigned int keyCode);
	void KeyUp(unsigned int keyCode);

	bool IsKeyDown(unsigned int keyCode);

private:
	bool m_keys[256];
};

#endif