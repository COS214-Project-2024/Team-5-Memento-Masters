#ifndef CITIZEN_H
#define CITIZEN_H

#include <memory>
#include <string>
#include <vector>
#include "CitizenMood/CitizenMood.h"
#include "Strategy/CrimePunishmentStrategy.h"
#include "Strategy/CommunityServiceStrategy.h"
#include "Strategy/PrisonStrategy.h"
#include "Strategy/DeathSentenceStrategy.h"

using namespace std;

class CitizenMood;

/**
 * @class Citizen
 * @brief Class representing a citizen in the city
 * 
 * This class is a concrete class that represents a citizen in the city.
 */
class Citizen {
private:
    CitizenMood* mood; ///< The mood of the citizen
    string name; ///< The name of the citizen
    int age; ///< The age of the citizen
    string jobTitle; ///< The job title of the citizen
    vector<string> crimes; ///< The crimes committed by the citizen
    CrimePunishmentStrategy* punishmentStrategy; //new
    // unique_ptr<CrimePunishmentStrategy> strategy;
    //bool hasCriminalRecord;  //OLD attribute (revert back only if issues with update)

public:
    // Constructor
    /**
     * @brief Construct a new Citizen object
     * 
     * @param name The name of the citizen
     * @param age The age of the citizen
     * @param jobTitle The job title of the citizen
     */
    Citizen(const string &name, int age, const string &jobTitle);

    // Mood-related methods
    /**
     * @brief Set the mood of the citizen
     * 
     * @param mood The mood of the citizen
     */
    void setMood(CitizenMood* mood);

    /**
     * @brief Get the mood of the citizen
     * 
     * @return CitizenMood* The mood of the citizen
     */
    CitizenMood* getMood() const;

    // Basic attributes methods
    /**
     * @brief Get the name of the citizen
     * @return const string& The name of the citizen
     */
    const string& getName() const;
    /**
     * @brief Set the name of the citizen
     * @param name The name of the citizen
     */
    void setName(const string &name);
    /**
     * @brief Get the age of the citizen
     * @return int The age of the citizen
     */
    int getAge() const;
    /**
     * @brief Set the age of the citizen
     * @param age The age of the citizen
     */
    void setAge(int age);
    /**
     * @brief Get the job title of the citizen
     * @return const string& The job title of the citizen
     */
    const string& getJobTitle() const;
    /**
     * @brief Set the job title of the citizen
     * @param jobTitle The job title of the citizen
     */
    void setJobTitle(const string &jobTitle);
    /**
     * @brief Get the crimes committed by the citizen
     * @return const vector<string>& The crimes committed by the citizen
     */
    const vector<string>& getCrimes() const;
    /**
     * @brief Set the crimes committed by the citizen
     * @param crimes The crimes committed by the citizen
     */
    void setCrimes(const vector<string> &crimes);

    // Health calculation
    /**
     * @brief Calculate the health of the citizen
     * @return int The health of the citizen
     */
    int calculateHealth();

    // Complaint handling (Chain of Responsibility)
    /**
     * @brief Make a complaint
     * @param complaint The complaint
     */
    void makeComplaint(const string& complaint);

    // Crime and punishment (Strategy Pattern)
    /**
     * @brief Check if the citizen has a criminal record
     * @return bool True if the citizen has a criminal record, false otherwise
     */
    bool hasCriminalRecord() const;
    /**
     * @brief Set the punishment strategy
     * @param strategy The punishment strategy
     */
    void setPunishmentStrategy(CrimePunishmentStrategy* strategy);
    /**
     * @brief Punish the citizen
     * @param crime The crime
     * @return string The punishment
     */
    string punish(const string& crime);
    /**
     * @brief Add a crime to the citizen's criminal record
     * @param crime The crime
     */
    void addCrime(const string& crime);

    //OLD CRIMEPUNISHMENTSTRATEGY METHODS (revert back if problem)
    // void commitCrime(const string& crime);
    // void setPunishmentStrategy(unique_ptr<CrimePunishmentStrategy> newStrategy);
    // string receivePunishment() const;
    // string receivePunishmentForCrime(const string& crime) const;


};

#endif // CITIZEN_H
