public class Main{
  public static void main(String[] args){

    System.out.println("占いの館にようこそ");
    System.out.println("あなたの名前を入力してください");
    String name=new java.util.Scanner(System.in).nextLine();
    System.out.println("あなたの年齢を入力してください");
    String ageString=new java.util.Scanner(System.in).nextLine();
    /*int age=(int)ageString;This is a nistake!!*/
    int age=Integer.parseInt(ageString);
    int fortune=new java.util.Random().nextInt(4)
    fortune+=fortune;
    System.out.println("占いの結果がわかりました");
    System.out.println(age+"歳の"name+"さん、あなたの運気番号は"+fortune+"です");
    System.out.println("1:大吉2:中吉3:吉4:凶")
  }
}
