public class Rebel extends Person{
    String rebelId;

    public Rebel(String firstName, String lastName, String rebelId){
        super(firstName, lastName);
        this.rebelId = rebelId;
    }

    public String getRebelId(){
        return rebelId;
    }

    public void setRebelId(){
        this.rebelId = rebelId;
    }
}
