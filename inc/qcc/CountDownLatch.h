/**
 * @file
 *
 * Define a class that abstracts a count down latch.
 */

/******************************************************************************
 *
 *
 * Copyright 2009-2011, Qualcomm Innovation Center, Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 ******************************************************************************/
#ifndef _QCC_COUNTDOWNLATCH_H
#define _QCC_COUNTDOWNLATCH_H

#include <qcc/platform.h>

#if defined(QCC_OS_GROUP_POSIX)

#elif defined(QCC_OS_GROUP_WINDOWS)

#elif defined(QCC_OS_GROUP_WINRT)
#include <qcc/winrt/CountDownLatch.h>
#else
#error No OS GROUP defined.
#endif

#endif
