// RUN: %clang_cc1 %s -E -CC -pedantic -verify

#if 1 /*bar */

#endif /*foo*/

#if /*foo*/ defined /*foo*/ FOO /*foo*/
#if /*foo*/ defined /*foo*/ ( /*foo*/ FOO /*foo*/ ) /*foo*/
#endif
#endif

