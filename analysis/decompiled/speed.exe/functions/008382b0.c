/* speed.exe 008382b0 FUN_008382b0; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 00848850 FUN_00848850
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

int FUN_008382b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 3) {
    iVar1 = FUN_00837bf0(param_1,0x200);
    if (*(int *)(param_1 + 0x98) <= iVar1) {
      return -5;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if (((iVar1 != 0) && (*(int **)(iVar1 + 0x100) != (int *)0x0)) &&
       (iVar1 = **(int **)(iVar1 + 0x100), iVar1 != 0)) {
      iVar1 = FUN_00848850(*(undefined4 *)(param_1 + 8),iVar1,param_3,FUN_00836a90,param_1,
                           *(undefined4 *)(param_1 + 0xb0));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        return 0;
      }
      *(int *)(param_1 + 0x10) = iVar1;
      return iVar1;
    }
  }
  return -8;
}

