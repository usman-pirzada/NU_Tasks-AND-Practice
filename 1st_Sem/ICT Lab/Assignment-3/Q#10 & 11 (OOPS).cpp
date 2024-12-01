#include <iostream>
#include <string>
using namespace std;

class Human{                                      // Human class
	private:
    	string name;
    	string cnic;

	public:
    	string getName(){ 						// Getter for name
        	return name;
    	}

    	void setName(string Name){ 				// Setter for name
        	name = Name;
    	}

    	string getCnic(){						 // Getter for CNIC
        	return cnic;
    	}

    	void setCnic(string Cnic){ 				// Setter for CNIC
        	cnic = Cnic;
    	}
};

class Employee : public Human{ 					//inheritence
	private:
    	string employeeID;
    	string designation;

	public:
    	Employee(string empId, string empDesig){ 				// Constructor
        	employeeID = empId;
        	designation = empDesig;
    	}

    	string getEmpID(){ 						// Getter for employee ID
        	return employeeID;
    	}

    	void setEmpID(string empID){			 // Setter for employee ID
        	employeeID = empID;
    	}

    	string getDesig(){						 // Getter for designation
        	return designation;
    	}

    	void setDesig(string empDesig){			 // Setter for designation
        	designation = empDesig;
    	}

    	void display(){ 										// Display all details
        	cout << "\n--- Employee Details ---" << endl;
        	cout << "Name: " << getName() << endl;
        	cout << "CNIC: " << getCnic() << endl;
        	cout << "Employee ID: " << employeeID << endl;
        	cout << "Designation: " << designation << endl;
    	}
};

int main(){
    string name, cnic, empID, designation;

    cout << "Enter Employee ID: ";
    cin >> empID;
    getchar();  // To absorb '\n'
    cout << "Enter Employee Designation: ";
    getline(cin, designation);

    Employee emp(empID, designation);

    cout << "Enter Employee Name: ";
    getline(cin, name);
    emp.setName(name);

    cout << "Enter Employee CNIC: ";
    getline(cin, cnic);
    emp.setCnic(cnic);

    emp.display();

    return 0;
}