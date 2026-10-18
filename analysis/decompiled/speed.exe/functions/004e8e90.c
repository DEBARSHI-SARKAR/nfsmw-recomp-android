/* speed.exe 004e8e90 FUN_004e8e90; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e3380 FUN_004e3380
 * calls 004e3350 FUN_004e3350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e8e90(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int local_14;
  
  if ((char)param_1[1] != '\0') {
    if ((int)(((int)&DAT_0091429c - *param_1) + ((int)&DAT_0091429c - *param_1 >> 0x1f & 3U)) >> 2 <
        param_1[2]) {
      *param_1 = (int)&DAT_00914298;
    }
    iVar1 = *(int *)(DAT_00911fa8 + 0x84);
    uVar7 = (uint)param_1[5] >> 8 & 0xff;
    iVar13 = *(int *)(iVar1 + 0x28);
    if ((param_1[4] <= *(int *)(iVar13 + 4 + uVar7 * 4)) &&
       (*(int *)(*(int *)(iVar13 + 0x5c) + uVar7 * 4) != 0)) {
      *(int *)*param_1 = param_1[5];
      iVar13 = *param_1;
      *param_1 = iVar13 + 4;
      _DAT_00914af8 = DAT_009259bc + _DAT_00914af8;
      uVar4 = FUN_007c4b80();
      *(undefined4 *)(iVar13 + 4) = uVar4;
      uVar9 = param_1[5];
      puVar8 = (undefined4 *)(*param_1 + 4);
      *param_1 = (int)puVar8;
      if ((uVar9 & 0x10000000) == 0) {
        puVar6 = (undefined4 *)FUN_004e3380(uVar9,param_1[4]);
        *puVar8 = *(undefined4 *)(puVar6[1] + 8);
        *param_1 = *param_1 + 4;
        puVar8 = *(undefined4 **)(puVar6[1] + 4);
        uVar9 = (uint)*(byte *)(*(int *)*puVar6 + 2);
        puVar10 = (uint *)(*(int *)*puVar6 + 0xc);
      }
      else {
        piVar5 = (int *)FUN_004e3350(uVar9,param_1[4]);
        *puVar8 = *(undefined4 *)(piVar5[1] + 4);
        *param_1 = *param_1 + 4;
        uVar9 = ((int *)*piVar5)[2];
        puVar8 = *(undefined4 **)piVar5[1];
        puVar10 = (uint *)(*(int *)*piVar5 + 8);
      }
      puVar11 = (uint *)*param_1;
      local_14 = 0;
      if (0 < (int)uVar9) {
        do {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          if ((uVar2 & 0xe0000000) != 0x80000000) {
            uVar12 = (int)uVar2 >> 0x10 & 0xff;
            if (uVar12 == uVar7) {
              *puVar11 = uVar2;
              iVar13 = *param_1;
              *param_1 = iVar13 + 4;
              *(undefined4 *)(iVar13 + 4) = *(undefined4 *)*puVar8;
              puVar11 = (uint *)(*param_1 + 4);
              puVar8 = puVar8 + 1;
              local_14 = local_14 + 1;
              *param_1 = (int)puVar11;
            }
            else {
              iVar13 = *(int *)(*(int *)(iVar1 + 0x28) + 4 + uVar12 * 4);
              if (0 < iVar13) {
                local_14 = local_14 + iVar13;
                do {
                  *puVar11 = uVar2;
                  iVar3 = *param_1;
                  *param_1 = iVar3 + 4;
                  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)*puVar8;
                  puVar11 = (uint *)(*param_1 + 4);
                  puVar8 = puVar8 + 1;
                  iVar13 = iVar13 + -1;
                  *param_1 = (int)puVar11;
                } while (iVar13 != 0);
              }
            }
          }
        } while (local_14 < (int)uVar9);
      }
      *puVar11 = 0xffff;
      iVar1 = *param_1;
      *param_1 = iVar1 + 4;
      if ((char)param_1[3] != '\0') {
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[2] = iVar1 - 0x914294U >> 2;
      }
    }
    return;
  }
  DAT_00914298 = 0;
  return;
}

