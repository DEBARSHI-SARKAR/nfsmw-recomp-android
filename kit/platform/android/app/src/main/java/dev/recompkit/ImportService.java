package dev.recompkit;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Intent;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.os.IBinder;

/**
 * Keeps the process alive while the launcher copies the game, with a progress
 * notification. The copy itself runs in the app's native code; this service
 * only tells Android the work is wanted.
 */
public class ImportService extends Service {
    static final String CHANNEL = "import";
    static final int ID = 0x5220;

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        long done = intent == null ? 0 : intent.getLongExtra("done", 0);
        long total = intent == null ? 0 : intent.getLongExtra("total", 0);
        String current = intent == null ? null : intent.getStringExtra("current");
        NotificationManager nm = getSystemService(NotificationManager.class);
        if (Build.VERSION.SDK_INT >= 26 && nm.getNotificationChannel(CHANNEL) == null)
            nm.createNotificationChannel(
                    new NotificationChannel(CHANNEL, "Importing the game", NotificationManager.IMPORTANCE_LOW));
        Notification.Builder b = Build.VERSION.SDK_INT >= 26 ? new Notification.Builder(this, CHANNEL)
                                                             : new Notification.Builder(this);
        int percent = total > 0 ? (int) (done * 100 / total) : 0;
        b.setSmallIcon(android.R.drawable.stat_sys_download)
                .setContentTitle("Importing the game")
                .setContentText(current == null || current.isEmpty() ? percent + "%" : percent + "% - " + current)
                .setProgress(100, percent, total == 0)
                .setOngoing(true)
                .setOnlyAlertOnce(true);
        Notification n = b.build();
        if (Build.VERSION.SDK_INT >= 29)
            startForeground(ID, n, ServiceInfo.FOREGROUND_SERVICE_TYPE_DATA_SYNC);
        else
            startForeground(ID, n);
        return START_NOT_STICKY;
    }

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }
}
