/* speed.exe 006ced30 FUN_006ced30; analysis pseudocode, not buildable source.
 */

void FUN_006ced30(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    uVar1 = *(uint *)(param_1 + 4 + iVar3 * 8);
    uVar2 = *(uint *)(param_1 + iVar3 * 8);
    if ((param_5 < uVar1) || ((param_5 <= uVar1 && (param_4 <= uVar2)))) break;
    *(uint *)(param_1 + 4 + param_2 * 8) = uVar1;
    *(uint *)(param_1 + param_2 * 8) = uVar2;
    param_2 = iVar3;
  }
  *(uint *)(param_1 + param_2 * 8) = param_4;
  *(uint *)(param_1 + 4 + param_2 * 8) = param_5;
  return;
}

