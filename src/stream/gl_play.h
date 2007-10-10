/**
 * \file src/stream/gl_play.h
 * \brief OpenGL playback
 * \author Pyry Haulos <pyry.haulos@gmail.com>
 * \date 2007
 */

/* gl_play.h -- OpenGL stuff
 * Copyright (C) 2007 Pyry Haulos
 * For conditions of distribution and use, see copyright notice in glc.h
 */

#ifndef _GL_H
#define _GL_H

#include <packetstream.h>
#include "../common/glc.h"

/**
 * \addtogroup gl_play
 *  \{
 */

int gl_play_init(glc_t *glc, ps_buffer_t *from);

/**  \} */

#endif
