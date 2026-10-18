/* speed.exe 005f9c30 FUN_005f9c30; analysis pseudocode, not buildable source.
 * calls 005e6dc0 FUN_005e6dc0
 * calls 005f9480 FUN_005f9480
 * calls 005e8210 FUN_005e8210
 */

undefined4 * __thiscall FUN_005f9c30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875ec3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e8210(param_2,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a3ae0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar1 = FUN_005e6dc0();
  param_1[0xd] = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined4 *)(param_1[0xd] + 4) = param_1[0xd];
  *(undefined4 *)param_1[0xd] = param_1[0xd];
  *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
  param_1[0xe] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  FUN_005f9480();
  ExceptionList = local_c;
  return param_1;
}

