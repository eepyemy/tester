


#define _FOR_EACH_0(wrap, func)
#define _FOR_EACH_1(wrap, func, x) wrap(func(x)); 
#define _FOR_EACH_2(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_1(wrap, func, __VA_ARGS__)
#define _FOR_EACH_3(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_2(wrap, func, __VA_ARGS__)
#define _FOR_EACH_4(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_3(wrap, func, __VA_ARGS__)
#define _FOR_EACH_5(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_4(wrap, func, __VA_ARGS__)
#define _FOR_EACH_6(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_5(wrap, func, __VA_ARGS__)
#define _FOR_EACH_7(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_6(wrap, func, __VA_ARGS__)
#define _FOR_EACH_8(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_7(wrap, func, __VA_ARGS__)
#define _FOR_EACH_9(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_8(wrap, func, __VA_ARGS__)
#define _FOR_EACH_10(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_9(wrap, func, __VA_ARGS__)
#define _FOR_EACH_11(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_10(wrap, func, __VA_ARGS__)
#define _FOR_EACH_12(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_11(wrap, func, __VA_ARGS__)
#define _FOR_EACH_13(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_12(wrap, func, __VA_ARGS__)
#define _FOR_EACH_14(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_13(wrap, func, __VA_ARGS__)
#define _FOR_EACH_15(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_14(wrap, func, __VA_ARGS__)
#define _FOR_EACH_16(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_15(wrap, func, __VA_ARGS__)
#define _FOR_EACH_17(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_16(wrap, func, __VA_ARGS__)
#define _FOR_EACH_18(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_17(wrap, func, __VA_ARGS__)
#define _FOR_EACH_19(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_18(wrap, func, __VA_ARGS__)
#define _FOR_EACH_20(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_19(wrap, func, __VA_ARGS__)
#define _FOR_EACH_21(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_20(wrap, func, __VA_ARGS__)
#define _FOR_EACH_22(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_21(wrap, func, __VA_ARGS__)
#define _FOR_EACH_23(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_22(wrap, func, __VA_ARGS__)
#define _FOR_EACH_24(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_23(wrap, func, __VA_ARGS__)
#define _FOR_EACH_25(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_24(wrap, func, __VA_ARGS__)
#define _FOR_EACH_26(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_25(wrap, func, __VA_ARGS__)
#define _FOR_EACH_27(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_26(wrap, func, __VA_ARGS__)
#define _FOR_EACH_28(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_27(wrap, func, __VA_ARGS__)
#define _FOR_EACH_29(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_28(wrap, func, __VA_ARGS__)
#define _FOR_EACH_30(wrap, func, x, ...) wrap(func(x)); _FOR_EACH_29(wrap, func, __VA_ARGS__)

#define COUNT_ARGS_(_99, _98, _97, _96, _95, _94, _93, _92, _91, _90, _89, _88, _87, _86, _85, _84, _83, _82, _81, _80, _79, _78, _77, _76, _75, _74, _73, _72, _71, _70, _69, _68, _67, _66, _65, _64, _63, _62, _61, _60, _59, _58, _57, _56, _55, _54, _53, _52, _51, _50, _49, _48, _47, _46, _45, _44, _43, _42, _41, _40, _39, _38, _37, _36, _35, _34, _33, _32, _31, _30, _29, _28, _27, _26, _25, _24, _23, _22, _21, _20, _19, _18, _17, _16, _15, _14, _13, _12, _11, _10, _9, _8, _7, _6, _5, _4, _3, _2, _1, N, ...) N
#define COUNT_ARGS(...) COUNT_ARGS_(__VA_ARGS__ __VA_OPT__(,) 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define _FOR_EACH_MULTI_0(wrap, func)
#define _FOR_EACH_MULTI_1(wrap, func, x) wrap(func x); 
#define _FOR_EACH_MULTI_2(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_1(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_3(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_2(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_4(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_3(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_5(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_4(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_6(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_5(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_7(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_6(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_8(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_7(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_9(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_8(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_10(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_9(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_11(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_10(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_12(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_11(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_13(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_12(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_14(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_13(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_15(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_14(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_16(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_15(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_17(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_16(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_18(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_17(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_19(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_18(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_20(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_19(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_21(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_20(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_22(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_21(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_23(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_22(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_24(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_23(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_25(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_24(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_26(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_25(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_27(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_26(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_28(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_27(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_29(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_28(wrap, func, __VA_ARGS__)
#define _FOR_EACH_MULTI_30(wrap, func, x, ...) wrap(func x); _FOR_EACH_MULTI_29(wrap, func, __VA_ARGS__)

