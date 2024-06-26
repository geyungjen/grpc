// Copyright 2023 gRPC authors.
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

// This file is autogenerated: see
// tools/codegen/core/gen_huffman_decompressor.cc

#ifndef GRPC_TEST_CPP_MICROBENCHMARKS_HUFFMAN_GEOMETRIES_DECODE_HUFF_8_8_14_H
#define GRPC_TEST_CPP_MICROBENCHMARKS_HUFFMAN_GEOMETRIES_DECODE_HUFF_8_8_14_H
#include <cstddef>
#include <cstdint>

#include <grpc/support/port_platform.h>
namespace grpc_core {
namespace geometry_8_8_14 {
class HuffDecoderCommon {
 protected:
  static inline uint64_t GetOp2(size_t i) { return table2_0_ops_[i]; }
  static inline uint64_t GetEmit2(size_t, size_t emit) {
    return table2_0_emit_[emit];
  }
  static inline uint64_t GetOp3(size_t i) { return table3_0_ops_[i]; }
  static inline uint64_t GetEmit3(size_t, size_t emit) {
    return table3_0_emit_[emit];
  }
  static inline uint64_t GetOp4(size_t i) {
    return table4_ops_[i >> 6][i & 0x3f];
  }
  static inline uint64_t GetEmit4(size_t i, size_t emit) {
    return table4_emit_[i >> 6][emit];
  }
  static inline uint64_t GetOp1(size_t i) {
    return table1_0_inner_[table1_0_outer_[i]];
  }
  static inline uint64_t GetEmit1(size_t, size_t emit) {
    return table1_0_emit_[emit];
  }
  static inline uint64_t GetOp5(size_t i) {
    return (i < 2 ? (i ? 6 : 2) : ((i - 2) ? 14 : 10));
  }
  static inline uint64_t GetEmit5(size_t, size_t emit) {
    return (emit < 2 ? (emit + 33) : ((emit - 2) + 40));
  }
  static inline uint64_t GetOp7(size_t i) {
    return (i < 2 ? (i) : ((i - 2) + 1));
  }
  static inline uint64_t GetEmit7(size_t, size_t emit) {
    return ((void)emit, 63);
  }
  static inline uint64_t GetOp8(size_t i) {
    return table8_0_inner_[table8_0_outer_[i]];
  }
  static inline uint64_t GetEmit8(size_t, size_t emit) {
    return (emit < 2 ? (emit ? 39 : 63) : ((emit - 2) ? 124 : 43));
  }
  static inline uint64_t GetOp9(size_t i) {
    return table9_0_inner_[table9_0_outer_[i]];
  }
  static inline uint64_t GetEmit9(size_t, size_t emit) {
    return table9_0_emit_[emit];
  }
  static inline uint64_t GetOp10(size_t i) { return table10_0_ops_[i]; }
  static inline uint64_t GetEmit10(size_t, size_t emit) {
    return table10_0_emit_[emit];
  }
  static inline uint64_t GetOp11(size_t i) { return table11_0_ops_[i]; }
  static inline uint64_t GetEmit11(size_t, size_t emit) {
    return table11_0_emit_[emit];
  }
  static inline uint64_t GetOp12(size_t i) { return table12_0_ops_[i]; }
  static inline uint64_t GetEmit12(size_t, size_t emit) {
    return table12_0_emit_[emit];
  }
  static inline uint64_t GetOp6(size_t i) {
    return table6_ops_[i >> 5][i & 0x1f];
  }
  static inline uint64_t GetEmit6(size_t i, size_t emit) {
    return table6_emit_[i >> 5][emit];
  }
  static inline uint64_t GetOp14(size_t i) {
    return ((i < 3 ? (i) : (((void)(i - 3), 3))) < 2
                ? ((i < 3 ? (i) : (((void)(i - 3), 3))) ? 2 : 0)
                : (((i < 3 ? (i) : (((void)(i - 3), 3))) - 2) ? 1 : 4));
  }
  static inline uint64_t GetEmit14(size_t, size_t emit) {
    return (emit < 1 ? (((void)emit, 92)) : ((emit - 1) ? 208 : 195));
  }
  static inline uint64_t GetOp15(size_t i) {
    return table15_0_inner_[table15_0_outer_[i]];
  }
  static inline uint64_t GetEmit15(size_t, size_t emit) {
    return table15_0_emit_[emit];
  }
  static inline uint64_t GetOp13(size_t i) { return table13_0_ops_[i]; }
  static inline uint64_t GetEmit13(size_t, size_t emit) {
    return table13_0_emit_[emit];
  }
  static inline uint64_t GetOp17(size_t i) { return table17_0_ops_[i]; }
  static inline uint64_t GetEmit17(size_t, size_t emit) {
    return table17_0_emit_[emit];
  }
  static inline uint64_t GetOp18(size_t i) { return table18_0_ops_[i]; }
  static inline uint64_t GetEmit18(size_t, size_t emit) {
    return table18_0_emit_[emit];
  }
  static inline uint64_t GetOp19(size_t i) { return table19_0_ops_[i]; }
  static inline uint64_t GetEmit19(size_t, size_t emit) {
    return table19_0_emit_[emit];
  }
  static inline uint64_t GetOp20(size_t i) {
    return table20_ops_[i >> 7][i & 0x7f];
  }
  static inline uint64_t GetEmit20(size_t i, size_t emit) {
    return table20_emit_[i >> 7][emit];
  }
  static inline uint64_t GetOp21(size_t i) {
    return table21_ops_[i >> 8][i & 0xff];
  }
  static inline uint64_t GetEmit21(size_t i, size_t emit) {
    return table21_emit_[i >> 8][emit];
  }
  static inline uint64_t GetOp22(size_t i) {
    return table22_ops_[i >> 6][i & 0x3f];
  }
  static inline uint64_t GetEmit22(size_t i, size_t emit) {
    return table22_emit_[i >> 6][emit];
  }
  static inline uint64_t GetOp23(size_t i) {
    return table23_ops_[i >> 6][i & 0x3f];
  }
  static inline uint64_t GetEmit23(size_t i, size_t emit) {
    return table23_emit_[i >> 6][emit];
  }
  static inline uint64_t GetOp24(size_t i) {
    return table24_ops_[i >> 7][i & 0x7f];
  }
  static inline uint64_t GetEmit24(size_t i, size_t emit) {
    return table24_emit_[i >> 7][emit];
  }
  static inline uint64_t GetOp25(size_t i) {
    return table25_ops_[i >> 7][i & 0x7f];
  }
  static inline uint64_t GetEmit25(size_t i, size_t emit) {
    return table25_emit_[i >> 7][emit];
  }
  static inline uint64_t GetOp16(size_t i) {
    return table16_ops_[i >> 8][i & 0xff];
  }
  static inline uint64_t GetEmit16(size_t i, size_t emit) {
    return table16_emit_[i >> 8][emit];
  }

