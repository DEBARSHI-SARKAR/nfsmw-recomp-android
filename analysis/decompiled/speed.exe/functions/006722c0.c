/* speed.exe 006722c0 FUN_006722c0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006698a0 FUN_006698a0
 * calls 005d7930 FUN_005d7930
 * calls 00672220 FUN_00672220
 * calls 00486130 FUN_00486130
 * calls 006fc5f0 FUN_006fc5f0
 * calls 006eec10 FUN_006eec10
 * calls 006f4620 FUN_006f4620
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

undefined4 * __thiscall
FUN_006722c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,char param_9)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a902;
  local_c = ExceptionList;
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + 0x34;
  }
  ExceptionList = &local_c;
  FUN_006fc5f0(param_5,param_3);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 4;
  }
  param_1[0x25] = &PTR_FUN_00890970;
  param_1[0x26] = puVar3;
  FUN_005d7930();
  param_1[0x25] = &PTR_FUN_008a93f4;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 4;
  }
  puVar1 = param_1 + 0x27;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x28] = puVar3;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a93b8;
  local_4._0_1_ = 2;
  FUN_006698a0(param_6);
  *puVar1 = &PTR_LAB_008a9a18;
  *param_1 = &PTR_FUN_008a99f4;
  param_1[2] = &PTR_LAB_008a99ec;
  param_1[0xb] = &PTR_LAB_008a99d0;
  param_1[0xd] = &PTR_LAB_008a9950;
  param_1[0x10] = &PTR_LAB_008a9944;
  param_1[0x25] = &PTR_LAB_008a9928;
  param_1[0x2e] = DAT_008a2fc0;
  param_1[0x2f] = DAT_008a2fc4;
  param_1[0x30] = DAT_008a2fc8;
  param_1[0x31] = DAT_008a2fcc;
  param_1[0x32] = param_7;
  param_1[0x33] = param_2;
  local_4._0_1_ = 3;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = param_8;
  *(undefined2 *)((int)param_1 + 0xda) = 0;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0;
  FUN_006698a0(param_6);
  local_4._0_1_ = 4;
  if (param_9 != '\0') {
    FUN_006eec10();
    local_4._0_1_ = 5;
    FUN_006f4620();
  }
  local_4._0_1_ = 4;
  pcVar2 = (char *)FUN_00454810();
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_006269b0();
  }
  if (*pcVar2 != '\0') {
    FUN_00672220();
  }
  pcVar2 = (char *)FUN_00454810();
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_006269b0();
  }
  if ((*pcVar2 != '\0') && ((*(byte *)((int)param_1 + 0xda) & 1) == 0)) {
    pcVar2 = (char *)FUN_00454810();
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)FUN_006269b0();
    }
    if (*pcVar2 != '\0') {
      FUN_00486130();
      *(byte *)((int)param_1 + 0xda) = *(byte *)((int)param_1 + 0xda) | 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

