/* speed.exe 00477cd0 FUN_00477cd0; analysis pseudocode, not buildable source.
 * calls 00477a10 FUN_00477a10
 * calls 0046a300 FUN_0046a300
 * calls 00477780 FUN_00477780
 * calls 00477b00 FUN_00477b00
 * calls 00477bf0 FUN_00477bf0
 * calls 00477900 FUN_00477900
 * calls 00477840 FUN_00477840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00477cd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00894b4c;
  FUN_0046a300(1,0x3f800000);
  FUN_0046a300(1,0x3f800000);
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
  FUN_00477780(0,0,0);
  FUN_00477900(0,0,0);
  FUN_00477a10(0,0,0);
  FUN_00477bf0(0,0,0);
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
  FUN_00477840(0,0,0);
  param_1[4] = 0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  FUN_00477b00(0,0,0);
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

