/* Copyright (C) 2014 Wolfgang Hotwagner <code@feedyourhead.at>       
 *                                                                
 * This file is part of WebServ                                       
 *
 * concut is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation; either version 2 
 * of the License, or (at your option) any later version.
 *
 * concut is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License          
 * along with concut; if not, write to the 
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA 
 *
 */

#ifndef SIMPLE_HTTP_H
#define SIMPLE_HTTP_H

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_BUF_LEN 1024
#define MAX_METHOD_LEN 10
#define MAX_PATH_LEN 800
#define MAX_HTTPSTR_LEN 12


int parse_first_http(const char* http_req,const int req_len);
int handle_client(int connfd);

#endif
