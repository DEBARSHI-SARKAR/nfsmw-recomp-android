/* speed.exe 00747950 FUN_00747950; analysis pseudocode, not buildable source.
 */

void FUN_00747950(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int **)DAT_009b0bc8 != &DAT_009b0bc8) {
    do {
      piVar3 = DAT_009b0bc8;
      iVar1 = *DAT_009b0bc8;
      piVar2 = (int *)DAT_009b0bc8[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      if (piVar3 + -4 != (int *)0x0) {
        (**(code **)piVar3[-4])(1);
      }
    } while ((int **)DAT_009b0bc8 != &DAT_009b0bc8);
  }
  return;
}

