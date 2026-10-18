/* speed.exe 0065be10 FUN_0065be10; analysis pseudocode, not buildable source.
 * calls 00467a80 FUN_00467a80
 * calls 0065ba40 FUN_0065ba40
 * calls 0065b980 FUN_0065b980
 * calls 0065bb50 FUN_0065bb50
 * calls 0065bc40 FUN_0065bc40
 * calls 0065b8c0 FUN_0065b8c0
 * calls 0065bd30 FUN_0065bd30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0065be10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008a8a90;
  FUN_00467a80(1,0x3f800000);
  FUN_00467a80(1,0x3f800000);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x136) = 1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((int)param_1 + 0x162) = 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x59] = 0x3f800000;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_0065b8c0(0,0,0);
  FUN_0065ba40(0,0,0);
  FUN_0065bb50(0,0,0);
  FUN_0065bd30(0,0,0);
  param_1[0x43] = 0x3f800000;
  if (param_1[0x45] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x4d) = 2;
  }
  param_1[0x4e] = 0x3f800000;
  if (param_1[0x50] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x58) = 2;
  }
  param_1[0x44] = 0;
  if (_DAT_00890968 != (float)param_1[0x46]) {
    *(undefined2 *)(param_1 + 0x4d) = 2;
  }
  param_1[0x4f] = 0;
  if (_DAT_00890968 != (float)param_1[0x51]) {
    *(undefined2 *)(param_1 + 0x58) = 2;
  }
  param_1[0x59] = 0x3f800000;
  FUN_0065b980(0,0,0);
  param_1[4] = 0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  FUN_0065bc40(0,0,0);
  param_1[0x45] = 0x3f800000;
  if (param_1[0x43] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x4d) = 2;
  }
  param_1[0x50] = 0x3f800000;
  if (param_1[0x4e] != 0x3f800000) {
    *(undefined2 *)(param_1 + 0x58) = 2;
  }
  param_1[10] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  param_1[0x4c] = 0x3f800000;
  param_1[0x57] = 0x3f800000;
  return param_1;
}

