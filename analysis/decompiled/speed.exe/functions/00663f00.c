/* speed.exe 00663f00 FUN_00663f00; analysis pseudocode, not buildable source.
 * calls 00658ee0 FUN_00658ee0
 * calls 006626b0 FUN_006626b0
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_00663f00(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xc];
    while (iVar1 == 0) {
      FUN_006626b0();
      iVar1 = param_1[0xc];
    }
    piVar2 = (int *)param_1[1];
    iVar1 = *param_1;
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00658ee0();
    FUN_00463ca0(DAT_00925878,param_1);
  }
  return;
}

