/* speed.exe 00500b00 FUN_00500b00; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int * __thiscall FUN_00500b00(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x18);
  piVar1 = (int *)(param_1 + 0x18);
  while( true ) {
    if (piVar2 == piVar1) {
      return (int *)0x0;
    }
    iVar4 = FUN_00460d20(param_2,piVar2[2]);
    if (iVar4 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  iVar4 = *piVar2;
  piVar3 = (int *)piVar2[1];
  *piVar3 = iVar4;
  *(int **)(iVar4 + 4) = piVar3;
  iVar4 = *piVar1;
  *piVar1 = (int)piVar2;
  *(int **)(iVar4 + 4) = piVar2;
  piVar2[1] = (int)piVar1;
  *piVar2 = iVar4;
  return piVar2;
}

