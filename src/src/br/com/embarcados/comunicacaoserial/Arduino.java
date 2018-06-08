package br.com.embarcados.comunicacaoserial;

import javax.swing.JButton;

public class Arduino {
  private ControlePorta arduino;
  
  public Arduino(){
      arduino = new ControlePorta("COM6",9600);
  }    

  public void comunicacaoArduino(JButton button) {  
      
    if("Ligar".equals(button.getActionCommand())){
      arduino.enviaDados('g');
    }
    else if("Peso".equals(button.getActionCommand())){
      arduino.enviaDados('h');
      arduino.recebeDados();
    }
    else{
      arduino.close();
      System.out.println(button.getText());
    }
  }
}