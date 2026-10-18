/* speed.exe 00638ad0 FUN_00638ad0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638ad0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6d18;
  local_4 = 0;
  if (param_1[3] != 0) {
    iVar1 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,param_1[3]);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 4) + 0x68))(param_1 + 2);
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

