#include <gtest/gtest.h>
#include "CitizenMood/ExcellentMood.h"
#include "Citizen.h"

class ExcellentMoodStateUnitTest : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete citizen;
    }

    virtual void SetUp() {
        state = new ExcellentMood();
        citizen = new Citizen("Jane Doe", 21, "Detective");
        citizen->setMood(state);
    }

    Citizen* citizen;
    CitizenMood* state;
};

TEST_F(ExcellentMoodStateUnitTest, CitizenMoodExcellentToPoor) {
    EXPECT_EQ(citizen->calculateHealth(), 100);

    state->isPoor(citizen);

    EXPECT_EQ(citizen->calculateHealth(), 10);
}

TEST_F(ExcellentMoodStateUnitTest, CitizenMoodExcellentToAverage) {
    EXPECT_EQ(citizen->calculateHealth(), 100);

    state->isAverage(citizen);

    EXPECT_EQ(citizen->calculateHealth(), 50);
}

TEST_F(ExcellentMoodStateUnitTest, CitizenMoodExcellentToExcellent) {
    EXPECT_EQ(citizen->calculateHealth(), 100);

    state->isExcellent(citizen);

    EXPECT_EQ(citizen->calculateHealth(), 100);
}