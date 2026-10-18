/* speed.exe 0065f9a0 FUN_0065f9a0; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 0064d7f0 FUN_0064d7f0
 * calls 00463ca0 FUN_00463ca0
 * calls 0065f680 FUN_0065f680
 */

void FUN_0065f9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0065f680(param_1,2,1);
  if (iVar1 != 0) {
    FUN_0064d7f0(param_2,param_3);
    if (0 < *(int *)(iVar1 + 0x20)) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      return;
    }
    FUN_0065ad80();
    FUN_00463ca0(DAT_00925914,iVar1);
  }
  return;
}

