#include <gtest/gtest.h>
#include "../Citizen.h"

// Test committing a petty crime
TEST(CitizenStrategyTest, PettyCrimePunishment) {
    Citizen john("John Doe");
    john.commitCrime("petty");
    EXPECT_EQ(john.receivePunishmentForCrime("petty theft"), "Expected punishment description for petty theft");
}

// Test committing a serious crime
TEST(CitizenStrategyTest, SeriousCrimePunishment) {
    Citizen john("John Doe");
    john.commitCrime("serious");
    EXPECT_EQ(john.receivePunishmentForCrime("burglary"), "Expected punishment description for burglary");
}

// Test committing a crime of murder
TEST(CitizenStrategyTest, MurderPunishment) {
    Citizen alice("Alice");
    alice.commitCrime("murder");
    EXPECT_EQ(alice.receivePunishmentForCrime("murder"), "Expected punishment description for murder");
}

// Test for handling multiple crimes on the same citizen
TEST(CitizenStrategyTest, MultipleCrimes) {
    Citizen bob("Bob");

    // Test first crime: petty
    bob.commitCrime("petty");
    EXPECT_EQ(bob.receivePunishmentForCrime("petty theft"), "Expected punishment description for petty theft");

    // Test second crime: serious
    bob.commitCrime("serious");
    EXPECT_EQ(bob.receivePunishmentForCrime("burglary"), "Expected punishment description for burglary");

    // Test third crime: murder
    bob.commitCrime("murder");
    EXPECT_EQ(bob.receivePunishmentForCrime("murder"), "Expected punishment description for murder");
}
