#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

void test(void **state) {
}

int main(void) {
  const struct CMUnitTest tests[] = {
    cmocka_unit_test(test),
  };

  return cmocka_run_group_tests(tests, NULL, NULL);
}
