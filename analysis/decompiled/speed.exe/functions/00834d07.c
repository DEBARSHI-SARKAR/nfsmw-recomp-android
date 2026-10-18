/* speed.exe 00834d07 FUN_00834d07; analysis pseudocode, not buildable source.
 * calls 00831beb FUN_00831beb
 */

bool FUN_00834d07(uint param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  uint local_8;
  
  uVar2 = (*(byte *)(param_1 + 7) + 7) / 8;
  uVar6 = 0;
  local_8 = 0;
  iVar3 = FUN_00831beb(param_1);
  iVar3 = iVar3 + uVar2 * param_2;
  pbVar5 = (byte *)(*(byte *)(param_1 + 6) * uVar2 + iVar3);
  if ((uVar2 < 5) && (uVar2 != 0)) {
    bVar4 = 0x18;
    iVar3 = iVar3 - (int)pbVar5;
    param_1 = uVar2;
    do {
      uVar6 = uVar6 + ((uint)pbVar5[iVar3] << (bVar4 & 0x1f));
      bVar1 = bVar4 & 0x1f;
      bVar4 = bVar4 - 8;
      local_8 = local_8 + ((uint)*pbVar5 << bVar1);
      pbVar5 = pbVar5 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return (local_8 & ~param_4 & param_3) == (uVar6 & local_8 & ~param_4);
}

