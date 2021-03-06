
#ifndef __CAPTURE__H__
#define __CAPTURE__H__

#include <asm/types.h> 
#include <linux/videodev2.h>

#include "encoder_type.h"
#include "type_camera.h"


extern int koti_awenc_capture_video_width;
extern int koti_awenc_capture_video_height;

int disp_int(int w,int h);
void disp_start(void);
void disp_stop(void);
int disp_set_addr(int w,int h,int *addr);
void disp_quit();

int InitCapture();
void DeInitCapture();
int StartStreaming();
void ReleaseFrame(int buf_id);
int WaitCamerReady();
int GetPreviewFrame(V4L2BUF_t *pBuf);
int get_capture_brightness(int qctrl_id);


#endif // __CAPTURE__H__
