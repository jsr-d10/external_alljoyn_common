/**
 * @file
 *
 * OS specific utility functions
 */

/******************************************************************************
 *
 * Copyright 2011-2012, Qualcomm Innovation Center, Inc.
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
 *
 *****************************************************************************/

#include <qcc/platform.h>

#include <string.h>
#include <windows.h>
#include <process.h>

#include <qcc/Util.h>
#include <qcc/String.h>
#include <qcc/Crypto.h>
#include <qcc/Debug.h>



#define QCC_MODULE  "UTIL"


uint32_t qcc::GetPid()
{
    return 0;
}

static uint32_t ComputeId(const char* buf, size_t len)
{
    QCC_DbgPrintf(("ComputeId %s", buf));
    uint32_t digest[qcc::Crypto_SHA1::DIGEST_SIZE / sizeof(uint32_t)];
    qcc::Crypto_SHA1 sha1;
    sha1.Init();
    sha1.Update((const uint8_t*)buf, (size_t)len);
    sha1.GetDigest((uint8_t*)digest);
    return digest[0];
}

uint32_t qcc::GetUid()
{
    return ComputeId("nobody", sizeof("nobody") - 1);
}

uint32_t qcc::GetGid()
{
    return ComputeId("nogroup", sizeof("nogroup") - 1);
}

uint32_t qcc::GetUsersUid(const char* name)
{
    return ComputeId(name, strlen(name));
}

uint32_t qcc::GetUsersGid(const char* name)
{
    return ComputeId(name, strlen(name));
}

qcc::String qcc::GetHomeDir()
{
    return Environ::GetAppEnviron()->Find("APPLICATIONDATA");
}

QStatus qcc::GetDirListing(const char* path, DirListing& listing)
{
    return ER_NOT_IMPLEMENTED;
}


QStatus qcc::Exec(const char* exec, const ExecArgs& args, const qcc::Environ& envs)
{
    return ER_NOT_IMPLEMENTED;
}


QStatus qcc::ExecAs(const char* user, const char* exec, const ExecArgs& args, const qcc::Environ& envs)
{
    return ER_NOT_IMPLEMENTED;
}

QStatus qcc::ResolveHostName(qcc::String hostname, uint8_t addr[], size_t addrSize, size_t& addrLen)
{
    // There doesn't appear to be a way to resolve hostnames on WinRT.
    // HostName almost gets there, but it will only show resolution of local addresses.
    return ER_NOT_IMPLEMENTED;
}
