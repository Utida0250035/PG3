#pragma once

template <typename T0, typename T1>
class Comparison {
   public:
	T0 Min(T0 val0, T1 val1) {
		if (val1 < val0) {
			return static_cast<T0>(val1);
		}
		return static_cast<T0>(val0);
	}
};