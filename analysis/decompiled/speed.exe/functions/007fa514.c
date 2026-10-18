/* speed.exe 007fa514 FUN_007fa514; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007fa514(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 + 8);
  iVar1 = *piVar4;
  piVar2 = *(int **)(param_2 + 0xc);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  *piVar4 = 0xb;
  *(undefined4 *)(param_2 + 0xc) = 0xb;
  piVar4 = (int *)(-(uint)(param_2 != 0) & (uint)piVar4);
  puVar3 = *(uint **)(param_1 + 0x24);
  *puVar3 = (uint)piVar4;
  *(int **)(param_1 + 0x24) = piVar4;
  piVar4[1] = (int)puVar3;
  *piVar4 = param_1 + 0x20;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}

