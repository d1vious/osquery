/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed as defined on the LICENSE file found in the
 *  root directory of this source tree.
 */

#pragma once

#include <set>
#include <string>

#include <osquery/tables.h>

namespace osquery {

/// List of columns decorated for file events.
extern const std::set<std::string> kCommonFileColumns;

/**
 * @brief A helper function for each platform's implementation of file_events.
 *
 * Given an action and path, this Row decorator assures a common implementation
 * of hashing and common columns from the `file` table.
 *
 * @param path The target path from the file event.
 * @param hash Should the target path be read and hashed.
 * @param r The output parameter row structure.
 */
void decorateFileEvent(const std::string& path, bool hash, Row& r);
}
