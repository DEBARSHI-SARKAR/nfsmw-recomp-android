/* speed.exe 005c3080 FUN_005c3080; analysis pseudocode, not buildable source.
 * calls 005bf230 FUN_005bf230
 * calls 005c1c40 FUN_005c1c40
 */

undefined4 * FUN_005c3080(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  puVar2 = (undefined4 *)FUN_005c1c40();
  iVar7 = 0;
  puVar2[1] = 0xabadcafe;
  puVar2[2] = 0xabadcafe;
  *puVar2 = &PTR_FUN_008a2cec;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_005bf230(*(undefined4 *)(param_1 + 0x18));
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 != 0) {
    param_1 = 0;
    do {
      pbVar3 = (byte *)(puVar2[8] + param_1);
      *pbVar3 = *(byte *)(iVar6 + 0x14);
      pbVar3[1] = *(byte *)(iVar6 + 0x18);
      pbVar3[2] = (&DAT_008f56a8)[(uint)*pbVar3 * 4];
      pbVar3[3] = *(byte *)(puVar2 + 5) & 3;
      pbVar3[7] = (byte)iVar7;
      pbVar3[0x14] = 0xff;
      pbVar3[0x15] = 0xff;
      pbVar3[0x16] = 0xff;
      pbVar3[0x17] = 0xff;
      uVar5 = *(uint *)(iVar6 + 0x18);
      if ((uVar5 != 0) && (*(byte **)(iVar6 + 0x20) != (byte *)0x0)) {
        pbVar8 = *(byte **)(iVar6 + 0x20);
        pbVar3 = pbVar3 + 0x18;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar3 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar3 = pbVar3 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar3 = pbVar3 + 1;
        }
      }
      puVar1 = (uint *)(iVar6 + 0x18);
      iVar6 = *(int *)(iVar6 + 4);
      iVar7 = iVar7 + (*puVar1 >> 2);
      param_1 = param_1 + 0x38;
    } while (iVar6 != 0);
  }
  return puVar2;
}

