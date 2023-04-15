#include <iostream>
#include <string>

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	//Object* obj = new Object;
	//obj->BeginPlay();

	//Actor* act = new Actor;
	//act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();


//delete obj;
	//delete act;
	delete pwn;
	system("pause");
}

void Object::BeginPlay()
{
	std::cout << "object BeginPlay() called. \n";
}

void Actor::BeginPlay()
{
	std::cout << "Actor BeginPlay() called. \n";
	Object::BeginPlay();
}

void Pawn::BeginPlay()
{
	std::cout << "Pawn BeginPlay() called. \n";
	Object::BeginPlay();
	Actor::BeginPlay();
}