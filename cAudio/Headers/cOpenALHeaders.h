//
//  cOpenALHeaders.h
//  CELAudio
//
//  Created by Byron Wright on 4/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef CELAudio_cOpenALHeaders_h
#define CELAudio_cOpenALHeaders_h

#include "cAudioPlatform.h"

#if defined(CAUDIO_PLATFORM_IPHONE) || defined (CAUDIO_PLATFORM_MAC)

#include <OpenAL/al.h>
#include <OpenAL/alc.h>

  #if defined(CAUDIO_PLATFORM_IPHONE) // iphone only
    #include <OpenAL/oalMacOSX_OALExtensions.h>
    #include <OpenAL/oalStaticBufferExtension.h>
  #else // mac
    #include <OpenAL/MacOSX_OALExtensions.h>
  #endif 


#elif defined(CAUDIO_PLATFORM_LINUX) || (CAUDIO_PLATFORM_WIN)
#include <al.h>
#include <alc.h>

#else 

#error unknown plaform! Cannot include OpenAL files
#endif

#endif
