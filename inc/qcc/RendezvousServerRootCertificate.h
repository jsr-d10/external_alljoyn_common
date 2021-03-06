#ifndef _RENDEZVOUS_SERVER_ROOT_CERTIFICATE_H
#define _RENDEZVOUS_SERVER_ROOT_CERTIFICATE_H
/**
 * @file
 * This file defines the Rendezvous Server specific certificate authority
 * file contents in PEM format.
 */

/******************************************************************************
 * Copyright 2012, Qualcomm Innovation Center, Inc.
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

#include "Status.h"

#define QCC_MODULE "RENDEZVOUS_SERVER_ROOT_CERTIFICATE"

namespace qcc {

static const char* ServerRootCertificate;
static const char* ServerCACertificate;

static const char RendezvousTestServerRootCertificate[] = {
    "-----BEGIN CERTIFICATE-----\n"
    "MIIEVzCCAz+gAwIBAgIQFoFkpCjKEt+rEvGfsbk1VDANBgkqhkiG9w0BAQUFADCB\n"
    "jDELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMTAwLgYDVQQL\n"
    "EydGb3IgVGVzdCBQdXJwb3NlcyBPbmx5LiAgTm8gYXNzdXJhbmNlcy4xMjAwBgNV\n"
    "BAMTKVZlcmlTaWduIFRyaWFsIFNlY3VyZSBTZXJ2ZXIgUm9vdCBDQSAtIEcyMB4X\n"
    "DTA5MDQwMTAwMDAwMFoXDTI5MDMzMTIzNTk1OVowgYwxCzAJBgNVBAYTAlVTMRcw\n"
    "FQYDVQQKEw5WZXJpU2lnbiwgSW5jLjEwMC4GA1UECxMnRm9yIFRlc3QgUHVycG9z\n"
    "ZXMgT25seS4gIE5vIGFzc3VyYW5jZXMuMTIwMAYDVQQDEylWZXJpU2lnbiBUcmlh\n"
    "bCBTZWN1cmUgU2VydmVyIFJvb3QgQ0EgLSBHMjCCASIwDQYJKoZIhvcNAQEBBQAD\n"
    "ggEPADCCAQoCggEBAMCJggWnSVAcIomnvCFhXlCdgafCKCDxVSNQY2jhYGZXcZsq\n"
    "ToJmDQ7b9JO39VCPnXELOENP2+4FNCUQnzarLfghsJ8kQ9pxjRTfcMp0bsH+Gk/1\n"
    "qLDgvf9WuiBa5SM/jXNvroEQZwPuMZg4r2E2k0412VTq9ColODYNDZw3ziiYdSjV\n"
    "fY3VfbsLSXJIh2jaJC5kVRsUsx72s4/wgGXbb+P/XKr15nMIB0yH9A5tiCCXQ5nO\n"
    "EV7/ddZqmL3zdeAtyGmijOxjwiy+GS6xr7KACfbPEJYZYaS/P0wctIOyQy6CkNKL\n"
    "o5vDDkOZks0zjf6RAzNXZndvsXEJpQe5WO1avm8CAwEAAaOBsjCBrzAPBgNVHRMB\n"
    "Af8EBTADAQH/MA4GA1UdDwEB/wQEAwIBBjBtBggrBgEFBQcBDARhMF+hXaBbMFkw\n"
    "VzBVFglpbWFnZS9naWYwITAfMAcGBSsOAwIaBBSP5dMahqyNjmvDz4Bq1EgYLHsZ\n"
    "LjAlFiNodHRwOi8vbG9nby52ZXJpc2lnbi5jb20vdnNsb2dvLmdpZjAdBgNVHQ4E\n"
    "FgQUSBnnkm+SnTRjmcDwmcjWpYyMf2UwDQYJKoZIhvcNAQEFBQADggEBADuswa8C\n"
    "0hunHp17KJQ0WwNRQCp8f/u4L8Hz/TiGfybnaMXgn0sKI8Xe79iGE91M7vrzh0Gt\n"
    "ap0GLShkiqHGsHkIxBcVMFbEQ1VS63XhTeg36cWQ1EjOHmu+8tQe0oZuwFsYYdfs\n"
    "n4EZcpspiep9LFc/hu4FE8SsY6MiasHR2Ay97UsC9A3S7ZaoHfdwyhtcINXCu2lX\n"
    "W0Gpi3vzWRvwqgua6dm2WVKJfvPfmS1mAP0YmTcIwjdiNXiU6sSsJEoNlTR9zCoo\n"
    "4oKQ8wVoWZpbuPZb5geszhS7YsABUPIAAfF1YQCiMULtpa6HFzzm7sdf72N3HfwE\n"
    "aQNg95KnKGrrDUI=\n"
    "-----END CERTIFICATE-----"
};

static const char RendezvousStageServerRootCertificate[] = {
    "-----BEGIN CERTIFICATE-----\n"
    "MIIFTDCCBDSgAwIBAgIQB4vio3UvantYOivK060ZQDANBgkqhkiG9w0BAQUFADCB\n"
    "tTELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n"
    "ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTswOQYDVQQLEzJUZXJtcyBvZiB1c2Ug\n"
    "YXQgaHR0cHM6Ly93d3cudmVyaXNpZ24uY29tL3JwYSAoYykxMDEvMC0GA1UEAxMm\n"
    "VmVyaVNpZ24gQ2xhc3MgMyBTZWN1cmUgU2VydmVyIENBIC0gRzMwHhcNMTIwNDMw\n"
    "MDAwMDAwWhcNMTMwNTAxMjM1OTU5WjCBhDELMAkGA1UEBhMCVVMxEzARBgNVBAgT\n"
    "CkNhbGlmb3JuaWExEjAQBgNVBAcUCVNhbiBEaWVnbzEeMBwGA1UEChQVUVVBTENP\n"
    "TU0gSW5jb3Jwb3JhdGVkMQ0wCwYDVQQLFARDT1JQMR0wGwYDVQQDFBRyZHZzLXN0\n"
    "Zy5hbGxqb3luLm9yZzCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANSV\n"
    "xS3TM7dgakw2YsHEdx9T78YpozuzcZ6HUfytjSey20ii7BaavxBbBapRU046/Us1\n"
    "r+ODf7XWz4Cn7kuUPByLxZlqKATlGAg+J4eAOgP3eXbfPPMEcw3HiGdBuSJ4C3bQ\n"
    "jxokKz7XyY4jk39lhO/N4/rMqrdmFmSU421Ypw7QdPuOozCUTbsuYUBphzEO2i4S\n"
    "tvB0X2ZYueTArAIvxruH8dJBLIUg3gXzeIddKGFAgTLhwC46EKIIGZyw4OgQ75TF\n"
    "7+7jcTWvjVC6oh/e4LTiKFlTuGaBZ0nJ00ywmFXMsaUaVets83ksuLyOzv6V1j+q\n"
    "IyXw5ChCWKcytMxR1pMCAwEAAaOCAYUwggGBMB8GA1UdEQQYMBaCFHJkdnMtc3Rn\n"
    "LmFsbGpveW4ub3JnMAkGA1UdEwQCMAAwDgYDVR0PAQH/BAQDAgWgMEUGA1UdHwQ+\n"
    "MDwwOqA4oDaGNGh0dHA6Ly9TVlJTZWN1cmUtRzMtY3JsLnZlcmlzaWduLmNvbS9T\n"
    "VlJTZWN1cmVHMy5jcmwwRAYDVR0gBD0wOzA5BgtghkgBhvhFAQcXAzAqMCgGCCsG\n"
    "AQUFBwIBFhxodHRwczovL3d3dy52ZXJpc2lnbi5jb20vY3BzMB0GA1UdJQQWMBQG\n"
    "CCsGAQUFBwMBBggrBgEFBQcDAjAfBgNVHSMEGDAWgBQNRFwWU0TBgn4dIKsl9AFj\n"
    "2L55pTB2BggrBgEFBQcBAQRqMGgwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLnZl\n"
    "cmlzaWduLmNvbTBABggrBgEFBQcwAoY0aHR0cDovL1NWUlNlY3VyZS1HMy1haWEu\n"
    "dmVyaXNpZ24uY29tL1NWUlNlY3VyZUczLmNlcjANBgkqhkiG9w0BAQUFAAOCAQEA\n"
    "erROdpT8c2ETQI2vD1Vqnu4I1S3bIxHMBxYrepknmxpo0sd8/2+IjfzV5Hw2RrbZ\n"
    "AW8jQF9yAUWU5iOwRILdCHtGxdXrJBpvzKICd8dkaPnvJIOESheqM06yrx18swkX\n"
    "H+4JvS5nOwEzQt2qpwBkUmtGjG/9ACHDZ/ORQyNw/ygyR7ZhBANNAu19C4M72+dI\n"
    "rf6kTZ3PXC5AaaiBKV/XAAZmbT1SkDMVIr0p6zWNcjWwWQOxxIQ+m7Qr5PYiDx6/\n"
    "Yk9x7onFy2Qx3l8SeSOXAN14kHDcEG+5BhkWDse1/LVk+eDmFDNmnsgtCFLNVG5z\n"
    "D97Ydn9rPYTEABQUlWTUsg==\n"
    "-----END CERTIFICATE-----"
};

static const char RendezvousDeploymentServerRootCertificate[] = {
    "-----BEGIN CERTIFICATE-----\n"
    "MIIF7DCCBNSgAwIBAgIQbsx6pacDIAm4zrz06VLUkTANBgkqhkiG9w0BAQUFADCB\n"
    "yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n"
    "ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n"
    "U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n"
    "ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n"
    "aG9yaXR5IC0gRzUwHhcNMTAwMjA4MDAwMDAwWhcNMjAwMjA3MjM1OTU5WjCBtTEL\n"
    "MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n"
    "ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTswOQYDVQQLEzJUZXJtcyBvZiB1c2UgYXQg\n"
    "aHR0cHM6Ly93d3cudmVyaXNpZ24uY29tL3JwYSAoYykxMDEvMC0GA1UEAxMmVmVy\n"
    "aVNpZ24gQ2xhc3MgMyBTZWN1cmUgU2VydmVyIENBIC0gRzMwggEiMA0GCSqGSIb3\n"
    "DQEBAQUAA4IBDwAwggEKAoIBAQCxh4QfwgxF9byrJZenraI+nLr2wTm4i8rCrFbG\n"
    "5btljkRPTc5v7QlK1K9OEJxoiy6Ve4mbE8riNDTB81vzSXtig0iBdNGIeGwCU/m8\n"
    "f0MmV1gzgzszChew0E6RJK2GfWQS3HRKNKEdCuqWHQsV/KNLO85jiND4LQyUhhDK\n"
    "tpo9yus3nABINYYpUHjoRWPNGUFP9ZXse5jUxHGzUL4os4+guVOc9cosI6n9FAbo\n"
    "GLSa6Dxugf3kzTU2s1HTaewSulZub5tXxYsU5w7HnO1KVGrJTcW/EbGuHGeBy0RV\n"
    "M5l/JJs/U0V/hhrzPPptf4H1uErT9YU3HLWm0AnkGHs4TvoPAgMBAAGjggHfMIIB\n"
    "2zA0BggrBgEFBQcBAQQoMCYwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLnZlcmlz\n"
    "aWduLmNvbTASBgNVHRMBAf8ECDAGAQH/AgEAMHAGA1UdIARpMGcwZQYLYIZIAYb4\n"
    "RQEHFwMwVjAoBggrBgEFBQcCARYcaHR0cHM6Ly93d3cudmVyaXNpZ24uY29tL2Nw\n"
    "czAqBggrBgEFBQcCAjAeGhxodHRwczovL3d3dy52ZXJpc2lnbi5jb20vcnBhMDQG\n"
    "A1UdHwQtMCswKaAnoCWGI2h0dHA6Ly9jcmwudmVyaXNpZ24uY29tL3BjYTMtZzUu\n"
    "Y3JsMA4GA1UdDwEB/wQEAwIBBjBtBggrBgEFBQcBDARhMF+hXaBbMFkwVzBVFglp\n"
    "bWFnZS9naWYwITAfMAcGBSsOAwIaBBSP5dMahqyNjmvDz4Bq1EgYLHsZLjAlFiNo\n"
    "dHRwOi8vbG9nby52ZXJpc2lnbi5jb20vdnNsb2dvLmdpZjAoBgNVHREEITAfpB0w\n"
    "GzEZMBcGA1UEAxMQVmVyaVNpZ25NUEtJLTItNjAdBgNVHQ4EFgQUDURcFlNEwYJ+\n"
    "HSCrJfQBY9i+eaUwHwYDVR0jBBgwFoAUf9Nlp8Ld7LvwMAnzQzn6Aq8zMTMwDQYJ\n"
    "KoZIhvcNAQEFBQADggEBAAyDJO/dwwzZWJz+NrbrioBL0aP3nfPMU++CnqOh5pfB\n"
    "WJ11bOAdG0z60cEtBcDqbrIicFXZIDNAMwfCZYP6j0M3m+oOmmxw7vacgDvZN/R6\n"
    "bezQGH1JSsqZxxkoor7YdyT3hSaGbYcFQEFn0Sc67dxIHSLNCwuLvPSxe/20majp\n"
    "dirhGi2HbnTTiN0eIsbfFrYrghQKlFzyUOyvzv9iNw2tZdMGQVPtAhTItVgooazg\n"
    "W+yzf5VK+wPIrSbb5mZ4EkrZn0L74ZjmQoObj49nJOhhGbXdzbULJgWOw27EyHW4\n"
    "Rs/iGAZeqa6ogZpHFt4MKGwlJ7net4RYxh84HqTEy2Y=\n"
    "-----END CERTIFICATE-----"
};

/*
 * That certificate is the intermediate cert (G3 issued by G5) that was used to verify
 * the cert issued to the rendezvous server and signed with G3. And this cert would be
 * the same for production, test and stage environments because the certs of all these
 * three servers are signed with the same G3 cert.
 */
