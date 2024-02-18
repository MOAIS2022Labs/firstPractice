#pragma once
#include <iostream>
#include <string>

class Person
{

protected:

	std::string FIO{};

public:

	Person(std::string FIO) : FIO(FIO) {}
	virtual void print() = 0;

};

class Student : public Person
{
private:
	
	int course{};
	int arr[5];

public:

	Student(std::string FIO, int course, int arr[5]) : Person(FIO), course(course)
	{
		for (size_t i = 0; i < 5; ++i)
			this->arr[i] = arr[i];
	}

	void print()
	{
		std::cout << FIO << '\n' << course << '\n';
		for (size_t i = 0; i < 5; ++i)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
	}

};

class Lecture : public Person
{

private:

	std::string post{};

public:
	
	Lecture(std::string FIO, std::string post) : Person(FIO), post(post) {}

	void print()
	{
		std::cout << FIO << '\n' << post << '\n';
	}

};

