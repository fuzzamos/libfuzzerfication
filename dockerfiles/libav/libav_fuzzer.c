#include <string.h>
#include <stdint.h>

extern "C" {
#include "libavcodec/avcodec.h"
#include "libavutil/avutil.h"
}


extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  avcodec_register_all();
  AVCodec *codec;
  //codec = avcodec_find_decoder(AV_CODEC_ID_MP2);

  return 0;
}