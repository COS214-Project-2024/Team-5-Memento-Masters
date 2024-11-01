#include "CitizenReport.h"

CitizenReport::CitizenReport()
{

}

std::string CitizenReport::generateReport(){
    std::string str="Citizens Mood: "+ (moodSum/total)*100;
    str+="/100\nCitizen Health: "+(healthSum/total)*100;
    str+="/100";
    return str;
}
void CitizenReport::visit(Citizen *citizen)
{
    total++;
    if (citizen->getMood() == "Excellent")
    {
        moodSum += 100;
    }
    else if (citizen->getMood() == "Average")
    {
        moodSum += 50;
    }
    healthSum += citizen->calculateHealth();
}
CitizenReport::~CitizenReport()
{

}