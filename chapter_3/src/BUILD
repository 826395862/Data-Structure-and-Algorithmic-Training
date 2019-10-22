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

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_test(
    name = "example3_3_test",
    srcs = ["example3_3testfun.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["example3_3","datatype","//:gtest","//:gtest_main"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "maintest",
    srcs = ["maintest.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["//:gtest"],
)