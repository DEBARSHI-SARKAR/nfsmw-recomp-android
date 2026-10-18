/* speed.exe 006b47c0 FUN_006b47c0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006b45c0 FUN_006b45c0
 */

undefined4 * __thiscall FUN_006b47c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b45c0(param_2,param_3);
  *param_1 = &PTR_FUN_008ac06c;
  param_1[2] = &PTR_LAB_008ac064;
  param_1[0x13] = &PTR_LAB_008ac05c;
  param_1[0x15] = &PTR_LAB_008ac054;
  param_1[0x26] = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_005d59f0(&LAB_004040d0);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 4))();
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      uVar2 = (**(code **)(*piVar1 + 0x70))();
      param_1[0x26] = uVar2;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