#define _FOR_EACH_ASSERT_0(assertf, func1, func2, result_cmp)
#define _FOR_EACH_ASSERT_1(assertf, func1, func2, result_cmp, x) assertf(func1(x), func2(x), result_cmp); 
#define _FOR_EACH_ASSERT_2(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_1(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_3(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_2(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_4(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_3(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_5(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_4(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_6(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_5(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_7(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_6(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_8(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_7(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_9(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_8(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_10(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_9(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_11(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_10(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_12(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_11(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_13(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_12(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_14(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_13(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_15(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_14(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_16(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_15(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_17(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_16(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_18(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_17(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_19(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_18(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_20(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_19(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_21(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_20(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_22(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_21(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_23(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_22(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_24(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_23(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_25(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_24(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_26(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_25(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_27(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_26(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_28(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_27(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_29(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_28(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_30(assertf, func1, func2, result_cmp, x, ...) assertf(func1(x), func2(x), result_cmp); _FOR_EACH_ASSERT_29(assertf, func1, func2, result_cmp, __VA_ARGS__)


#define _FOR_EACH_ASSERT_MULTI_0(assertf, func1, func2, result_cmp)
#define _FOR_EACH_ASSERT_MULTI_1(assertf, func1, func2, result_cmp, x) assertf(func1 x, func2 x, result_cmp); 
#define _FOR_EACH_ASSERT_MULTI_2(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_1(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_3(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_2(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_4(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_3(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_5(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_4(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_6(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_5(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_7(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_6(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_8(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_7(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_9(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_8(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_10(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_9(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_11(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_10(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_12(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_11(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_13(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_12(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_14(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_13(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_15(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_14(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_16(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_15(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_17(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_16(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_18(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_17(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_19(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_18(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_20(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_19(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_21(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_20(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_22(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_21(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_23(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_22(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_24(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_23(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_25(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_24(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_26(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_25(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_27(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_26(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_28(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_27(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_29(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_28(assertf, func1, func2, result_cmp, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MULTI_30(assertf, func1, func2, result_cmp, x, ...) assertf(func1 x, func2 x, result_cmp); _FOR_EACH_ASSERT_MULTI_29(assertf, func1, func2, result_cmp, __VA_ARGS__)


#define __ARGS(...) __VA_ARGS__
#define _ARGS(t) t
#define ARGS(t) _ARGS( __ARGS##t )
#define GET_0(...) _0
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
#define GET_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) _12
#define GET_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) _13
#define GET_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) _14
#define GET_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) _15
#define GET_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) _16
#define GET_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, ...) _17
#define GET_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, ...) _18
#define GET_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, ...) _19
#define GET_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, ...) _20
#define GET_21(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, ...) _21
#define GET_22(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, ...) _22
#define GET_23(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, ...) _23
#define GET_24(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, ...) _24
#define GET_25(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, ...) _25
#define GET_26(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, ...) _26
#define GET_27(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, ...) _27
#define GET_28(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, ...) _28
#define GET_29(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, ...) _29
#define GET_30(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, ...) _30
#define GET_31(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, ...) _31
#define GET_32(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, ...) _32
#define GET_33(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, ...) _33
#define GET_34(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, ...) _34
#define GET_35(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, ...) _35
#define GET_36(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, ...) _36
#define GET_37(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, ...) _37
#define GET_38(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, ...) _38
#define GET_39(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, ...) _39
#define GET_40(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, ...) _40
#define GET_41(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, ...) _41
#define GET_42(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, ...) _42
#define GET_43(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, ...) _43
#define GET_44(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, ...) _44
#define GET_45(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, ...) _45
#define GET_46(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, ...) _46
#define GET_47(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, ...) _47
#define GET_48(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, ...) _48
#define GET_49(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, ...) _49
#define GET_50(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, ...) _50
#define GET_51(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, ...) _51
#define GET_52(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, ...) _52
#define GET_53(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, ...) _53
#define GET_54(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, ...) _54
#define GET_55(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, ...) _55
#define GET_56(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, ...) _56
#define GET_57(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, ...) _57
#define GET_58(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, ...) _58
#define GET_59(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, ...) _59
#define GET_60(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, ...) _60
#define GET_61(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, ...) _61
#define GET_62(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, ...) _62
#define GET_63(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, ...) _63
#define GET_64(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, ...) _64
#define GET_65(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, ...) _65
#define GET_66(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, ...) _66
#define GET_67(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, ...) _67
#define GET_68(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, ...) _68
#define GET_69(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, ...) _69
#define GET_70(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, ...) _70
#define GET_71(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, ...) _71
#define GET_72(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, ...) _72
#define GET_73(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, ...) _73
#define GET_74(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, ...) _74
#define GET_75(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, ...) _75
#define GET_76(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, ...) _76
#define GET_77(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, ...) _77
#define GET_78(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, ...) _78
#define GET_79(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, ...) _79
#define GET_80(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, ...) _80
#define GET_81(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, ...) _81
#define GET_82(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, ...) _82
#define GET_83(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, ...) _83
#define GET_84(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, ...) _84
#define GET_85(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, ...) _85
#define GET_86(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, ...) _86
#define GET_87(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, ...) _87
#define GET_88(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, ...) _88
#define GET_89(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, ...) _89
#define GET_90(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, ...) _90
#define GET_91(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, ...) _91
#define GET_92(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, ...) _92
#define GET_93(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, ...) _93
#define GET_94(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, ...) _94
#define GET_95(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, ...) _95
#define GET_96(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, ...) _96
#define GET_97(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, ...) _97
#define GET_98(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98, ...) _98

