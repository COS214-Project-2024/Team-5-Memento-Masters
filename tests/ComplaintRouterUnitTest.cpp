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
        complaintRouter = ComplaintRouter::getInstance();
        simpleHandler = new SimpleComplaintHandler();
    }

    virtual void TearDown() {
        delete simpleHandler;
    }

    ComplaintRouter* complaintRouter;
    SimpleComplaintHandler* simpleHandler;
};

TEST_F(ComplaintRouterUnitTest, RegisterAndRouteComplaint) {
    std::string complaintType = "noise";
    std::string complaint = "Loud noise at night";

    complaintRouter->registerHandler(complaintType, simpleHandler);

    EXPECT_NO_THROW(complaintRouter->handleComplaint(complaintType));

    EXPECT_EQ(simpleHandler->getLastComplaint(), complaintType);
}

TEST_F(ComplaintRouterUnitTest, HandleUnknownComplaint) {
    std::string complaintType = "unknown";
    std::string complaint = "Unknown complaint type";

    testing::internal::CaptureStdout();
    EXPECT_NO_THROW(complaintRouter->handleComplaint(complaintType));
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("No handler found for complaint type: unknown") != std::string::npos);
}