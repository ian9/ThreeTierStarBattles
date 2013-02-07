#ifndef CFPS_H_INCLUDED
#define CFPS_H_INCLUDED

#include <SDL/SDL.h>

#define FRAME_RATE 32

class CFPS {
    public:
        static CFPS FPSControl;

    private:
        int     OldTime;
        int     LastTime;

        float     SpeedFactor; //%speed the machine needs to run based on desired frame rate

        int    NumFrames;
        int     Frames;

    public:
        CFPS();

        void    OnLoop();

    public:
        int     GetFPS();

        float   GetSpeedFactor();
};

#endif // CFPS_H_INCLUDED