#define GET(n, ...) GET_##n(__VA_ARGS__)
#define _TO_STR(x) TO_STR(x)
#define _FOR_EACH_ASSERT_MEM_MULTI_0(result_assert, func1, func2, result_cmp, memassert, narg_pointer)
#define _FOR_EACH_ASSERT_MEM_MULTI_3(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y) \
	printf("\n--------------------------------------------");\
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)),\
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y)));
#define _FOR_EACH_ASSERT_MEM_MULTI_6(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_3(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_9(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_6(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_12(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_9(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_15(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_12(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_18(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_15(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_21(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_18(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_24(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_21(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_27(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_24(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_30(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_27(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_33(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_30(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_36(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_33(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_39(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_36(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_42(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_39(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_45(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_42(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_48(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_45(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_51(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_48(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_54(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_51(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_57(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_54(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_60(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_57(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_63(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_60(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_66(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_63(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_69(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_66(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_72(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_69(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_75(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_72(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_78(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_75(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_81(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_78(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_84(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_81(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_87(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_84(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_90(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_87(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define _FOR_EACH_ASSERT_MEM_MULTI_93(result_assert, func1, func2, result_cmp, memassert, narg_pointer, memsize, x, y, ...) \
	printf("\n--------------------------------------------"); \
	result_assert(func1 x, func2 y, result_cmp); \
	memassert(GET(narg_pointer, __ARGS x), GET(narg_pointer, __ARGS y), memsize, \
	 TO_STR((func1)) _TO_STR(GET(narg_pointer, __ARGS x)), \
	 TO_STR((func2)) _TO_STR(GET(narg_pointer, __ARGS y))); \
	 _FOR_EACH_ASSERT_MEM_MULTI_90(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)	

#define FE__(fe_name, n, wrap, func, ...) FE_(fe_name, n, wrap, func, __VA_ARGS__)
#define FE_(fe_name, n, wrap, func, ...) fe_name##n(wrap, func, __VA_ARGS__)
#define FOR_EACH(wrap, func, ...) FE__(_FOR_EACH_, COUNT_ARGS(__VA_ARGS__), wrap, func, __VA_ARGS__)
#define FOR_EACH_MULTI(wrap, func, ...) FE__(_FOR_EACH_MULTI_, COUNT_ARGS(__VA_ARGS__), wrap, func, __VA_ARGS__)

#define FEA_(fe_name, n, result_assert, func1, func2, result_cmp, ...) fe_name##n(result_assert, func1, func2, result_cmp, __VA_ARGS__)
#define FEA__(fe_name, n, result_assert, func1, func2, result_cmp, ...) FEA_(fe_name, n, result_assert, func1, func2, result_cmp, __VA_ARGS__)
#define FOR_EACH_ASSERT(result_assert, func1, func2, result_cmp, ...) FEA__(_FOR_EACH_ASSERT_, COUNT_ARGS(__VA_ARGS__), result_assert, func1, func2, result_cmp, __VA_ARGS__)
#define FOR_EACH_ASSERT_MULTI(result_assert, func1, func2, result_cmp, ...) FEA__(_FOR_EACH_ASSERT_MULTI_, COUNT_ARGS(__VA_ARGS__), result_assert, func1, func2, result_cmp, __VA_ARGS__)

#define FEAM(fe_name, n, result_assert, func1, func2, result_cmp, memassert, narg_pointer, ...) fe_name##n(result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define FEAM_(fe_name, n, result_assert, func1, func2, result_cmp, memassert, narg_pointer, ...) FEAM(fe_name, n, result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
#define FOR_EACH_ASSERT_MEM_MULTI(result_assert, func1, func2, result_cmp, memassert, narg_pointer, ...) FEAM_(_FOR_EACH_ASSERT_MEM_MULTI_, COUNT_ARGS(__VA_ARGS__), result_assert, func1, func2, result_cmp, memassert, narg_pointer, __VA_ARGS__)
