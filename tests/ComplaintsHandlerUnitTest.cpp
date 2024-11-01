#include "gtest/gtest.h"
#include "../Complaints/ComplaintHandler.h"

class ComplaintHandlerUnitTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        complaintHandler = new ComplaintHandler();
    }

    virtual void TearDown() {
        delete complaintHandler;
    }

    ComplaintHandler* complaintHandler;
};

TEST_F(ComplaintHandlerUnitTest, HandleValidComplaint) {
    std::string complaint = "Pothole on Main Street";
    // Since handleComplaint is void, we test that it executes without throwing
    EXPECT_NO_THROW(complaintHandler->handleComplaint(complaint));

    // TODO
    
    // If ComplaintHandler has any way to verify the complaint was processed,
    // add those checks here. For example:
    // EXPECT_TRUE(complaintHandler->hasActiveComplaints());
    // EXPECT_EQ(complaintHandler->getLastComplaint(), complaint);


}

TEST_F(ComplaintHandlerUnitTest, HandleEmptyComplaint) {
    std::string complaint = "";
    // Test handling empty complaint
    EXPECT_NO_THROW(complaintHandler->handleComplaint(complaint));

    // TODO
    
    // If ComplaintHandler has validation or state checking methods, use them here
    // For example:
    // EXPECT_FALSE(complaintHandler->hasActiveComplaints());
    // EXPECT_TRUE(complaintHandler->getLastComplaint().empty());
}

TEST_F(ComplaintHandlerUnitTest, HandleNullComplaint) {
    EXPECT_NO_THROW(complaintHandler->handleComplaint(""));
}