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

#Test
cc_test(
    name = "example6_1test",
    srcs = ["example6_1test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example6_1","//:gtest","//:gtest_main"],
)
