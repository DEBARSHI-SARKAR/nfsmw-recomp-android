/* speed.exe 00660230 FUN_00660230; analysis pseudocode, not buildable source.
 * calls 0065fe90 FUN_0065fe90
 */

void FUN_00660230(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (DAT_009258d8 != 0) {
        FUN_0065fe90((int)*(char *)(iVar1 + param_1),8,param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

