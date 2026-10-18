/* speed.exe 0073b470 FUN_0073b470; analysis pseudocode, not buildable source.
 * calls 006bedd0 FUN_006bedd0
 * calls 006bed80 FUN_006bed80
 * calls 0073ae60 FUN_0073ae60
 * calls 006bedb0 FUN_006bedb0
 * calls 006cb650 FUN_006cb650
 * calls 0073ad90 FUN_0073ad90
 * calls 006cb640 FUN_006cb640
 * calls 006bedc0 FUN_006bedc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0073b470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  int local_34;
  float local_18;
  float local_14;
  uint local_10;
  undefined4 local_c;
  
  pcVar4 = (char *)FUN_006bed80(1);
  puVar5 = (uint *)FUN_006bedc0(1);
  iVar6 = FUN_006bed80(0);
  iVar7 = FUN_006bedc0(0);
  iVar8 = FUN_006bed80(0);
  iVar9 = FUN_006bedc0(0);
  FUN_006cb650(puVar5);
  FUN_006cb650(iVar7);
  FUN_006cb650(iVar9);
  local_34 = 0;
  puVar12 = puVar5;
  do {
    iVar13 = 0;
    local_14 = (float)local_34 * _DAT_008a7ddc;
    local_18 = _DAT_0089096c - local_14;
    do {
      uVar3 = *(uint *)(iVar7 + iVar13 * 4);
      local_10 = uVar3;
      local_c = FUN_0073ad90(uVar3,param_4);
      uVar10 = FUN_0073ae60(&local_10,&local_18,2,0);
      *puVar12 = (uVar10 ^ uVar3) & 0xffffff ^ uVar3;
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar13 < 0x10);
    local_34 = local_34 + 1;
  } while (local_34 < 0x10);
  FUN_006cb650(puVar5);
  FUN_006cb650(iVar7);
  FUN_006bedd0(puVar5);
  FUN_006bedd0(iVar7);
  sVar1 = *(short *)(param_1 + 0x46);
  sVar2 = *(short *)(param_1 + 0x44);
  if (pcVar4 < pcVar4 + (int)sVar1 * (int)sVar2) {
    pcVar11 = pcVar4;
    do {
      *pcVar11 = (char)(*(uint *)(iVar9 + (uint)(byte)(pcVar11 + (iVar6 - (int)pcVar4))
                                                      [iVar8 - iVar6] * 4) >> 4) * '\x10' +
                 pcVar11[iVar6 - (int)pcVar4];
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 < pcVar4 + (int)sVar1 * (int)sVar2);
  }
  FUN_006cb640(iVar9);
  FUN_006bedd0(iVar9);
  FUN_006bedb0(iVar8);
  FUN_006bedb0(iVar6);
  FUN_006bedb0(pcVar4);
  return 1;
}

