/* speed.exe 005881f0 FUN_005881f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005881f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  *(int *)(param_2 + 0x10) = param_1 + 0x98;
  piVar1 = *(int **)(param_1 + 0xc);
  piVar2 = (int *)(param_2 + 4);
  *piVar1 = (int)piVar2;
  *(int **)(param_1 + 0xc) = piVar2;
  *(int **)(param_2 + 8) = piVar1;
  *piVar2 = param_1 + 8;
  return;
}

