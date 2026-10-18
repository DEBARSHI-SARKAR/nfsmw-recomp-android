/* speed.exe 0064c7d0 FUN_0064c7d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0064c7d0(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = (char *)((param_3 - *(int *)(param_1 + 0xc)) + 0x118 + param_1);
  *pcVar1 = param_2[4] * '\x10' + *param_2;
  uVar3 = *(uint *)(param_2 + 8);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      pcVar1[iVar2 + 1] = (char)uVar3;
      uVar3 = uVar3 >> 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  return *(int *)(param_2 + 4) + 1 + param_3;
}

