
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed as defined on the LICENSE file found in the
 *  root directory of this source tree.
 */

// Sanity check integration test for ie_extensions
// Spec file: specs/windows/ie_extensions.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class ieExtensions : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(ieExtensions, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from ie_extensions");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"name", NormalType}
  //      {"registry_path", NormalType}
  //      {"version", NormalType}
  //      {"path", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
