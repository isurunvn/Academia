public class Zookeeper extends Animal{
    private  int employeeID;

    public Zookeeper(String name, String species, int employeeID) {
        super(name, species);
        this.employeeID = employeeID;
    }

    public int getEmployeeID(){
        return employeeID;
    }

    public void setEmployeeID(int employeeID){
        this.employeeID = employeeID;
    }

    public static void main(String[] args) {
        Zookeeper obj = new Zookeeper("Kamal", "Fish", 276);
        obj.setName("Jagath");
        obj.setSpecies("Birds");
        obj.setEmployeeID(642);

        System.out.println("Zookeper name "+ obj.getName());
        System.out.println("Zookeper species " + obj.getSpecies());
        System.out.println("Zookeper employee ID " + obj.getEmployeeID());
    }
}
