#pragma once

class Actor
{


private:
	//this is just like a array
	const char* m_name;
	bool m_started;

public:
	Actor(const char* name) { m_name = name; }
	

	virtual void start() {};
	virtual void update();
	virtual void draw();
	virtual void end();

};