
//from mini moulinette terminal color codes
#define GREEN "\033[38;5;84m"
#define LORANGE "\033[38;5;216m"
#define LGREEN "\033[38;5;115m"
#define LPINK "\033[38;5;225m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define BLUE "\033[38;5;45m"
#define PURPLE "\033[38;5;63m"
#define PINK "\033[38;5;207m"
#define BLACK "\033[38;5;0m"
#define BG_GREEN "\033[48;5;82m"
#define BG_RED "\033[48;5;197m"
#define BG_YELLOW "\033[48;5;220m"
#define BG_PINK "\033[48;5;207m"
#define GREY "\033[38;5;8m"
#define BOLD "\033[1m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"

#define _FOR_EACH_0(wrap, func)
#define _FOR_EACH_1(wrap, func, x) wrap(func(x)); 
#define _FOR_EACH_2(wrap, func, x, ...) wrap(func(x));_FOR_EACH_1(wrap, func, __VA_ARGS__)
#define _FOR_EACH_3(wrap, func, x, ...) wrap(func(x));_FOR_EACH_2(wrap, func, __VA_ARGS__)
#define _FOR_EACH_4(wrap, func, x, ...) wrap(func(x));_FOR_EACH_3(wrap, func, __VA_ARGS__)
#define _FOR_EACH_5(wrap, func, x, ...) wrap(func(x));_FOR_EACH_4(wrap, func, __VA_ARGS__)
#define _FOR_EACH_6(wrap, func, x, ...) wrap(func(x));_FOR_EACH_5(wrap, func, __VA_ARGS__)
#define _FOR_EACH_7(wrap, func, x, ...) wrap(func(x));_FOR_EACH_6(wrap, func, __VA_ARGS__)
#define _FOR_EACH_8(wrap, func, x, ...) wrap(func(x));_FOR_EACH_7(wrap, func, __VA_ARGS__)
#define _FOR_EACH_9(wrap, func, x, ...) wrap(func(x));_FOR_EACH_8(wrap, func, __VA_ARGS__)

#define COUNT_ARGS_(_20,_19,_18,_17,_16,_15,_14,_13,_12,_11,_10,_9,_8,_7,_6,_5,_4,_3,_2,_1,N,...) N
#define COUNT_ARGS(...) COUNT_ARGS_(__VA_ARGS__ __VA_OPT__(,) 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define _FOR_EACH_MULTI_0(wrap, func)
#define _FOR_EACH_MULTI_1(wrap, func, x) wrap(func x); 
#define _FOR_EACH_MULTI_2(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_1(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_3(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_2(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_4(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_3(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_5(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_4(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_6(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_5(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_7(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_6(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_8(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_7(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_9(wrap, func, x, ...) wrap(func x);_FOR_EACH_MULTI_8(wrap, func, __VA_ARGS__)

#define _FOR_EACH_ASSERT_0(assertf, func1, func2, cmpf)
#define _FOR_EACH_ASSERT_1(assertf, func1, func2, cmpf, x) assertf(func1(x), func2(x), cmpf); 
#define _FOR_EACH_ASSERT_2(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_1(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_3(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_2(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_4(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_3(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_5(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_4(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_6(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_5(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_7(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_6(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_8(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_7(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_9(assertf, func1, func2, cmpf, x, ...) assertf(func1(x), func2(x), cmpf);_FOR_EACH_ASSERT_8(assertf, func1, func2, cmpf, __VA_ARGS__)

#define _FOR_EACH_ASSERT_MULTI_0(assertf, func1, func2, cmpf)
#define _FOR_EACH_ASSERT_MULTI_1(assertf, func1, func2, cmpf, x) assertf(func1 x, func2 x, cmpf); 
#define _FOR_EACH_ASSERT_MULTI_2(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_1(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_3(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_2(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_4(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_3(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_5(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_4(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_6(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_5(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_7(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_6(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_8(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_7(assertf, func1, func2, cmpf, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_9(assertf, func1, func2, cmpf, x, ...) assertf(func1 x, func2 x, cmpf);_FOR_EACH_ASSERT_MULTI_8(assertf, func1, func2, cmpf, __VA_ARGS__)


