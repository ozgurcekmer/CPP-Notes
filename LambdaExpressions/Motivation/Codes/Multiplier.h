#pragma once

template <typename T>
class Multiplier
{
private:
	T num{};

public:
	Multiplier(T n) : num{n} {}
	int operator() (T n) const
	{
		return num * n;
	}
};