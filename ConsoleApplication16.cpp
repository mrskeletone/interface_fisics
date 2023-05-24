// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum PneumoState {

    PneumoState_Init = 0,

    PneumoState_1, PneumoState_2, PneumoState_3,

    PneumoState_4, PneumoState_5, PneumoState_6,

    PneumoState_7, PneumoState_8, PneumoState_9,

    PneumoState_10, PneumoState_11, PneumoState_12,

    PneumoState_13, PneumoState_14, PneumoState_15,

    PneumoState_16, PneumoState_17, PneumoState_18,

    PneumoState_FatalException

};

#define PNEUMO_CYLINDER_SIGNAL_UP 0

#define PNEUMO_CYLINDER_SIGNAL_DOWN 1

struct PneumoCylinder {

    int input_signal[2];

    int output_signal;

};

struct PneumoEngine {

    enum PneumoState state;

    int timeout;

    int delay;

    int timeouts[PneumoState_FatalException];

    int delays[PneumoState_FatalException];

    struct PneumoCylinder cylinders[8];

};
void pneumo_engine_init(struct PneumoEngine* engine) {

    if (0 != engine) {

        engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] = 0;

        engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

       

        engine->state = PneumoState_Init;

        engine->delay = 0;

        engine->timeout = 0;

        engine->timeouts[PneumoState_Init] = TIMEOUT_DELTA(30);

        engine->delays[PneumoState_Init] = DELAY_DELTA(78);

        engine->timeouts[PneumoState_1] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_1] = DELAY_DELTA(70);

        engine->timeouts[PneumoState_2] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_2] = DELAY_DELTA(45);

        engine->timeouts[PneumoState_3] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_3] = DELAY_DELTA(33);

        engine->timeouts[PneumoState_4] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_4] = DELAY_DELTA(70);

        engine->timeouts[PneumoState_5] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_5] = DELAY_DELTA(70);

        engine->timeouts[PneumoState_6] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_6] = DELAY_DELTA(78);

        engine->timeouts[PneumoState_7] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_7] = DELAY_DELTA(45);

        engine->timeouts[PneumoState_8] = TIMEOUT_DELTA(30);

        engine->delays[PneumoState_8] = DELAY_DELTA(60);

        engine->timeouts[PneumoState_9] = TIMEOUT_DELTA(45);

        engine->delays[PneumoState_9] = DELAY_DELTA(60);

        engine->timeouts[PneumoState_10] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_10] = DELAY_DELTA(33);

        engine->timeouts[PneumoState_11] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_11] = DELAY_DELTA(33);

        engine->timeouts[PneumoState_12] = TIMEOUT_DELTA(60);

        engine->delays[PneumoState_12] = DELAY_DELTA(45);

        engine->timeouts[PneumoState_13] = TIMEOUT_DELTA(30);

        engine->delays[PneumoState_13] = DELAY_DELTA(60);

        engine->timeouts[PneumoState_14] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_14] = DELAY_DELTA(45);

        engine->timeouts[PneumoState_15] = TIMEOUT_DELTA(56);

        engine->delays[PneumoState_15] = DELAY_DELTA(70);

        engine->timeouts[PneumoState_16] = TIMEOUT_DELTA(120);

        engine->delays[PneumoState_16] = DELAY_DELTA(78);

        engine->timeouts[PneumoState_17] = TIMEOUT_DELTA(0);

        engine->delays[PneumoState_17] = DELAY_DELTA(0);

        engine->timeouts[PneumoState_18] = TIMEOUT_DELTA(0);

        engine->delays[PneumoState_18] = DELAY_DELTA(0);



    }
}
bool pneumo_engine_tick(struct PneumoEngine* engine) {

    bool ret = true;

    if (0 == engine)

        return false;

    

        switch (engine->state) {

        case PneumoState_Init: {

            engine->state = PneumoState_1;

            engine->delay = 0;

            engine->timeout = 0;

            break;

        }

        case PneumoState_1: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_2;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_5;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_2:{

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] ){


                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_3;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_7;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;
        }

        case PneumoState_3:{

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]) {


                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_4;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_9;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;
        }

        case PneumoState_4: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_5;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_13;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_5: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_6;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_4;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_6: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]  ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_7;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }
        
        case PneumoState_7: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&


                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&


                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&


                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_8;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_9;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_8: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&



                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&


                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_9;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_16;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_9: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (


                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]  ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_10;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_10: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&



                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&




                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_11;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_11: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_12;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_12: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] 






               ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_13;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_13: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&






                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] 

                ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_14;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_14: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&



                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&


                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] 

                ) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_15;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_15: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_16;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_16: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&


                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;

                if (DELAY_GE(engine)) {

                    engine->state = PneumoState_17;

                    engine->delay = 0;

                    engine->timeout = 0;

                }

            }

            else if (TIMEOUT_GE(engine)) {

                engine->state = PneumoState_FatalException;

                engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

                engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

                engine->delay = 0;

                engine->timeout = 0;

            }

            break;

        }

        case PneumoState_17: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (engine->cylinders[PNEUMO_CYLINDER_Y1].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y2].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y3].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y4].input_signal[PNEUMO_CYLINDER_SIGNAL_UP] &&

                engine->cylinders[PNEUMO_CYLINDER_Y5].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y6].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y7].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN] &&

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_UP]) {

                engine->timeout = 0;

                
                    engine->state = PneumoState_18;

                    engine->delay = 0;

                    engine->timeout = 0;

                

            }


            break;

        }

        case PneumoState_18: {

            engine->cylinders[PNEUMO_CYLINDER_Y1].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y2].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y3].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y4].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y5].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y6].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y7].output_signal = 0;

            engine->cylinders[PNEUMO_CYLINDER_Y8].output_signal = 0;

            if (

                engine->cylinders[PNEUMO_CYLINDER_Y8].input_signal[PNEUMO_CYLINDER_SIGNAL_DOWN]) {

                engine->timeout = 0;


                engine->state = PneumoState_1;

                engine->delay = 0;

                engine->timeout = 0;



            }


            break;

        }

        case PneumoState_FatalException: {

            ret = false;

            break;

        }

        }

    engine->timeout++;

    engine->delay++;

    return ret;

}

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
