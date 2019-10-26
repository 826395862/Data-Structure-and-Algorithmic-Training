#Library
cc_library(
    name = "datatype",
    srcs = ["datatype.cc"],
    hdrs = ["datatype.h"],
)

cc_library(
    name = "creat_random_list",
    srcs = ["creat_random_list.cc"],
    hdrs = ["creat_random_list.h"],
    deps = ["datatype"],
)

cc_library(
    name = "example3_3",
    srcs = ["example3_3.cc"],
    hdrs = ["example3_3.h"],
    deps = ["datatype"],
)

cc_library(
    name = "simqu3_1",
    srcs = ["simqu3_1.cc"],
    hdrs = ["simqu3_1.h"],
    deps = ["datatype"],
)

cc_library(
    name = "simqu3_2",
    srcs = ["simqu3_2.cc"],
    hdrs = ["simqu3_2.h"],
    deps = ["datatype"],
)

cc_library(
    name = "basic3_3",
    srcs = ["basic3_3.cc"],
    hdrs = ["basic3_3.h"],
    deps = ["datatype"],
)
#Test
cc_test(
    name = "example3_3test",
    srcs = ["example3_3test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example3_3","datatype","//:gtest","//:gtest_main"],
)

cc_test(
    name = "simqu3_1test",
    srcs = ["simqu3_1test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["simqu3_1","//:gtest","//:gtest_main"],
)

cc_test(
    name = "simqu3_2test",
    srcs = ["simqu3_2test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["simqu3_2","//:gtest","//:gtest_main"],
)

cc_test(
    name = "basic3_3test",
    srcs = ["basic3_3test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["basic3_3","//:gtest","//:gtest_main"],
)
#main
cc_binary(
    name = "maintest",
    srcs = ["maintest.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["//:gtest"],
)