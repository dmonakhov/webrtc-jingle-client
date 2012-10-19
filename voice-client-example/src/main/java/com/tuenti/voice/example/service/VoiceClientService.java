package com.tuenti.voice.example.service;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import com.tuenti.voice.core.VoiceClient;
import com.tuenti.voice.example.util.ConnectionMonitor;

public class VoiceClientService
    extends Service
{
// ------------------------------ FIELDS ------------------------------

    private CallManager mCallManager;

    private VoiceClient mClient;

    private ConnectionManager mConnectionManager;

    private RosterManager mRosterManager;

// -------------------------- OTHER METHODS --------------------------

    @Override
    public IBinder onBind( Intent intent )
    {
        if ( IConnectionService.class.getName().equals( intent.getAction() ) )
        {
            return mConnectionManager.onBind();
        }
        if ( IRosterService.class.getName().equals( intent.getAction() ) )
        {
            return mRosterManager.onBind();
        }
        if ( ICallService.class.getName().equals( intent.getAction() ) )
        {
            return mCallManager.onBind();
        }
        return null;
    }

    @Override
    public void onCreate()
    {
        super.onCreate();

        // VoiceClient should only be created here
        // probably init here too.
        mClient = new VoiceClient();

        mConnectionManager = new ConnectionManager( mClient );
        mRosterManager = new RosterManager( mClient );
        mCallManager = new CallManager( mClient, getBaseContext() );

        ConnectionMonitor.getInstance( getApplicationContext() );
        ConnectionMonitor.registerCallback( mConnectionManager );
    }

    @Override
    public void onDestroy()
    {
        super.onDestroy();

        mClient.release();
        mClient = null;
        ConnectionMonitor.getInstance( getApplicationContext() ).destroy();
    }

    @Override
    public int onStartCommand( Intent intent, int flags, int startId )
    {
        return START_STICKY;
    }
}
