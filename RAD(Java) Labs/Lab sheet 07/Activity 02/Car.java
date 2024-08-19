public class Car {
    String make;
    String model;
    int year;

    public Car(String make, String model, int year){
        this.make = make;
        this.model = model;
        this.year = year;
    }

    public void displayDetails(){
        System.out.println("Car make by " + make);
        System.out.println("Car model is " + model);
        System.out.println("Manufacture year of the car is " + year);
    }

    public static void main(String[] args) {
        Car car1 = new Car("Toyota", "Corolla 141", 2010);
        Car car2 = new Car("Honda", "Civic EK3", 1998);
        Car car3 = new Car("BMW", "520d", 2017);

        car1.displayDetails();
        car2.displayDetails();
        car3.displayDetails();
    }
}
