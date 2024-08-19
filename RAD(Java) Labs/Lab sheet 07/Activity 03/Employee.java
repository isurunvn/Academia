public class Employee {
    int employeeId;
    String empName;
    String designation;
    int age;
    String contactNumber;
    double salary;


    public Employee(int employeeId,
                    String empName,
                    String designation,
                    int age,
                    String contactNumber,
                    double salary){
        this.employeeId = employeeId;
        this.empName = empName;
        this.designation = designation;
        this.age = age;
        this.contactNumber = contactNumber;
        this.salary = salary;
    }

    public Employee(int employeeId,
                    String empName,
                    String designation,
                    int age,
                    String contactNumber){
        this.employeeId = employeeId;
        this.empName = empName;
        this.designation = designation;
        this.age = age;
        this.contactNumber = contactNumber;
        this.salary = 40000;
    }

    public void displayDetails(){
        System.out.println("emploayeeId: " + employeeId);
        System.out.println("EmpName: " + empName);
        System.out.println("designation: " + designation);
        System.out.println("age: " + age);
        System.out.println("contactNumber: " + contactNumber);
        System.out.println("salary: " + salary);
        System.out.println("--------------------------------------------------------------------------------");
    }

    public static void main(String[] args) {
        Employee employeeA = new Employee(1101,
                "S.D. Pabasara",
                "HR Specialist",
                30,
                "0774934323",
                60000
                );

        Employee employeeB = new Employee(1200,
                "A.L. Hashini",
                "HR Assistant",
                28,
                "0715687643",
                40000);

        employeeA.displayDetails();
        employeeB.displayDetails();
    }
}
