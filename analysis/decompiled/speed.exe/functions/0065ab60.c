/* speed.exe 0065ab60 FUN_0065ab60; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int * FUN_0065ab60(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_00925b28;
  if ((int **)DAT_00925b28 != &DAT_00925b28) {
    do {
      iVar2 = FUN_00460d20(piVar3[5],param_1);
      if (iVar2 == 0) {
        iVar2 = *piVar3;
        piVar1 = (int *)piVar3[1];
        *piVar1 = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
        *DAT_00925b2c = (int)piVar3;
        piVar1 = piVar3;
        piVar3[1] = (int)DAT_00925b2c;
        DAT_00925b2c = piVar1;
        *piVar3 = (int)&DAT_00925b28;
        return piVar3;
      }
      piVar3 = (int *)*piVar3;
    } while ((int **)piVar3 != &DAT_00925b28);
  }
  return (int *)0x0;
}

