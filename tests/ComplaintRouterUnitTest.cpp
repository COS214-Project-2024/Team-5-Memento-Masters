#include "gtest/gtest.h"
#include "../Complaints/ComplaintRouter.h"
#include "../Complaints/ComplaintHandler.h"

class SimpleComplaintHandler : public ComplaintHandler {
public:
    void handleComplaint(const std::string& complaint) override {
        lastComplaint = complaint;
    }

    std::string getLastComplaint() const {
        return lastComplaint;
    }

private:
    std::string lastComplaint;
};

class ComplaintRouterUnitTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        complaintRouter = new ComplaintRouter();
        simpleHandler = new SimpleComplaintHandler();
    }

    virtual void TearDown() {
        delete complaintRouter;
        delete simpleHandler;
    }

    ComplaintRouter* complaintRouter;
    SimpleComplaintHandler* simpleHandler;
};

TEST_F(ComplaintRouterUnitTest, RegisterAndRouteComplaint) {
    std::string complaintType = "noise";
    std::string complaint = "Loud noise at night";

    // Register the simple handler
    complaintRouter->registerHandler(complaintType, simpleHandler);

    // Route the complaint
    EXPECT_NO_THROW(complaintRouter->handleComplaint(complaintType));

    // Verify the handler processed the complaint
    EXPECT_EQ(simpleHandler->getLastComplaint(), complaintType);
}

TEST_F(ComplaintRouterUnitTest, HandleUnknownComplaint) {
    std::string complaintType = "unknown";
    std::string complaint = "Unknown complaint type";

    // Capture the output
    testing::internal::CaptureStdout();
    EXPECT_NO_THROW(complaintRouter->handleComplaint(complaintType));
    std::string output = testing::internal::GetCapturedStdout();

    // Check that the output contains the expected message
    EXPECT_TRUE(output.find("No handler found for complaint type: unknown") != std::string::npos);
}