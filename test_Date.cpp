//#include <gtest/gtest.h>
//#include "DateHeader.h"
//
//TEST(Addition, AddintDate) {
//  Date p1("5.9:1917");
//  int i = 15;
//  Date result("20.9:1917");
//  const Date p_ = p1 + i;
//  EXPECT_EQ(p_, result);
//}
//TEST(Subtraction, SubintDate) {
//  Date p1("5.9:1917");
//  int i = 15;
//  Date result("20.9:1917");
//  const Date p_ = p1 - i;
//  EXPECT_EQ(p_, result);
//}
//TEST(Comparison, Equaly) {
//  Date p1("5.9:1917");
//  Date p2("5.9:1917");
//  bool i;
//  if (p1 ==p2) {
//    i = 1;
//  }
//  EXPECT_EQ(i, 1);
//}
//TEST(Comparison, More) {
//  Date p1("6.9:1917");
//  Date p2("5.9:1917");
//  bool i;
//  if (p1 > p2) {
//    i = 1;
//  }
//  EXPECT_EQ(i, 1);
//}
//TEST(Comparison, Less) {
//  Date p1("4.9:1917");
//  Date p2("6.9:1917");
//  bool i;
//  if (p1 < p2) {
//    i = 1;
//  }
//  EXPECT_EQ(i, 1);
//}
//TEST(Assignment, TwoDatesAssign) {
//  Date p1("4.9:1984");
//  Date p2("4.9:2000");
//  Date result("4.9:2000");
//  p1 = p2;
//  EXPECT_EQ(p1, result);
//}
//TEST(Date, Can_Use_Default_Constructor) {
//  Date p1;
//  int i = 0;
//  if ((p1.getDay() == 0) && (p1.getMonth() == 0) && (p1.getYear() == 0)) {
//    int i = 1;
//  }
//  EXPECT_EQ(i, 1);
//}
//TEST(Date, Can_Use_Initializator_Constructor) {
//  int i = 0;
//  Date p1("4.9:2000");
//  if (((int)(p1.getDay()) == 4) && (p1.getMonth() == 9) && (p1.getYear() == 2000)) {
//    int i = 1;
//  }
//  EXPECT_EQ(i, 1);
//}
//TEST(Date, Can_Use_Converter_Constructor) {
//  Date p1("2.4:2077"); 
//  int k;
//  if ((p1).stringdatemethod(p1) == "2.4:2077") {
//    k = 1;
//  }
//  EXPECT_EQ(k, 1);
//}