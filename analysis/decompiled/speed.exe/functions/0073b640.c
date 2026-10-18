/* speed.exe 0073b640 FUN_0073b640; analysis pseudocode, not buildable source.
 * calls 006bed80 FUN_006bed80
 * calls 0073ae60 FUN_0073ae60
 * calls 006bedb0 FUN_006bedb0
 * calls 0073ad90 FUN_0073ad90
 */

/* WARNING: Removing unreachable block (ram,0x0073b6ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0073b640(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  float local_10;
  float local_c;
  uint local_8;
  uint local_4;
  
  puVar6 = (uint *)FUN_006bed80(1);
  iVar7 = FUN_006bed80(0);
  iVar8 = FUN_006bed80(0);
  sVar2 = *(short *)(param_1 + 0x46);
  sVar3 = *(short *)(param_1 + 0x44);
  if (puVar6 < puVar6 + (int)sVar2 * (int)sVar3) {
    puVar11 = puVar6;
    do {
      puVar9 = (uint *)((iVar7 - (int)puVar6) + (int)puVar11);
      bVar1 = *(byte *)((int)puVar9 + (iVar8 - iVar7) + 1);
      *puVar11 = *(uint *)((iVar7 - (int)puVar6) + (int)puVar11);
      uVar4 = *puVar9;
      fVar5 = (float)bVar1 * _DAT_00899dd0;
      local_4 = FUN_0073ad90(uVar4,((uint)CONCAT11((char)(param_4 >> 0x18),(char)param_4) << 8 |
                                   param_4 >> 8 & 0xff) << 8 | param_4 >> 0x10 & 0xff);
      local_10 = _DAT_0089096c - fVar5;
      *puVar11 = local_4;
      local_c = fVar5;
      local_8 = uVar4;
      uVar10 = FUN_0073ae60(&local_8,&local_10,2,0);
      *puVar11 = (uVar10 ^ uVar4) & 0xffffff ^ uVar4;
      puVar11 = puVar11 + 1;
    } while (puVar11 < puVar6 + (int)sVar2 * (int)sVar3);
  }
  FUN_006bedb0(iVar8);
  FUN_006bedb0(iVar7);
  FUN_006bedb0(puVar6);
  return 1;
}

