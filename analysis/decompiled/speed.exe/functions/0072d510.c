/* speed.exe 0072d510 FUN_0072d510; analysis pseudocode, not buildable source.
 * calls 0072d470 FUN_0072d470
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_0072d510(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((undefined4 **)DAT_009aa4d0 != &DAT_009aa4d0) {
    do {
      piVar3 = DAT_009aa4d4;
      iVar1 = *DAT_009aa4d4;
      piVar2 = (int *)DAT_009aa4d4[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_0072d470();
      FUN_00463ca0(DAT_009a39f4,piVar3);
    } while ((undefined4 **)DAT_009aa4d0 != &DAT_009aa4d0);
  }
  return;
}

