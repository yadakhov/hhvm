/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2014 Facebook, Inc. (http://www.facebook.com)     |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
#ifndef incl_HPHP_JIT_SERVICE_REQUESTS_ARM_H
#define incl_HPHP_JIT_SERVICE_REQUESTS_ARM_H

namespace HPHP { namespace jit {
struct Vout;
namespace arm {

/*
 * See service-requests-x64.h for interface documentation.
 */

TCA emitServiceReqWork(CodeBlock& cb, TCA start, SRFlags flags,
                       ServiceRequest req, const ServiceReqArgVec& argInfo);
void emitBindJmp(CodeBlock& cb, CodeBlock& frozen, SrcKey dest);
void emitBindJcc(CodeBlock& cb, CodeBlock& frozen, jit::ConditionCode cc,
                 SrcKey dest);
void emitBindSideExit(CodeBlock& cb, CodeBlock& frozen, SrcKey dest,
                      jit::ConditionCode cc);

}}}

#endif
