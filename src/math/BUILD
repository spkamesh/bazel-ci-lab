load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

# Header-only library — no srcs field needed
cc_library(
    name = "calculator",
    hdrs = ["calculator.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "calculator_test",
    size = "small",
    srcs = ["calculator_test.cc"],
    deps = [
        ":calculator",
        "@googletest//:gtest_main",
    ],
)
