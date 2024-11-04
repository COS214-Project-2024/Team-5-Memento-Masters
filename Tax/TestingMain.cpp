#include "TransportDepartment.h"
#include "UtilitiesDepartment.h"
#include "TaxDepartment.h"
#include "Mayor.h"

int main() {
    TransportDepartment transportDept;
    UtilitiesDepartment utilitiesDept;
    TaxDepartment taxDept;
    Mayor mayor;

    transportDept.setNextHandler(&utilitiesDept);
    utilitiesDept.setNextHandler(&taxDept);
    taxDept.setNextHandler(&mayor);

    std::cout << "Complaint: transport\n";
    transportDept.handleComplaint("transport");

    std::cout << "\nComplaint: utilities\n";
    transportDept.handleComplaint("utilities");

    std::cout << "\nComplaint: taxes\n";
    transportDept.handleComplaint("taxes");

    std::cout << "\nComplaint: unknown issue\n";
    transportDept.handleComplaint("unknown issue");

    return 0;
}
