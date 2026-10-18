/* speed.exe 0075a130 FUN_0075a130; analysis pseudocode, not buildable source.
 * calls 00506af0 FUN_00506af0
 * calls 005e29f0 FUN_005e29f0
 * calls 00466340 FUN_00466340
 */

undefined4 * __thiscall
FUN_0075a130(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088116b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00466340(DAT_00915fb4);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_00506af0(param_2);
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  local_4 = 0xffffffff;
  param_1[2] = iVar2;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  param_1[0xc] = 0;
  if (param_3 != 0) {
    FUN_005e29f0(param_3);
  }
  *DAT_009b0f94 = param_1;
  puVar1 = param_1;
  param_1[1] = DAT_009b0f94;
  DAT_009b0f94 = puVar1;
  *param_1 = &DAT_009b0f90;
  *(undefined1 *)((int)param_1 + 0x2b) = param_4;
  ExceptionList = local_c;
  return param_1;
}

