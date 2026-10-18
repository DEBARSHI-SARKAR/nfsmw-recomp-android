/* speed.exe 00502980 FUN_00502980; analysis pseudocode, not buildable source.
 * calls 006cfa10 FUN_006cfa10
 */

void __thiscall FUN_00502980(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 4);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = piVar2;
  *(int **)(iVar1 + 4) = piVar2;
  piVar2[1] = param_1 + 0x44;
  *piVar2 = iVar1;
  FUN_006cfa10();
  return;
}