 private:
  static const uint8_t table2_0_emit_[10];
  static const uint8_t table2_0_ops_[32];
  static const uint8_t table3_0_emit_[36];
  static const uint8_t table3_0_ops_[64];
  static const uint8_t table4_0_emit_[22];
  static const uint8_t table4_0_ops_[64];
  static const uint8_t table4_1_emit_[46];
  static const uint8_t table4_1_ops_[64];
  static const uint8_t* const table4_emit_[2];
  static const uint8_t* const table4_ops_[2];
  static const uint8_t table1_0_emit_[74];
  static const uint16_t table1_0_inner_[76];
  static const uint8_t table1_0_outer_[256];
  static const uint8_t table8_0_inner_[6];
  static const uint8_t table8_0_outer_[8];
  static const uint8_t table9_0_emit_[6];
  static const uint8_t table9_0_inner_[8];
  static const uint8_t table9_0_outer_[16];
  static const uint8_t table10_0_emit_[12];
  static const uint8_t table10_0_ops_[32];
  static const uint8_t table11_0_emit_[14];
  static const uint8_t table11_0_ops_[64];
  static const uint8_t table12_0_emit_[36];
  static const uint8_t table12_0_ops_[128];
  static const uint8_t table6_0_emit_[1];
  static const uint16_t table6_0_ops_[32];
  static const uint8_t table6_2_emit_[1];
  static const uint16_t table6_2_ops_[32];
  static const uint8_t table6_3_emit_[1];
  static const uint8_t table6_4_emit_[1];
  static const uint8_t table6_5_emit_[2];
  static const uint16_t table6_5_ops_[32];
  static const uint8_t table6_6_emit_[4];
  static const uint16_t table6_6_ops_[32];
  static const uint8_t table6_7_emit_[7];
  static const uint16_t table6_7_ops_[32];
  static const uint8_t* const table6_emit_[8];
  static const uint16_t* const table6_ops_[8];
  static const uint8_t table15_0_emit_[11];
  static const uint8_t table15_0_inner_[12];
  static const uint8_t table15_0_outer_[16];
  static const uint8_t table13_0_emit_[15];
  static const uint8_t table13_0_ops_[32];
  static const uint8_t table17_0_emit_[9];
  static const uint8_t table17_0_ops_[32];
  static const uint8_t table18_0_emit_[35];
  static const uint8_t table18_0_ops_[64];
  static const uint8_t table19_0_emit_[64];
  static const uint8_t table19_0_ops_[128];
  static const uint8_t table20_0_emit_[23];
  static const uint8_t table20_0_ops_[128];
  static const uint8_t table20_1_emit_[53];
  static const uint8_t table20_1_ops_[128];
  static const uint8_t* const table20_emit_[2];
  static const uint8_t* const table20_ops_[2];
  static const uint8_t table21_0_ops_[256];
  static const uint8_t table21_1_emit_[57];
  static const uint8_t table21_1_ops_[256];
  static const uint8_t* const table21_emit_[2];
  static const uint8_t* const table21_ops_[2];
  static const uint8_t table22_0_emit_[40];
  static const uint8_t table22_0_ops_[64];
  static const uint8_t table22_1_emit_[40];
  static const uint8_t table22_2_emit_[40];
  static const uint8_t table22_3_emit_[40];
  static const uint8_t table22_4_emit_[22];
  static const uint8_t table22_4_ops_[64];
  static const uint8_t table22_5_emit_[4];
  static const uint8_t table22_5_ops_[64];
  static const uint8_t table22_6_emit_[4];
  static const uint8_t table22_7_emit_[4];
  static const uint8_t table22_8_emit_[4];
  static const uint8_t table22_9_emit_[4];
  static const uint8_t table22_10_emit_[4];
  static const uint8_t table22_11_emit_[8];
  static const uint8_t table22_11_ops_[64];
  static const uint8_t table22_12_emit_[8];
  static const uint8_t table22_13_emit_[8];
  static const uint8_t table22_14_emit_[11];
  static const uint8_t table22_14_ops_[64];
  static const uint8_t table22_15_emit_[25];
  static const uint8_t table22_15_ops_[64];
  static const uint8_t* const table22_emit_[16];
  static const uint8_t* const table22_ops_[16];
  static const uint8_t table23_0_emit_[72];
  static const uint16_t table23_0_ops_[64];
  static const uint8_t table23_1_emit_[72];
  static const uint8_t table23_2_emit_[72];
  static const uint8_t table23_3_emit_[72];
  static const uint8_t table23_4_emit_[72];
  static const uint8_t table23_5_emit_[72];
  static const uint8_t table23_6_emit_[72];
  static const uint8_t table23_7_emit_[72];
  static const uint8_t table23_8_emit_[72];
  static const uint8_t table23_9_emit_[40];
  static const uint16_t table23_9_ops_[64];
  static const uint8_t table23_10_emit_[40];
  static const uint8_t table23_11_emit_[40];
  static const uint8_t table23_12_emit_[40];
  static const uint8_t table23_13_emit_[40];
  static const uint8_t table23_14_emit_[40];
  static const uint8_t table23_15_emit_[40];
  static const uint8_t table23_16_emit_[40];
  static const uint8_t table23_17_emit_[40];
  static const uint8_t table23_18_emit_[40];
  static const uint8_t table23_19_emit_[40];
  static const uint8_t table23_20_emit_[40];
  static const uint8_t table23_21_emit_[40];
  static const uint8_t table23_22_emit_[4];
  static const uint16_t table23_22_ops_[64];
  static const uint8_t table23_23_emit_[4];
  static const uint8_t table23_24_emit_[4];
  static const uint8_t table23_25_emit_[4];
  static const uint8_t table23_26_emit_[4];
  static const uint8_t table23_27_emit_[4];
  static const uint8_t table23_28_emit_[4];
  static const uint8_t table23_29_emit_[7];
  static const uint16_t table23_29_ops_[64];
  static const uint8_t table23_30_emit_[10];
  static const uint16_t table23_30_ops_[64];
  static const uint8_t table23_31_emit_[34];
  static const uint16_t table23_31_ops_[64];
  static const uint8_t* const table23_emit_[32];
  static const uint16_t* const table23_ops_[32];
  static const uint8_t table24_0_emit_[136];
  static const uint16_t table24_0_ops_[128];
  static const uint8_t table24_1_emit_[136];
  static const uint8_t table24_2_emit_[136];
  static const uint8_t table24_3_emit_[136];
  static const uint8_t table24_4_emit_[136];
  static const uint8_t table24_5_emit_[136];
  static const uint8_t table24_6_emit_[136];
  static const uint8_t table24_7_emit_[136];
  static const uint8_t table24_8_emit_[136];
  static const uint8_t table24_9_emit_[144];
  static const uint16_t table24_9_ops_[128];
  static const uint8_t table24_10_emit_[144];
  static const uint8_t table24_11_emit_[144];
  static const uint8_t table24_12_emit_[144];
  static const uint8_t table24_13_emit_[144];
  static const uint8_t table24_14_emit_[144];
  static const uint8_t table24_15_emit_[144];
  static const uint8_t table24_16_emit_[144];
  static const uint8_t table24_17_emit_[144];
  static const uint8_t table24_18_emit_[144];
  static const uint8_t table24_19_emit_[144];
  static const uint8_t table24_20_emit_[144];
  static const uint8_t table24_21_emit_[144];
  static const uint8_t table24_22_emit_[80];
  static const uint16_t table24_22_ops_[128];
  static const uint8_t table24_23_emit_[80];
  static const uint8_t table24_24_emit_[80];
  static const uint8_t table24_25_emit_[80];
  static const uint8_t table24_26_emit_[80];
  static const uint8_t table24_27_emit_[80];
  static const uint8_t table24_28_emit_[80];
  static const uint8_t table24_29_emit_[26];
  static const uint16_t table24_29_ops_[128];
  static const uint16_t table24_30_ops_[128];
  static const uint8_t table24_31_emit_[63];
  static const uint16_t table24_31_ops_[128];
  static const uint8_t* const table24_emit_[32];
  static const uint16_t* const table24_ops_[32];
  static const uint8_t table25_0_emit_[44];
  static const uint16_t table25_0_ops_[128];
  static const uint8_t table25_1_emit_[104];
  static const uint16_t table25_1_ops_[128];
  static const uint8_t table25_2_emit_[44];
  static const uint8_t table25_3_emit_[104];
  static const uint8_t table25_4_emit_[44];
  static const uint8_t table25_5_emit_[104];
  static const uint8_t table25_6_emit_[44];
  static const uint8_t table25_7_emit_[104];
  static const uint8_t table25_8_emit_[44];
  static const uint8_t table25_9_emit_[104];
  static const uint8_t table25_10_emit_[44];
  static const uint8_t table25_11_emit_[104];
  static const uint8_t table25_12_emit_[44];
  static const uint8_t table25_13_emit_[104];
  static const uint8_t table25_14_emit_[44];
  static const uint8_t table25_15_emit_[104];
  static const uint8_t table25_16_emit_[44];
  static const uint8_t table25_17_emit_[104];
  static const uint8_t table25_18_emit_[136];
  static const uint8_t table25_19_emit_[136];
  static const uint8_t table25_20_emit_[136];
  static const uint8_t table25_21_emit_[136];
  static const uint8_t table25_22_emit_[136];
  static const uint8_t table25_23_emit_[136];
  static const uint8_t table25_24_emit_[136];
  static const uint8_t table25_25_emit_[136];
  static const uint8_t table25_26_emit_[136];
  static const uint8_t table25_27_emit_[136];
  static const uint8_t table25_28_emit_[136];
  static const uint8_t table25_29_emit_[136];
  static const uint8_t table25_30_emit_[136];
  static const uint8_t table25_31_emit_[136];
  static const uint8_t table25_32_emit_[136];
  static const uint8_t table25_33_emit_[136];
  static const uint8_t table25_34_emit_[136];
  static const uint8_t table25_35_emit_[136];
  static const uint8_t table25_36_emit_[136];
  static const uint8_t table25_37_emit_[136];
  static const uint8_t table25_38_emit_[136];
  static const uint8_t table25_39_emit_[136];
  static const uint8_t table25_40_emit_[136];
  static const uint8_t table25_41_emit_[136];
  static const uint8_t table25_42_emit_[136];
  static const uint8_t table25_43_emit_[136];
  static const uint8_t table25_44_emit_[144];
  static const uint8_t table25_45_emit_[144];
  static const uint8_t table25_46_emit_[144];
  static const uint8_t table25_47_emit_[144];
  static const uint8_t table25_48_emit_[144];
  static const uint8_t table25_49_emit_[144];
  static const uint8_t table25_50_emit_[144];
  static const uint8_t table25_51_emit_[144];
  static const uint8_t table25_52_emit_[144];
  static const uint8_t table25_53_emit_[144];
  static const uint8_t table25_54_emit_[144];
  static const uint8_t table25_55_emit_[144];
  static const uint8_t table25_56_emit_[144];
  static const uint8_t table25_57_emit_[144];
  static const uint8_t table25_58_emit_[112];
  static const uint16_t table25_58_ops_[128];
  static const uint8_t table25_59_emit_[80];
  static const uint8_t table25_60_emit_[80];
  static const uint8_t table25_61_emit_[44];
  static const uint16_t table25_61_ops_[128];
  static const uint8_t table25_62_emit_[17];
  static const uint16_t table25_62_ops_[128];
  static const uint8_t table25_63_emit_[46];
  static const uint16_t table25_63_ops_[128];
  static const uint8_t* const table25_emit_[64];
  static const uint16_t* const table25_ops_[64];
  static const uint8_t table16_0_emit_[1];
  static const uint16_t table16_0_ops_[256];
  static const uint8_t table16_2_emit_[1];
  static const uint8_t table16_4_emit_[1];
  static const uint8_t table16_6_emit_[1];
  static const uint8_t table16_8_emit_[1];
  static const uint8_t table16_10_emit_[1];
  static const uint8_t table16_12_emit_[1];
  static const uint8_t table16_14_emit_[1];
  static const uint8_t table16_16_emit_[1];
  static const uint8_t table16_18_emit_[1];
  static const uint16_t table16_18_ops_[256];
  static const uint8_t table16_19_emit_[1];
  static const uint8_t table16_20_emit_[1];
  static const uint8_t table16_21_emit_[1];
  static const uint8_t table16_22_emit_[1];
  static const uint8_t table16_23_emit_[1];
  static const uint8_t table16_24_emit_[1];
  static const uint8_t table16_25_emit_[1];
  static const uint8_t table16_26_emit_[1];
  static const uint8_t table16_27_emit_[1];
  static const uint8_t table16_28_emit_[1];
  static const uint8_t table16_29_emit_[1];
  static const uint8_t table16_30_emit_[1];
  static const uint8_t table16_31_emit_[1];
  static const uint8_t table16_32_emit_[1];
  static const uint8_t table16_33_emit_[1];
  static const uint8_t table16_34_emit_[1];
  static const uint8_t table16_35_emit_[1];
  static const uint8_t table16_36_emit_[1];
  static const uint8_t table16_37_emit_[1];
  static const uint8_t table16_38_emit_[1];
  static const uint8_t table16_39_emit_[1];
  static const uint8_t table16_40_emit_[1];
  static const uint8_t table16_41_emit_[1];
  static const uint8_t table16_42_emit_[1];
  static const uint8_t table16_43_emit_[1];
  static const uint8_t table16_44_emit_[2];
  static const uint16_t table16_44_ops_[256];
  static const uint8_t table16_45_emit_[2];
  static const uint8_t table16_46_emit_[2];
  static const uint8_t table16_47_emit_[2];
  static const uint8_t table16_48_emit_[2];
  static const uint8_t table16_49_emit_[2];
  static const uint8_t table16_50_emit_[2];
  static const uint8_t table16_51_emit_[2];
  static const uint8_t table16_52_emit_[2];
  static const uint8_t table16_53_emit_[2];
  static const uint8_t table16_54_emit_[2];
  static const uint8_t table16_55_emit_[2];
  static const uint8_t table16_56_emit_[2];
  static const uint8_t table16_57_emit_[2];
  static const uint8_t table16_58_emit_[3];
  static const uint16_t table16_58_ops_[256];
  static const uint8_t table16_59_emit_[4];
  static const uint16_t table16_59_ops_[256];
  static const uint8_t table16_60_emit_[4];
  static const uint8_t table16_61_emit_[6];
  static const uint16_t table16_61_ops_[256];
  static const uint16_t table16_62_ops_[256];
  static const uint8_t table16_63_emit_[49];
  static const uint16_t table16_63_ops_[256];
  static const uint8_t* const table16_emit_[64];
  static const uint16_t* const table16_ops_[64];
};
template <typename F>
class HuffDecoder : public HuffDecoderCommon {
 public:
  HuffDecoder(F sink, const uint8_t* begin, const uint8_t* end)
      : sink_(sink), begin_(begin), end_(end) {}
  bool Run() {
    while (!done_) {
      if (!RefillTo8()) {
        Done0();
        break;
      }
      const auto index = (buffer_ >> (buffer_len_ - 8)) & 0xff;
      const auto op = GetOp1(index);
      const int consumed = op & 15;
      buffer_len_ -= consumed;
      const auto emit_ofs = op >> 6;
      switch ((op >> 4) & 3) {
        case 0: {
          sink_(GetEmit1(index, emit_ofs + 0));
          break;
        }
        case 1: {
          DecodeStep0();
          break;
        }
        case 2: {
          DecodeStep1();
          break;
        }
      }
    }
    return ok_;
  }

