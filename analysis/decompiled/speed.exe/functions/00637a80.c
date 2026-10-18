/* speed.exe 00637a80 FUN_00637a80; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004b89d0 FUN_004b89d0
 * calls 0065faf0 FUN_0065faf0
 * calls 005d51f0 FUN_005d51f0
 * calls 004b0e60 FUN_004b0e60
 */

undefined4 * __thiscall FUN_00637a80(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if (param_2 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_2);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x70))();
      param_4 = FUN_004b89d0(uVar2);
      if (param_4 != 0) {
        FUN_005cc240(&DAT_008970d0);
        param_3 = param_1[2];
        FUN_004b0e60(&param_2);
        FUN_0065faf0();
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

