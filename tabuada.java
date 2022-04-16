//Código para tabuada com a estrutura de reptição "for".
import javax.swing.JOptionPane;

public class tabuada {
    public static void main(String[] args){

        int resultado = 0; //Definição da variável resultado, que já vai receber a multiplicação.
        //Definição de uma variável com input para seu valor inteiro,que vai ser calculado. 
        int n = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o valor para a tabuada:"));
        for(int i = 0; i<=10; i++){
            resultado = n * i;
            JOptionPane.showMessageDialog(null, n+ " x " +i+ " = " +resultado);
        } //Amostra no painel do JOptionPane.
        
    }
    
}
