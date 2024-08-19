public class Animal {
    private static String name;
    private static String species;

    public Animal(String name, String species){
        this.name =name;
        this.species = species;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name =name;
    }

    public String getSpecies(){
        return species;
    }

    public void setSpecies(String species) {
        this.species = species;
    }
}
