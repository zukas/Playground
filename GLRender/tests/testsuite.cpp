#include "testsuite.h"
#include <cstdio>
#include <time.h>

struct testcase {
  const char *name;
  run_test func;
  testcase *parent;
};

static testcase *g_parent{nullptr};

template <int> void include_testcase(const char *name, run_test func) {
  static testcase t{name, func, g_parent};
  g_parent = &t;
}

void exec() {
  testcase *current = g_parent;
  while (current != nullptr) {
    printf("running testcase %s\n", current->name);
    timespec start;
    clock_gettime(CLOCK_MONOTONIC_RAW, &start);
    current->func();
    timespec end;
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
    long duration = (end.tv_sec - start.tv_sec) * 1000000 +
                    (end.tv_nsec - start.tv_nsec) / 1000;
    printf("completed testcase in %ld(mis)", duration);
  }
}
