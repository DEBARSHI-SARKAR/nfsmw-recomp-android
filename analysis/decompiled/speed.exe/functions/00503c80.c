/* speed.exe 00503c80 FUN_00503c80; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 0045d3a0 FUN_0045d3a0
 */

void __thiscall FUN_00503c80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0045d3a0(param_2);
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x37c);
    *puVar1 = param_2;
    *(int **)(param_1 + 0x37c) = param_2;
    param_2[1] = (int)puVar1;
    *param_2 = param_1 + 0x378;
    *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
    iVar2 = FUN_00452940();
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + iVar2;
  }
  return;
}

