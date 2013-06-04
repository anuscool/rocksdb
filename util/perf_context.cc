#include "util/perf_context_imp.h"

namespace leveldb {

// by default, enable counts only
PerfLevel perf_level = kEnableCount;

void SetPerfLevel(PerfLevel level) { perf_level = level; }

void PerfContext::Reset() {
  user_key_comparison_count = 0;
  block_cache_hit_count = 0;
  block_read_count = 0;
  block_read_byte = 0;
  block_read_time = 0;
  block_checksum_time = 0;
  block_decompress_time = 0;
}

__thread PerfContext perf_context;

}
