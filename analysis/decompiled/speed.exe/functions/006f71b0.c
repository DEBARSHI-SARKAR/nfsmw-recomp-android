/* speed.exe 006f71b0 FUN_006f71b0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006eb5f0 FUN_006eb5f0
 */

undefined1 __fastcall FUN_006f71b0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  if (DAT_009b2c14 != 0) {
    return 0;
  }
  piVar1 = (int *)**(int **)(param_1 + 0x3b0);
  if (piVar1 == *(int **)(param_1 + 0x3b0)) {
    return 1;
  }
  while (((((int *)piVar1[4] == (int *)0x0 || (*(int *)piVar1[4] == 0)) ||
          (piVar3 = (int *)FUN_005d59f0(&LAB_00404ff0), piVar3 == (int *)0x0)) ||
         (cVar2 = (**(code **)(*piVar3 + 8))(), cVar2 != '\0'))) {
    FUN_006eb5f0();
    if (piVar1 == (int *)*(int *)(param_1 + 0x3b0)) {
      return 1;
    }
  }
  return 0;
}

