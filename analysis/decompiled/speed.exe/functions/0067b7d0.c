/* speed.exe 0067b7d0 FUN_0067b7d0; analysis pseudocode, not buildable source.
 * calls 00674d20 FUN_00674d20
 * calls 006b59f0 FUN_006b59f0
 * calls 00674c40 FUN_00674c40
 */

undefined4 * __thiscall FUN_0067b7d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087acd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b59f0(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a98d0;
  param_1[2] = &PTR_LAB_008a98c4;
  param_1[0x12] = &PTR_LAB_008a9818;
  param_1[0x14] = &PTR_LAB_008a9770;
  param_1[0x16] = &PTR_LAB_008a9768;
  param_1[0x18] = &PTR_LAB_008a9730;
  param_1[0x19] = &PTR_FUN_008a972c;
  param_1[0x1a] = &PTR_LAB_008a971c;
  uVar1 = FUN_00674c40(param_1[0xd],0);
  FUN_00674d20(uVar1);
  param_1[0x51] = 0;
  DAT_0092616c = DAT_0092616c + 1;
  ExceptionList = local_c;
  return param_1;
}

