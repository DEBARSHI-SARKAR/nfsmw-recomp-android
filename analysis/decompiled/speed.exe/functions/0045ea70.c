/* speed.exe 0045ea70 FUN_0045ea70; analysis pseudocode, not buildable source.
 * calls 0045e610 FUN_0045e610
 * calls 006bd900 FUN_006bd900
 */

void FUN_0045ea70(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  undefined4 extraout_EDX;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  local_14c = param_3 * param_3;
  local_138 = param_4;
  local_150 = param_3 * local_14c;
  local_128 = param_5;
  local_148 = param_3;
  local_13c = param_4 * param_4;
  local_110 = 0x40000000;
  local_10c = 0xc0000000;
  local_108 = 0x3f800000;
  local_140 = param_4 * local_13c;
  local_104 = 0x3f800000;
  local_100 = 0xc0400000;
  local_fc = 0x40400000;
  local_f8 = 0xc0000000;
  local_f4 = 0xbf800000;
  local_f0 = 0;
  local_ec = 0;
  local_12c = param_5 * param_5;
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0x3f800000;
  local_130 = param_5 * local_12c;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0x3f800000;
  local_11c = param_6 * param_6;
  local_c0 = 0x3f800000;
  local_bc = 0x3f800000;
  local_b8 = 0x3f800000;
  local_120 = param_6 * local_11c;
  local_b4 = 0x3f800000;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  local_a4 = 0;
  local_a0 = 0x40400000;
  local_9c = 0x40000000;
  local_98 = 0x3f800000;
  local_94 = 0;
  local_144 = 0x3f800000;
  local_134 = 0x3f800000;
  local_124 = 0x3f800000;
  local_118 = param_6;
  local_114 = 0x3f800000;
  FUN_0045e610(local_90,&local_150);
  FUN_006bd900(&local_150,&local_d0,extraout_EDX);
  FUN_006bd900(local_50,&local_110,&local_150);
  FUN_006bd900(param_1,local_50,param_2);
  return;
}

