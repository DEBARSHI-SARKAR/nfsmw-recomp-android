/* speed.exe 005b5dc0 FUN_005b5dc0; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

int __thiscall FUN_005b5dc0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_005af1c0(param_2);
  iVar2 = *(int *)((uVar3 % *(uint *)(param_1 + 4)) * 0x10 + 8 + iVar2);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar4 = *(byte **)(*(int *)(iVar2 + 0xc) + 0xc);
    pbVar6 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005b5e24:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005b5e29;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005b5e24;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005b5e29:
    if (iVar5 == 0) {
      return *(int *)(iVar2 + 0xc);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

