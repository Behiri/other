#include <iostream>
#include <memory>

class FlyBehavior {
public:
	virtual void fly() const=0;
};

class FlyWithWings : public FlyBehavior {
public:
	void fly() const override {
		std::cout << "Fly With Wings" << std::endl;
	}
};

class FlyNoWay : public FlyBehavior {
public:
	void fly() const override {
		std::cout << "Fly No Way!" << std::endl;
	}
};

class QuackBehavior {
public:
	virtual void quack()=0;
};

class Quack : public QuackBehavior {
public:
	void quack() override {
		std::cout << "Quack! Quack!" << std::endl;
	}
};

class Squeak : public QuackBehavior {
public:
	void quack() override {
		std::cout << "SQUUUUaek!" << std::endl;
	}
};

class MuteQuack : public QuackBehavior {
public:
	void quack() override {
		std::cout << "<< Silence >>" << std::endl;
	}
};

class Duck {
public:
	FlyBehavior* flBeh;
	QuackBehavior* qBeh;

	void swim() { std::cout << "Swimming!" << std::endl; }
	virtual void display() = 0;

	void performQuack() { qBeh->quack(); }
	void performFly() { flBeh->fly(); }


	void setQuackBehavior(QuackBehavior* qB) { qBeh = qB; }
	void setFlyBehavior(FlyBehavior* fB) { flBeh = fB; }

};

class MallardDuck : public Duck {
public:
	MallardDuck() {
		flBeh = new FlyWithWings();
		qBeh = new Quack();
	}
	void display() { std::cout << "Mallard Duck Showing off!!!" << std::endl; }
};

int main()
{
	Duck* mallard = new MallardDuck();
	mallard->performQuack();
	mallard->performFly();

	std::cout << "Hi" << std::endl;
	return 0;
}
