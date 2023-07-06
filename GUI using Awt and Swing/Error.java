public void actionPerformed(ActionEvent aobj) {
   if (aobj.getSource() == b0 || aobj.getSource() == b1 || aobj.getSource() == b2 ||
       aobj.getSource() == b3 || aobj.getSource() == b4 || aobj.getSource() == b5 ||
       aobj.getSource() == b6 || aobj.getSource() == b7 || aobj.getSource() == b8 ||
       aobj.getSource() == b9) {
       String buttonText = ((Button) aobj.getSource()).getLabel();
       t1.setText(t1.getText() + buttonText);
   } else if (aobj.getSource() == bsubmit) {
       // Perform calculation and display result
       String expression = t1.getText();
       ScriptEngineManager manager = new ScriptEngineManager();
       ScriptEngine engine = manager.getEngineByName("js");
       try {
           Object result = engine.eval(expression);
           t1.setText(result.toString());
       } catch (ScriptException e) {
           t1.setText("Invalid expression");
       }
   } else if (aobj.getSource() == bclear) {
       // Clear the display
       t1.setText("");
   } else if (aobj.getSource() == ba || aobj.getSource() == bs ||
              aobj.getSource() == bm || aobj.getSource() == bd) {
       // Store the operator and clear the display
       s1 = t1.getText();
       t1.setText("");
       if (aobj.getSource() == ba)
           s4 = "+";
       else if (aobj.getSource() == bs)
           s4 = "-";
       else if (aobj.getSource() == bm)
           s4 = "*";
       else if (aobj.getSource() == bd)
           s4 = "/";
   }
}
