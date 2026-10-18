/* speed.exe 0077cb70 FUN_0077cb70; analysis pseudocode, not buildable source.
 */

void FUN_0077cb70(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_3 - param_2) / 0x28;
  while (iVar2 = iVar3, 0 < iVar2) {
    iVar3 = iVar2 / 2;
    iVar1 = param_2 + iVar3 * 0x28;
    if (*(float *)(iVar1 + 0x24) <= *(float *)(param_4 + 0x24)) {
      param_2 = iVar1 + 0x28;
      iVar3 = iVar2 + (-1 - iVar3);
    }
  }
  *param_1 = param_2;
  return;
}

