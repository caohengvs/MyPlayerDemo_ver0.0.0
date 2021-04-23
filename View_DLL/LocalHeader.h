#pragma once
//#define  CONFIG_AVFILTER
#include <inttypes.h>
#include <math.h>
#include <limits.h>
#include <signal.h>
#include <stdint.h>

#include "../ffmpeg/include/libavutil/avstring.h"
#include "../ffmpeg/include/libavutil/eval.h"
#include "../ffmpeg/include/libavutil/mathematics.h"
#include "../ffmpeg/include/libavutil/pixdesc.h"
#include "../ffmpeg/include/libavutil/imgutils.h"
#include "../ffmpeg/include/libavutil/dict.h"
#include "../ffmpeg/include/libavutil/fifo.h"
#include "../ffmpeg/include/libavutil/parseutils.h"
#include "../ffmpeg/include/libavutil/samplefmt.h"
#include "../ffmpeg/include/libavutil/avassert.h"
#include "../ffmpeg/include/libavutil/time.h"
#include "../ffmpeg/include/libavutil/bprint.h"
#include "../ffmpeg/include/libavformat/avformat.h"
#include "../ffmpeg/include/libavdevice/avdevice.h"
#include "../ffmpeg/include/libswscale/swscale.h"
#include "../ffmpeg/include/libavutil/opt.h"
#include "../ffmpeg/include/libavcodec/avfft.h"
#include "../ffmpeg/include/libswresample/swresample.h"

#if CONFIG_AVFILTER
# include "../ffmpeg/include/libavfilter/avfilter.h"
# include "../ffmpeg/include/libavfilter/buffersink.h"
# include "../ffmpeg/include/libavfilter/buffersrc.h"
#endif

extern "C"
{
#include "../SDL2/include/SDL.h"
#include "../SDL2/include/SDL_thread.h"
}
#include <assert.h>
#include <iostream>
using namespace std;
