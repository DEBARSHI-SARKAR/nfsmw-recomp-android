/* speed.exe 0047ab00 FUN_0047ab00; analysis pseudocode, not buildable source.
 * calls 00470890 FUN_00470890
 * calls 00475350 FUN_00475350
 */

undefined4 * __thiscall
FUN_0047ab00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470890(param_2,7);
  *param_1 = &PTR_LAB_00894d60;
  param_1[0x27] = 0xbf800000;
  param_1[0x2a] = 0xc0c00000;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x26] = 0x40400000;
  param_1[0x29] = 0x40400000;
  param_1[0x2b] = 0x40400000;
  param_1[0x2e] = 0x40400000;
  param_1[0x24] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x25] = 0xc0400000;
  param_1[0x2f] = 0xc0400000;
  param_1[0x44] = 0;
  param_1[0x4e] = 0x40400000;
  param_1[0x51] = 0x40400000;
  param_1[0x53] = 0x40400000;
  param_1[0x56] = 0x40400000;
  param_1[0x48] = 0;
  param_1[0x4c] = 0x3f800000;
  param_1[0x4d] = 0xc0400000;
  param_1[0x4f] = 0xbf800000;
  param_1[0x50] = 0;
  param_1[0x52] = 0xc0c00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0xc0400000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x3f800000;
  param_1[0x6c] = 0;
  param_1[0x76] = 0x40400000;
  param_1[0x79] = 0x40400000;
  param_1[0x7b] = 0x40400000;
  param_1[0x7e] = 0x40400000;
  param_1[0x70] = 0;
  param_1[0x74] = 0x3f800000;
  param_1[0x75] = 0xc0400000;
  param_1[0x77] = 0xbf800000;
  param_1[0x78] = 0;
  param_1[0x7a] = 0xc0c00000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0xc0400000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0x3f800000;
  param_1[0x95] = param_3;
  param_1[0x94] = 0;
  local_4 = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)((int)param_1 + 0x282) = 1;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined1 *)((int)param_1 + 0x285) = 1;
  *(undefined1 *)(param_1 + 0xa1) = param_4;
  FUN_00475350();
  ExceptionList = local_c;
  return param_1;
}

