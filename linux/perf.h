/*
 *
 * honggfuzz - architecture dependent code (LINUX/PERF)
 * -----------------------------------------
 *
 * Author: Robert Swiecki <swiecki@google.com>
 *
 * Copyright 2010-2018 by Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * permissions and limitations under the License.
 *
 */

#ifndef _HF_LINUX_PERF_H_
#define _HF_LINUX_PERF_H_

#include "honggfuzz.h"

extern bool arch_perfInit(honggfuzz_t* hfuzz);
extern bool arch_perfOpen(pid_t pid, run_t* run);
extern void arch_perfClose(run_t* run);
extern bool arch_perfEnable(run_t* run);
extern void arch_perfAnalyze(run_t* run);

#endif
