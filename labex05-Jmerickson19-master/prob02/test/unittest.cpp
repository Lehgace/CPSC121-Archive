#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../bubble.hpp"
#include "gtest_ext.h"

using testing::HasSubstr;

TEST(Bubble, PublicMethodPresent) {
  Bubble b;
  b.radius();
  b.set_radius(5);
  b.volume();
}

TEST(Bubble, MutatorsAndAccessors) {
  Bubble your_bubble;
  your_bubble.set_radius(10);
  ASSERT_EQ(your_bubble.radius(), 10) << "      The class' mutator should set the radius to 10 and your accessor should return the same value.";
}

TEST(Bubble, Volume1) {
  Bubble your_bubble;
  your_bubble.set_radius(18.6);
  ASSERT_DOUBLE_EQ(your_bubble.volume(), 26953.466832000002) << "      The function should return the volume of the Bubble given a radius of 18.6, that is 26954.26.";
}

TEST(Bubble, Volume2) {
  Bubble your_bubble;
  your_bubble.set_radius(5);
  ASSERT_DOUBLE_EQ(your_bubble.volume(), 523.58333333333326) << "      The function should return the volume of the Bubble given a radius of 5, that is 523.6.";
}

TEST(CombineBubbles, SameRadius) {
  Bubble first_bubble;
  first_bubble.set_radius(6.2);
  Bubble second_bubble;
  second_bubble.set_radius(6.2);
  ASSERT_EQ(first_bubble.operator+(second_bubble).radius(), 12.4)
    << "      The function should set the radius of the combined Bubble to 12.4, that is the combined radius of two other Bubble objects each having the radius of 6.2.";
  ASSERT_DOUBLE_EQ(first_bubble.operator+(second_bubble).volume(), 7986.2123946666661)
    << "      The resulting Bubble object's volume should be 7986.2123946666661 given the radiues of 12.4.";
}

TEST(CombineBubbles, DifferentRadius) {
  Bubble first_bubble;
  first_bubble.set_radius(4);
  Bubble second_bubble;
  second_bubble.set_radius(5);
  ASSERT_EQ(first_bubble.operator+(second_bubble).radius(), 9)
    << "      The function should set the radius of the combined Bubble to 9, that is the combined radius of two other Bubble objects each having the radius of 4 and 5, respectively.";
  ASSERT_DOUBLE_EQ(first_bubble.operator+(second_bubble).volume(), 3053.5379999999996) 
    << "      The resulting Bubble object's volume should be 3053.5379999999996 given the radiues of 9.";
}

TEST(CompareBubbles, SameRadius) {
  Bubble first_bubble;
  first_bubble.set_radius(6.2);
  Bubble second_bubble;
  second_bubble.set_radius(6.2);
  ASSERT_EQ(first_bubble.operator==(second_bubble), 1)
    << "      The function should return true (1) indicating the two bubbles have the same radius, both defined as 6.2.";
}

TEST(CompareBubbles, DifferentRadius) {
  Bubble first_bubble;
  first_bubble.set_radius(4);
  Bubble second_bubble;
  second_bubble.set_radius(5);
  ASSERT_EQ(first_bubble.operator==(second_bubble), 0)
    << "      The function should return false (0) indicating the two bubbles have different radius values, defined as 4 and 5 for bubble1 and bubble2, respectively.";
}

TEST(UserInput, AskRadii) {
  std::string user_input = "4.5\n2.3\n";
  ASSERT_EXECEXIT("main", user_input, 3)
    << "      Your program should ask for the radius of two Bubbles.";
}

TEST(Driver, ShowCombinedBubbleVolume) {
  std::string user_input = "4.5\n2.3\n";
  ASSERT_EXECTHAT("main", user_input, HasSubstr("1317.05"))
    << "      Your program should show that the volume of the combined bubble is 1317.05";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);    
  ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
  return RUN_ALL_TESTS();
}
