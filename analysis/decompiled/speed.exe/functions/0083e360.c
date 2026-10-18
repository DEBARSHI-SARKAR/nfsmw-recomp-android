/* speed.exe 0083e360 FUN_0083e360; analysis pseudocode, not buildable source.
 * calls 0083e2f0 FUN_0083e2f0
 */

void FUN_0083e360(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar2 = *(int **)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  FUN_0083e2f0(param_1,iVar1);
  return;
}

