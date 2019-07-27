package MyTimer;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyTimer extends JFrame {
    public static void main(String[] args) {
        String classname = UIManager.getCrossPlatformLookAndFeelClassName();
        try {
            UIManager.setLookAndFeel(classname);
        }
        catch (Exception e){}
        EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                MyTimer myTimer = new MyTimer();
            }
        });
    }
    private JLabel title;
    private Font font;
    private JPanel centralPanel, buttonPanel;
    private TimerPanel timerPanel;
    private JButton start, stop, hour, minutes, clear;
    private EscuchaBotones escucha;


    public MyTimer(){
        initGUI();

        //Configuracion estandar de ventana

        setTitle("Timmer");
        setResizable(false);
        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }

    private void initGUI() {
        //establecer titulo
        title = new JLabel("MyTimer");
        font = new Font("Times New Roman", Font.BOLD + Font.ITALIC, 22);
        title.setFont(font);
        title.setBackground(Color.BLACK);
        title.setForeground(Color.WHITE);
        title.setOpaque(true);
        title.setVerticalAlignment(SwingConstants.CENTER);
        add(title, BorderLayout.PAGE_START);

        //Agregar centralPanel
        centralPanel = new JPanel();
        timerPanel = new TimerPanel(10);
        centralPanel.add(timerPanel);
        add(centralPanel, BorderLayout.CENTER);


        //Agregar botonas para manejo de hilo
        escucha = new EscuchaBotones();
        buttonPanel = new JPanel();

        //Agregar panel botones manejo de Hilo
        hour = new JButton("Hour");
        hour.addActionListener(escucha);
        buttonPanel.add(hour);
        minutes = new JButton("Min");
        minutes.addActionListener(escucha);
        buttonPanel.add(minutes);
        clear = new JButton("Clear");
        clear.addActionListener(escucha);
        buttonPanel.add(clear);
        start = new JButton("Start");
        start.addActionListener(escucha);
        buttonPanel.add(start);
        stop = new JButton("Stop");
        stop.addActionListener(escucha);
        buttonPanel.add(stop);
        add(buttonPanel, BorderLayout.PAGE_END);

    }

    private class EscuchaBotones implements ActionListener{

        @Override
        public void actionPerformed(ActionEvent actionEvent) {
            if (actionEvent.getSource() == start){
                timerPanel.start();
            }
            if (actionEvent.getSource() == stop){
                timerPanel.stop();
            }
            if (actionEvent.getSource() == hour){
                addHour();
            }
            if (actionEvent.getSource() == minutes){
                addMin();
            }
            if (actionEvent.getSource() == clear){
                clear();
            }

        }
    }

    private void clear() {
        timerPanel.stop();
        timerPanel.setTime(0);
    }

    private void addMin() {
        long time = timerPanel.getTime();
        time +=60;
        timerPanel.setTime(time);
    }

    private void addHour() {
        long time = timerPanel.getTime();
        time+=3600;
        timerPanel.setTime(time);
    }

}
