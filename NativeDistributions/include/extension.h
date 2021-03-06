/*
 * Copyright (c) 2020 Elastos Foundation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __EXTENSION_H__
#define __EXTENSION_H__

#include <stddef.h>
#include <stdbool.h>
#include <sys/types.h>

#include <carrier.h>

typedef void ExtensionInviteCallback(Carrier *carrier, const char *from,
                                     const void *data, size_t len, void *context);

int extension_init(Carrier *carrier, ExtensionInviteCallback *callback, void *context);

void extension_cleanup(Carrier *carrier);

typedef void ExtensionInviteReplyCallback(Carrier *carrier, const char *from,
                                          int status, const char *reason,
                                          const void *data, size_t len, void *context);

int extension_invite_friend(Carrier *carrier, const char *to,
                            const void *data, size_t len,
                            ExtensionInviteReplyCallback *callback,
                            void *context);

int extension_reply_friend_invite(Carrier *carrier, const char *to,
                                  int status, const char *reason,
                                  const void *data, size_t len);
void LogD();
#endif /* __EXTENSION_H__ */