#define __ARGS(...) __VA_ARGS__
#define _ARGS(t) t
#define ARGS(t) _ARGS( __ARGS##t )
#define GET_1(_1, ...) _1
#define GET_2(_1, _2, ...) _2
#define GET_3(_1, _2, _3, ...) _3
#define GET_4(_1, _2, _3, _4, ...) _4
#define GET_5(_1, _2, _3, _4, _5, ...) _5
#define GET_6(_1, _2, _3, _4, _5, _6, ...) _6
#define GET_7(_1, _2, _3, _4, _5, _6, _7, ...) _7
#define GET_8(_1, _2, _3, _4, _5, _6, _7, _8, ...) _8
#define GET_9(_1, _2, _3, _4, _5, _6, _7, _8, _9, ...) _9
#define GET_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) _10
#define GET_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) _11


#define GET(n, ...) GET_##n(__VA_ARGS__)
#define _TO_STR(x) TO_STR(x)
#define _FOR_EACH_ASSERT_MEM_MULTI_0(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes)
#define _FOR_EACH_ASSERT_MEM_MULTI_2(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(1, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(1, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));
#define _FOR_EACH_ASSERT_MEM_MULTI_4(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(2, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(2, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_2(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_6(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(3, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(3, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_4(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_8(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(4, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(4, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_6(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_10(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(5, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(5, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_8(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_12(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(6, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(6, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_10(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_14(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(7, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(7, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_12(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_16(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, x, y, ...) \
	printf("\n--------------------------------------------");\
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(8, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y))); \
	assertf(func1 x, func2 y, cmpf); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), GET(8, __ARGS nbytes), \
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR([mem]) _TO_STR(GET(narg_pointer, __ARGS y)));\
	_FOR_EACH_ASSERT_MEM_MULTI_14(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)

#define FE__(fe_name, n, wrap, func, ...) FE_(fe_name, n, wrap, func, __VA_ARGS__)
#define FE_(fe_name, n, wrap, func, ...) fe_name##n(wrap, func, __VA_ARGS__)
#define FOR_EACH(wrap, func, ...) FE__(_FOR_EACH_, COUNT_ARGS(__VA_ARGS__), wrap, func, __VA_ARGS__)
#define FOR_EACH_MULTI(wrap, func, ...) FE__(_FOR_EACH_MULTI_, COUNT_ARGS(__VA_ARGS__), wrap, func, __VA_ARGS__)

#define FEA_(fe_name, n, assertf, func1, func2, cmpf, ...) fe_name##n(assertf, func1, func2, cmpf, __VA_ARGS__)
#define FEA__(fe_name, n, assertf, func1, func2, cmpf, ...) FEA_(fe_name, n, assertf, func1, func2, cmpf, __VA_ARGS__)
#define FOR_EACH_ASSERT(assertf, func1, func2, cmpf, ...) FEA__(_FOR_EACH_ASSERT_, COUNT_ARGS(__VA_ARGS__), assertf, func1, func2, cmpf, __VA_ARGS__)
#define FOR_EACH_ASSERT_MULTI(assertf, func1, func2, cmpf, ...) FEA__(_FOR_EACH_ASSERT_MULTI_, COUNT_ARGS(__VA_ARGS__), assertf, func1, func2, cmpf, __VA_ARGS__)

#define FEAM(fe_name, n, assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, ...) fe_name##n(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define FEAM_(fe_name, n, assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, ...) FEAM(fe_name, n, assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)
#define FOR_EACH_ASSERT_MEM_MULTI(assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, ...) FEAM_(_FOR_EACH_ASSERT_MEM_MULTI_, COUNT_ARGS(__VA_ARGS__), assertf, func1, func2, cmpf, memassert, narg_pointer, nbytes, __VA_ARGS__)