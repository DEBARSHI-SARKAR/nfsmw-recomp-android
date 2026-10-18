/* speed.exe 00836b60 FUN_00836b60; analysis pseudocode, not buildable source.
 * calls 0083e460 FUN_0083e460
 * calls 0083e150 FUN_0083e150
 */

int * FUN_00836b60(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return (int *)0x0;
  }
  piVar1 = *(int **)(param_2 + 0x100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)(*(code *)*param_1)(0x14);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    iVar2 = FUN_0083e150(5,5,0);
    FUN_0083e460(iVar2,1);
    piVar1[4] = (int)param_1;
    piVar1[3] = iVar2;
    *piVar1 = param_2;
    *(int **)(param_2 + 0x100) = piVar1;
    iVar2 = param_1[0x15];
    param_1[0x15] = iVar2 + 1;
    *(int *)(param_2 + 0x104) = iVar2 + 1;
  }
  return piVar1;
}

