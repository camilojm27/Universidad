package MyTimer;

import javax.swing.*;
import java.awt.*;

public class TimerPanel extends JPanel implements Runnable{
    private int width = 150;
    private int height = 24;
    private String timeString="00:00:00";

    public long getTime() {
        return time;
    }

    private long time = 10;
    private Thread timerThread;

    public TimerPanel(long time){
        setTime(time);
    }

    public void paintComponent(Graphics g){
        super.paintComponent(g);
        g.setColor(Color.BLACK);
        g.drawString(timeString, 0, height);
    }
    public Dimension getPreferredSize(){
        Dimension size = new Dimension(width, height);
        return size;
    }

    public void setTime(long time){
        this.time = time;
        long h = time/3600;
        long m = (time - h *3600)/60;
        long s = time - h *3600 - m *60;
        timeString = String.format("%02d:%02d:%02d", h, m, s);
        Font font = new Font(Font.DIALOG, Font.BOLD, 36);
        setFont(font);
        height=font.getSize();
        FontMetrics fm = getFontMetrics(font);
        width=fm.stringWidth(timeString);
        repaint();
    }

    public void start(){
        stop();
        timerThread = new Thread(this);
        timerThread.start();
    }
    public void stop(){
        if (timerThread != null){

            timerThread.interrupt();
            timerThread=null;
        }
    }

    @Override
    public void run() {
        while (time > 0){
            time--;
            setTime(time);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
