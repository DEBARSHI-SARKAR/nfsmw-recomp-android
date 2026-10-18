/* speed.exe 0078a3a0 FUN_0078a3a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0078a3a0(int param_1,uint *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x404);
  iVar3 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  uVar6 = uVar2 & 0x80000007;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(param_1 + 0x404) = uVar2 + param_3;
  iVar8 = 8 - uVar6;
  if (param_3 < (int)(8 - uVar6)) {
    iVar8 = param_3;
  }
  iVar7 = -iVar8 + 0x18;
  iVar4 = iVar3 + 1;
  iVar9 = param_3 - iVar8;
  *param_2 = (uint)*(byte *)(iVar3 + param_1) << ((char)uVar6 + 0x18U & 0x1f);
  if (0 < iVar7) {
    iVar9 = iVar9 + (-8 - (-iVar8 + 0x17U & 0xfffffff8));
    do {
      pbVar1 = (byte *)(iVar4 + param_1);
      bVar5 = (byte)iVar7;
      iVar7 = iVar7 + -8;
      iVar4 = iVar4 + 1;
      *param_2 = *param_2 | (uint)*pbVar1 << (bVar5 & 0x1f);
    } while (0 < iVar7);
  }
  if (0 < iVar9) {
    *param_2 = *param_2 | (uint)(*(byte *)(iVar4 + param_1) >> (-(char)iVar7 & 0x1fU));
  }
  *param_2 = *param_2 >> (0x20U - (char)param_3 & 0x1f);
  return;
}

