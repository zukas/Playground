#ifndef TESTSUITE_H
#define TESTSUITE_H

typedef void (*run_test)();

template <int> void include_testcase(const char *name, run_test func);

void exec();

#define TEST(test_function)                                                    \
  include_testcase<__COUNTER__>(##test_function, test_function)

#define EXEC() exec()

#endif // TESTSUITE_H
