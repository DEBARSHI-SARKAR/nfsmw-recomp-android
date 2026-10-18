/* speed.exe 00704e00 FUN_00704e00; analysis pseudocode, not buildable source.
 */

int * __fastcall FUN_00704e00(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00704e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x130) + 0x3c))();
    return piVar3;
  }
  piVar3 = DAT_0092fd5c;
  piVar5 = DAT_0092fd5c;
  if (DAT_0092fd5c != DAT_0092fd5c + DAT_0092fd64) {
    do {
      piVar1 = (int *)*piVar5;
      if (((piVar1 != (int *)0x0) &&
          (piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(), piVar3 = DAT_0092fd5c,
          piVar4 != (int *)0x0)) &&
         (cVar2 = (**(code **)(*piVar4 + 0x8c))(), piVar3 = DAT_0092fd5c, cVar2 != '\0')) {
        return piVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar3 + DAT_0092fd64);
  }
  return (int *)0x0;
}

