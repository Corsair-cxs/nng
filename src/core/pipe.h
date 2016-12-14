/*
 * Copyright 2016 Garrett D'Amore <garrett@damore.org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef CORE_PIPE_H
#define CORE_PIPE_H

/*
 * This file contains definitions for pipes.
 */

/*
 * Pipe operations that protocols use.
 */
extern int nni_pipe_recv(nng_pipe_t, nng_msg_t *);
extern int nni_pipe_send(nng_pipe_t, nng_msg_t);
extern uint32_t nni_pipe_id(nng_pipe_t);
extern void nni_pipe_close(nng_pipe_t);

/*
 * Used only by the socket core - as we don't wish to expose the details
 * of the pipe structure outside of pipe.c.
 */
extern void nni_pipe_list_init(nni_list_t *);
extern int nni_pipe_create(nng_pipe_t *, struct nni_transport *);
extern void nni_pipe_destroy(nng_pipe_t);

#endif /* CORE_PIPE_H */