// Calculadora feita em java.
import javax.swing.JOptionPane;
public class calculadora {
    public static void main(String[] args){

        int resultado = 0;

        int n1 = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o primeiro valor"));
        //Método ".charAT(0)" para o JOptionPane receber variáveis do tipo "char".
        char operador = JOptionPane.showInputDialog("Digite o operador:").charAt(0);
        int n2 = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o segundo valor:"));

        if(operador == '+'){
            resultado = n1 + n2;
        }
        if(operador == '-'){
            resultado = n1 - n2;
        }
        if(operador == '*'){
            resultado = n1 * n2;
        }
        if(operador == '/'){
            resultado = n1 / n2;
        }
        JOptionPane.showMessageDialog(null, resultado);
    }
    
}
