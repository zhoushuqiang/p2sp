/*
 * connector.h
 *
 *  Created on: 2015年11月17日
 *      Author: wrb00_000
 */

#ifndef CUBE_SERVICE_CLIENT_CLIENT_H_
#define CUBE_SERVICE_CLIENT_CLIENT_H_
#if defined(__linux__)
#include "cube/service/tcp/client/epoll/client.h"
#elif defined(__WIN32__)
#include "cube/service/tcp/client/iocp/client.h"
#else
#error "platform is not supported"
#endif
#endif /* CUBE_SERVICE_EPOLL_CONNECTOR_H_ */
