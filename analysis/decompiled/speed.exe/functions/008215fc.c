/* speed.exe 008215fc FUN_008215fc; analysis pseudocode, not buildable source.
 * calls 008244ac FUN_008244ac
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00821108 FUN_00821108
 */

undefined4 * FUN_008215fc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int local_c;
  undefined4 *local_8;
  
  iVar5 = param_2 * 4;
  if (*(int *)(iVar5 + DAT_009c22fc) == 0) {
    uVar1 = FUN_0081e9e7(0x400);
    *(undefined4 *)(iVar5 + DAT_009c22f4) = uVar1;
  }
  puVar2 = (undefined4 *)FUN_0081e9e7(0x84);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(DAT_009c22fc + iVar5);
    *puVar2 = *puVar3;
    *puVar3 = puVar2;
    puVar6 = param_3;
    puVar3 = puVar2;
    for (iVar4 = 0xe; puVar3 = puVar3 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
    }
    uVar7 = (uint)DAT_009c2318._1_1_;
    pbVar9 = (byte *)(param_3 + 0xe);
    iVar8 = uVar7 - 1;
    iVar4 = FUN_008244ac(puVar2 + uVar7 + 2,4);
    if (iVar4 == 0) {
      iVar4 = FUN_008244ac(puVar2 + uVar7 + 2,4);
      if (iVar4 == 0) {
        local_8 = puVar2 + uVar7 + 2;
        do {
          local_8 = local_8 + -1;
          iVar8 = iVar8 + -1;
          iVar4 = FUN_008244ac(local_8,4);
        } while (iVar4 == 0);
      }
      uVar7 = iVar8 + 1;
    }
    else {
      uVar7 = (uint)DAT_009c2318._1_1_;
    }
    puVar2[0x12] = uVar7;
    puVar2[0x11] = uVar7;
    if (0 < iVar8) {
      local_8 = puVar2 + 9;
      local_c = iVar8;
      do {
        iVar4 = FUN_008244ac(local_8 + -6,4);
        if (0 < iVar4) {
          do {
            pbVar9 = pbVar9 + *(int *)(&DAT_0090c568 + (uint)*pbVar9 * 4);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = FUN_008244ac(local_8,4);
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pbVar9 = pbVar9 + iVar4 * 0xc;
      } while (local_c != 0);
    }
    DAT_009c2304 = pbVar9;
    iVar4 = FUN_008244ac(puVar2 + iVar8 + 3,4);
    if (0 < iVar4) {
      do {
        pbVar9 = pbVar9 + *(int *)(&DAT_0090c568 + (uint)*pbVar9 * 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    DAT_009c2300 = pbVar9;
    FUN_00821108(param_1,param_3,param_2,puVar2);
    DAT_009c2320 = FUN_00820da3;
    *(undefined4 *)(iVar5 + DAT_009c2324) = 1;
  }
  return puVar2;
}