static const char RendezvousServerCACertificate[] = {
    "-----BEGIN CERTIFICATE-----\n"
    "MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n"
    "yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n"
    "ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n"
    "U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n"
    "ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n"
    "aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n"
    "MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n"
    "ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n"
    "biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n"
    "U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n"
    "aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n"
    "nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n"
    "t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n"
    "SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n"
    "BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n"
    "rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n"
    "NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n"
    "BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n"
    "BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n"
    "aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n"
    "MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n"
    "p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n"
    "5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n"
    "WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n"
    "4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n"
    "hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n"
    "-----END CERTIFICATE-----\n"
};

static QStatus InitializeServerRootCertificate(String Server)
{
    QStatus status = ER_OK;

    if (Server == String("rdvs-test.qualcomm.com")) {
        ServerRootCertificate = RendezvousTestServerRootCertificate;
        ServerCACertificate = RendezvousServerCACertificate;
    } else if (Server == String("rdvs.alljoyn.org")) {
        ServerRootCertificate = RendezvousDeploymentServerRootCertificate;
        ServerCACertificate = RendezvousServerCACertificate;
    } else if (Server == String("rdvs-stg.alljoyn.org")) {
        ServerRootCertificate = RendezvousStageServerRootCertificate;
        ServerCACertificate = RendezvousServerCACertificate;
    } else {
        status = ER_RENDEZVOUS_SERVER_ROOT_CERTIFICATE_UNINITIALIZED;
    }
    return status;
}


} // namespace qcc

#undef QCC_MODULE

#endif // _RENDEZVOUS_SERVER_ROOT_CERTIFICATE_H
