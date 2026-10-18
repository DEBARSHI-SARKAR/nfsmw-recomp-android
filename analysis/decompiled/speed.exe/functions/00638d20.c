/* speed.exe 00638d20 FUN_00638d20; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638d20(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6db8;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 4) + 8))();
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

