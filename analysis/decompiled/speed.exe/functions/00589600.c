/* speed.exe 00589600 FUN_00589600; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 * __thiscall
FUN_00589600(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc38a0000;
  param_1[8] = 0xc1200000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = param_5;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x61] = param_2;
  param_1[0x62] = param_4;
  *param_1 = &PTR_FUN_008a14d0;
  puVar2 = param_1 + 0x3a;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x13;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  if (param_3 != 0) {
    FUN_00460ca0(param_1 + 0x13,param_3,0x9b);
  }
  ExceptionList = local_c;
  return param_1;
}

