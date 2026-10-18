/* speed.exe 0059bc40 FUN_0059bc40; analysis pseudocode, not buildable source.
 * calls 0059b8a0 FUN_0059b8a0
 * calls 00586290 FUN_00586290
 * calls 005251e0 FUN_005251e0
 */

undefined4 * __thiscall FUN_0059bc40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872e73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e4ac;
  FUN_0059b8a0(param_1[4],"OPTION_MASTER","option_","ICON_SCROLL_REGION",0x43af0000);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)param_1 + 0x129) = 1;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  uVar1 = FUN_005251e0(param_1[4],0x5e7b09c9);
  param_1[0x4b] = uVar1;
  uVar1 = FUN_005251e0(param_1[4],0xdfb7a2e);
  param_1[0x4c] = uVar1;
  uVar1 = FUN_005251e0(param_1[4],0);
  param_1[0x4d] = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  ExceptionList = local_c;
  return param_1;
}

