#pragma once
#include <chrono>
#include <thread>

namespace LB {

	class Wait {
	public:
		static int Cooldown(int val);
		static int Timer(int val);
		inline static bool Active;

	};
}

