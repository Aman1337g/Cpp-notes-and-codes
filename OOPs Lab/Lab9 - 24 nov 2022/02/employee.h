namespace emp
{
    class employee
    {
    protected:
        int emp_id;
        double emp_salary;

    public:
        employee()
        {
            emp_id = 001;
            emp_salary = 32325.2;
        };
        void show()
        {
            using namespace std;
            cout << "Employee ID : " << emp_id << "\n";
            cout << "Employee Salary : " << emp_salary << "\n";
        }
    } E;

} // namespace emp