 private:
  bool RefillTo8() {
    switch (buffer_len_) {
      case 0: {
        return Read1to8Bytes();
      }
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7: {
        return Read1to7Bytes();
      }
    }
    return true;
  }
  bool Read1to8Bytes() {
    switch (end_ - begin_) {
      case 0: {
        return false;
      }
      case 1: {
        Fill1();
        return true;
      }
      case 2: {
        Fill2();
        return true;
      }
      case 3: {
        Fill3();
        return true;
      }
      case 4: {
        Fill4();
        return true;
      }
      case 5: {
        Fill5();
        return true;
      }
      case 6: {
        Fill6();
        return true;
      }
      case 7: {
        Fill7();
        return true;
      }
      default: {
        Fill8();
        return true;
      }
    }
  }
  void Fill1() {
    buffer_ = (buffer_ << 8) | (static_cast<uint64_t>(begin_[0]) << 0);
    begin_ += 1;
    buffer_len_ += 8;
  }
  void Fill2() {
    buffer_ = (buffer_ << 16) | (static_cast<uint64_t>(begin_[0]) << 8) |
              (static_cast<uint64_t>(begin_[1]) << 0);
    begin_ += 2;
    buffer_len_ += 16;
  }
  void Fill3() {
    buffer_ = (buffer_ << 24) | (static_cast<uint64_t>(begin_[0]) << 16) |
              (static_cast<uint64_t>(begin_[1]) << 8) |
              (static_cast<uint64_t>(begin_[2]) << 0);
    begin_ += 3;
    buffer_len_ += 24;
  }
  void Fill4() {
    buffer_ = (buffer_ << 32) | (static_cast<uint64_t>(begin_[0]) << 24) |
              (static_cast<uint64_t>(begin_[1]) << 16) |
              (static_cast<uint64_t>(begin_[2]) << 8) |
              (static_cast<uint64_t>(begin_[3]) << 0);
    begin_ += 4;
    buffer_len_ += 32;
  }
  void Fill5() {
    buffer_ = (buffer_ << 40) | (static_cast<uint64_t>(begin_[0]) << 32) |
              (static_cast<uint64_t>(begin_[1]) << 24) |
              (static_cast<uint64_t>(begin_[2]) << 16) |
              (static_cast<uint64_t>(begin_[3]) << 8) |
              (static_cast<uint64_t>(begin_[4]) << 0);
    begin_ += 5;
    buffer_len_ += 40;
  }
  void Fill6() {
    buffer_ = (buffer_ << 48) | (static_cast<uint64_t>(begin_[0]) << 40) |
              (static_cast<uint64_t>(begin_[1]) << 32) |
              (static_cast<uint64_t>(begin_[2]) << 24) |
              (static_cast<uint64_t>(begin_[3]) << 16) |
              (static_cast<uint64_t>(begin_[4]) << 8) |
              (static_cast<uint64_t>(begin_[5]) << 0);
    begin_ += 6;
    buffer_len_ += 48;
  }
  void Fill7() {
    buffer_ = (buffer_ << 56) | (static_cast<uint64_t>(begin_[0]) << 48) |
              (static_cast<uint64_t>(begin_[1]) << 40) |
              (static_cast<uint64_t>(begin_[2]) << 32) |
              (static_cast<uint64_t>(begin_[3]) << 24) |
              (static_cast<uint64_t>(begin_[4]) << 16) |
              (static_cast<uint64_t>(begin_[5]) << 8) |
              (static_cast<uint64_t>(begin_[6]) << 0);
    begin_ += 7;
    buffer_len_ += 56;
  }
  void Fill8() {
    buffer_ = 0 | (static_cast<uint64_t>(begin_[0]) << 56) |
              (static_cast<uint64_t>(begin_[1]) << 48) |
              (static_cast<uint64_t>(begin_[2]) << 40) |
              (static_cast<uint64_t>(begin_[3]) << 32) |
              (static_cast<uint64_t>(begin_[4]) << 24) |
              (static_cast<uint64_t>(begin_[5]) << 16) |
              (static_cast<uint64_t>(begin_[6]) << 8) |
              (static_cast<uint64_t>(begin_[7]) << 0);
    begin_ += 8;
    buffer_len_ += 64;
  }
  bool Read1to7Bytes() {
    switch (end_ - begin_) {
      case 0: {
        return false;
      }
      case 1: {
        Fill1();
        return true;
      }
      case 2: {
        Fill2();
        return true;
      }
      case 3: {
        Fill3();
        return true;
      }
      case 4: {
        Fill4();
        return true;
      }
      case 5: {
        Fill5();
        return true;
      }
      case 6: {
        Fill6();
        return true;
      }
      default: {
        Fill7();
        return true;
      }
    }
  }
  void Done0() {
    done_ = true;
    switch (end_ - begin_) {}
    switch (buffer_len_) {
      case 1:
      case 2:
      case 3:
      case 4: {
        ok_ = (buffer_ & ((1 << buffer_len_) - 1)) == (1 << buffer_len_) - 1;
        return;
      }
      case 5: {
        const auto index = buffer_ & 31;
        const auto op = GetOp2(index);
        switch (op & 3) {
          case 0: {
            sink_(GetEmit2(index, (op >> 2) + 0));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
        }
        return;
      }
      case 6: {
        const auto index = buffer_ & 63;
        const auto op = GetOp3(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit3(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 7: {
        const auto index = buffer_ & 127;
        const auto op = GetOp4(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit4(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 0: {
        return;
      }
    }
  }
  void DecodeStep0() {
    if (!RefillTo2()) {
      Done1();
      return;
    }
    const auto index = (buffer_ >> (buffer_len_ - 2)) & 0x3;
    const auto op = GetOp5(index);
    const int consumed = op & 3;
    buffer_len_ -= consumed;
    const auto emit_ofs = op >> 2;
    sink_(GetEmit5(index, emit_ofs + 0));
  }
  bool RefillTo2() {
    switch (buffer_len_) {
      case 0: {
        return Read1to8Bytes();
      }
      case 1: {
        return Read1to7Bytes();
      }
    }
    return true;
  }
  void Done1() {
    done_ = true;
    switch (buffer_len_) {
      case 1:
      case 0: {
        ok_ = false;
        return;
      }
    }
  }
  void DecodeStep1() {
    if (!RefillTo8()) {
      Done2();
      return;
    }
    const auto index = (buffer_ >> (buffer_len_ - 8)) & 0xff;
    const auto op = GetOp6(index);
    const int consumed = op & 15;
    buffer_len_ -= consumed;
    const auto emit_ofs = op >> 6;
    switch ((op >> 4) & 3) {
      case 0: {
        sink_(GetEmit6(index, emit_ofs + 0));
        break;
      }
      case 1: {
        DecodeStep2();
        break;
      }
      case 2: {
        DecodeStep3();
        break;
      }
    }
  }
  void Done2() {
    done_ = true;
    switch (end_ - begin_) {}
    switch (buffer_len_) {
      case 1: {
        ok_ = (buffer_ & ((1 << buffer_len_) - 1)) == (1 << buffer_len_) - 1;
        return;
      }
      case 2: {
        const auto index = buffer_ & 3;
        const auto op = GetOp7(index);
        switch (op & 3) {
          case 0: {
            sink_(GetEmit7(index, (op >> 2) + 0));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
        }
        return;
      }
      case 3: {
        const auto index = buffer_ & 7;
        const auto op = GetOp8(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit8(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 4: {
        const auto index = buffer_ & 15;
        const auto op = GetOp9(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit9(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 5: {
        const auto index = buffer_ & 31;
        const auto op = GetOp10(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit10(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 6: {
        const auto index = buffer_ & 63;
        const auto op = GetOp11(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit11(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 7: {
        const auto index = buffer_ & 127;
        const auto op = GetOp12(index);
        switch (op & 3) {
          case 0: {
            sink_(GetEmit12(index, (op >> 2) + 0));
            sink_(GetEmit12(index, (op >> 2) + 1));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
          case 2: {
            sink_(GetEmit12(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 0: {
        return;
      }
    }
  }
  void DecodeStep2() {
    if (!RefillTo5()) {
      Done3();
      return;
    }
    const auto index = (buffer_ >> (buffer_len_ - 5)) & 0x1f;
    const auto op = GetOp13(index);
    const int consumed = op & 7;
    buffer_len_ -= consumed;
    const auto emit_ofs = op >> 3;
    sink_(GetEmit13(index, emit_ofs + 0));
  }
  bool RefillTo5() {
    switch (buffer_len_) {
      case 0: {
        return Read1to8Bytes();
      }
      case 1:
      case 2:
      case 3:
      case 4: {
        return Read1to7Bytes();
      }
    }
    return true;
  }
  void Done3() {
    done_ = true;
    switch (buffer_len_) {
      case 1:
      case 2:
      case 0: {
        ok_ = false;
        return;
      }
      case 3: {
        const auto index = buffer_ & 7;
        const auto op = GetOp14(index);
        switch (op & 1) {
          case 0: {
            sink_(GetEmit14(index, (op >> 1) + 0));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
        }
        return;
      }
      case 4: {
        const auto index = buffer_ & 15;
        const auto op = GetOp15(index);
        switch (op & 1) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit15(index, (op >> 1) + 0));
            break;
          }
        }
        return;
      }
    }
  }
  void DecodeStep3() {
    if (!RefillTo14()) {
      Done4();
      return;
    }
    const auto index = (buffer_ >> (buffer_len_ - 14)) & 0x3fff;
    const auto op = GetOp16(index);
    const int consumed = op & 15;
    buffer_len_ -= consumed;
    const auto emit_ofs = op >> 5;
    switch ((op >> 4) & 1) {
      case 0: {
        sink_(GetEmit16(index, emit_ofs + 0));
        break;
      }
      case 1: {
        begin_ = end_;
        buffer_len_ = 0;
        break;
      }
    }
  }
  bool RefillTo14() {
    switch (buffer_len_) {
      case 0: {
        return Read2to8Bytes();
      }
      case 1:
      case 2:
      case 3:
      case 4:
      case 5: {
        return Read2to7Bytes();
      }
      case 6:
      case 7:
      case 8: {
        return Read1to7Bytes();
      }
      case 9:
      case 10:
      case 11:
      case 12:
      case 13: {
        return Read1to6Bytes();
      }
    }
    return true;
  }
  bool Read2to8Bytes() {
    switch (end_ - begin_) {
      case 0:
      case 1: {
        return false;
      }
      case 2: {
        Fill2();
        return true;
      }
      case 3: {
        Fill3();
        return true;
      }
      case 4: {
        Fill4();
        return true;
      }
      case 5: {
        Fill5();
        return true;
      }
      case 6: {
        Fill6();
        return true;
      }
      case 7: {
        Fill7();
        return true;
      }
      default: {
        Fill8();
        return true;
      }
    }
  }
  bool Read2to7Bytes() {
    switch (end_ - begin_) {
      case 0:
      case 1: {
        return false;
      }
      case 2: {
        Fill2();
        return true;
      }
      case 3: {
        Fill3();
        return true;
      }
      case 4: {
        Fill4();
        return true;
      }
      case 5: {
        Fill5();
        return true;
      }
      case 6: {
        Fill6();
        return true;
      }
      default: {
        Fill7();
        return true;
      }
    }
  }
  bool Read1to6Bytes() {
    switch (end_ - begin_) {
      case 0: {
        return false;
      }
      case 1: {
        Fill1();
        return true;
      }
      case 2: {
        Fill2();
        return true;
      }
      case 3: {
        Fill3();
        return true;
      }
      case 4: {
        Fill4();
        return true;
      }
      case 5: {
        Fill5();
        return true;
      }
      default: {
        Fill6();
        return true;
      }
    }
  }
  void Done4() {
    done_ = true;
    switch (end_ - begin_) {
      case 1: {
        Fill1();
        break;
      }
    }
    switch (buffer_len_) {
      case 1:
      case 2:
      case 3:
      case 4: {
        ok_ = (buffer_ & ((1 << buffer_len_) - 1)) == (1 << buffer_len_) - 1;
        return;
      }
      case 5: {
        const auto index = buffer_ & 31;
        const auto op = GetOp17(index);
        switch (op & 3) {
          case 0: {
            sink_(GetEmit17(index, (op >> 2) + 0));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
        }
        return;
      }
      case 6: {
        const auto index = buffer_ & 63;
        const auto op = GetOp18(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit18(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 7: {
        const auto index = buffer_ & 127;
        const auto op = GetOp19(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit19(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 8: {
        const auto index = buffer_ & 255;
        const auto op = GetOp20(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit20(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 9: {
        const auto index = buffer_ & 511;
        const auto op = GetOp21(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit21(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 10: {
        const auto index = buffer_ & 1023;
        const auto op = GetOp22(index);
        switch (op & 3) {
          case 0: {
            sink_(GetEmit22(index, (op >> 2) + 0));
            sink_(GetEmit22(index, (op >> 2) + 1));
            break;
          }
          case 1: {
            ok_ = false;
            break;
          }
          case 2: {
            sink_(GetEmit22(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 11: {
        const auto index = buffer_ & 2047;
        const auto op = GetOp23(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit23(index, (op >> 2) + 0));
            sink_(GetEmit23(index, (op >> 2) + 1));
            break;
          }
          case 2: {
            sink_(GetEmit23(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 12: {
        const auto index = buffer_ & 4095;
        const auto op = GetOp24(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit24(index, (op >> 2) + 0));
            sink_(GetEmit24(index, (op >> 2) + 1));
            break;
          }
          case 2: {
            sink_(GetEmit24(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 13: {
        const auto index = buffer_ & 8191;
        const auto op = GetOp25(index);
        switch (op & 3) {
          case 0: {
            ok_ = false;
            break;
          }
          case 1: {
            sink_(GetEmit25(index, (op >> 2) + 0));
            sink_(GetEmit25(index, (op >> 2) + 1));
            break;
          }
          case 2: {
            sink_(GetEmit25(index, (op >> 2) + 0));
            break;
          }
        }
        return;
      }
      case 0: {
        return;
      }
    }
  }
  F sink_;
  const uint8_t* begin_;
  const uint8_t* const end_;
  uint64_t buffer_ = 0;
  int buffer_len_ = 0;
  bool ok_ = true;
  bool done_ = false;
};
}  // namespace geometry_8_8_14
}  // namespace grpc_core
#endif  // GRPC_TEST_CPP_MICROBENCHMARKS_HUFFMAN_GEOMETRIES_DECODE_HUFF_8_8_14_H
