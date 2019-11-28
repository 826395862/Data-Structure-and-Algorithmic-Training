#Library
cc_library(
    name = "datatype",
    srcs = ["datatype.cc"],
    hdrs = ["datatype.h"],
)

cc_library(
    name = "example6_1",
    srcs = ["example6_1.cc"],
    hdrs = ["example6_1.h"],
    deps = ["datatype"],
)

cc_library(
    name = "example6_2",
    srcs = ["example6_2.cc"],
    hdrs = ["example6_2.h"],
    deps = ["datatype"],
)

cc_library(
    name = "example6_3",
    srcs = ["example6_3.cc"],
    hdrs = ["example6_3.h"],
    deps = ["datatype"],
)

cc_library(
    name = "example6_4",
    srcs = ["example6_4.cc"],
    hdrs = ["example6_4.h"],
    deps = ["datatype"],
)

cc_library(
    name = "example6_5",
    srcs = ["example6_5.cc"],
    hdrs = ["example6_5.h"],
    deps = ["datatype"],
)

cc_library(
    name = "real6_1",
    srcs = ["real6_1.cc"],
    hdrs = ["real6_1.h"],
    deps = ["datatype"],
)

cc_library(
    name = "basic6_1",
    srcs = ["basic6_1.cc"],
    hdrs = ["basic6_1.h"],
    deps = ["datatype"],
)

cc_library(
    name = "basic6_2",
    srcs = ["basic6_2.cc"],
    hdrs = ["basic6_2.h"],
    deps = ["datatype"],
)

#Test
cc_test(
    name = "example6_1test",
    srcs = ["example6_1test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_1","//:gtest","//:gtest_main"],
)

cc_test(
    name = "example6_2test",
    srcs = ["example6_2test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_2","//:gtest","//:gtest_main"],
)

cc_test(
    name = "example6_3test",
    srcs = ["example6_3test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_3","//:gtest","//:gtest_main"],
)

cc_test(
    name = "example6_4test",
    srcs = ["example6_4test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_4","//:gtest","//:gtest_main"],
)

cc_test(
    name = "example6_5test",
    srcs = ["example6_5test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_5","//:gtest","//:gtest_main"],
)

cc_test(
    name = "real6_1test",
    srcs = ["real6_1test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["real6_1","//:gtest","//:gtest_main"],
)

cc_test(
    name = "basic6_1test",
    srcs = ["basic6_1test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["basic6_1","//:gtest","//:gtest_main"],
)

cc_test(
    name = "basic6_2test",
    srcs = ["basic6_2test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["basic6_2","//:gtest","//:gtest_main"],
)