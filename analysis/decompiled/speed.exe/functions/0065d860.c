/* speed.exe 0065d860 FUN_0065d860; analysis pseudocode, not buildable source.
 * calls 0065ab20 FUN_0065ab20
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_0065d860(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  do {
    piVar3 = DAT_00925b28;
    if ((int **)DAT_00925b28 == &DAT_00925b28) {
      return;
    }
    while (piVar3[2] != 0) {
      piVar3 = (int *)*piVar3;
      if ((int **)piVar3 == &DAT_00925b28) {
        return;
      }
    }
    piVar1 = (int *)piVar3[1];
    iVar2 = *piVar3;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_0065ab20();
    FUN_00463ca0(DAT_00925914,piVar3);
  } while( true );
}

