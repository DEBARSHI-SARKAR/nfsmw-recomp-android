/* speed.exe 00829ac0 FUN_00829ac0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00834e6d FUN_00834e6d
 * calls 00834ec8 FUN_00834ec8
 */

undefined4 FUN_00829ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  
  if (DAT_009c2974 != '\0') {
    local_8 = 0;
    iVar1 = FUN_00834e6d(&local_8);
    local_8 = (uint)(iVar1 == 0);
    if (local_8 != 0) {
      uVar2 = 0xfffffff8;
      iVar1 = FUN_0082caa0(param_1);
      if (((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x8000000) == 0)) &&
         (*(int **)(iVar1 + 300) != (int *)0x0)) {
        uVar2 = 0;
        (**(code **)(**(int **)(iVar1 + 300) + 100))(param_2,param_3);
      }
      DAT_009c2964 = 0;
      FUN_00834ec8(1);
      return uVar2;
    }
  }
  return 0xffffffee;
}

