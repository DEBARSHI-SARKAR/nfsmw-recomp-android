/* speed.exe 0066b020 FUN_0066b020; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0066b020(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 == 0) {
    return -1;
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0xd8) * 0x10 + 8 + iVar2;
  uVar7 = (uint)*(byte *)(iVar1 + 0xe);
  iVar3 = -1;
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar6 = (uint)*(byte *)(iVar1 + 0xf);
    piVar5 = (int *)(uVar6 * 0x10 + 8 + iVar2);
    while (*piVar5 != *param_2) {
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
      if (uVar7 <= uVar4) {
        return iVar3;
      }
    }
    iVar3 = uVar6 + uVar4;
  }
  return iVar3;
}

