/* speed.exe 00831696 FUN_00831696; analysis pseudocode, not buildable source.
 * calls 00831304 FUN_00831304
 */

int FUN_00831696(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00831304(param_1,0);
  if (-1 < iVar1) {
    piVar2 = *(int **)*param_1;
    if (piVar2 == (int *)0x0) {
      iVar1 = -4;
    }
    else {
      do {
        (*(code *)piVar2[2])(param_2,piVar2[3]);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  return iVar1;
}

