# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
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

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
    name = "example3_3",
    srcs = ["example3_3.cc"],
    hdrs = ["example3_3.h"],
    deps = ["datatype"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
    name = "simqu3_1",
    srcs = ["simqu3_1.cc"],
    hdrs = ["simqu3_1.h"],
    deps = ["datatype"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
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

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "maintest",
    srcs = ["maintest.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["//:gtest"],
)