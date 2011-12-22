// Copyright (c) 2011 Zeex
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SAMPGDK_CORE_H
#define SAMPGDK_CORE_H

#include <sampgdk/config.h>
#include <sampgdk/export.h>

#define AMX_EXEC_GDK (-10)

SAMPGDK_EXPORT void SAMPGDK_CALL sampgdk_initialize(void **ppPluginData);
SAMPGDK_EXPORT void SAMPGDK_CALL sampgdk_finalize();

SAMPGDK_EXPORT void SAMPGDK_CALL sampgdk_register_plugin(void *plugin);
SAMPGDK_EXPORT void *SAMPGDK_CALL sampgdk_get_plugin_handle(void *symbol);
SAMPGDK_EXPORT void *SAMPGDK_CALL sampgdk_get_plugin_symbol(void *plugin, const char *name);

#endif // SAMPGDK_CORE_H
