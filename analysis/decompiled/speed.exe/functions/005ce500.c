/* speed.exe 005ce500 FUN_005ce500; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 005c5d40 FUN_005c5d40
 */

void FUN_005ce500(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int local_10;
  
  if (0 < (int)param_2) {
    piVar5 = _malloc((int)param_2 * 4);
    puVar6 = _malloc((int)param_2 * 4);
    iVar11 = 0;
    if (0 < (int)param_2) {
      local_10 = (int)param_2;
      puVar9 = puVar6;
      puVar4 = (undefined1 *)register0x00000010;
      do {
        *(undefined4 *)(((int)piVar5 - (int)puVar6) + (int)puVar9) = *(undefined4 *)(puVar4 + 0xc);
        *puVar9 = *(undefined4 *)(puVar4 + 0x10);
        puVar9 = puVar9 + 1;
        local_10 = local_10 + -1;
        iVar11 = (int)param_2;
        puVar4 = puVar4 + 8;
      } while (local_10 != 0);
    }
    if (puVar6[iVar11 + -1] + piVar5[iVar11 + -1] < 1) {
      iVar11 = 0;
    }
    else {
      iVar11 = (puVar6[iVar11 + -1] + piVar5[iVar11 + -1] + -1 >> 3) + 1;
    }
    for (pbVar12 = param_1; pbVar12 < param_1 + iVar11; pbVar12 = pbVar12 + 1) {
      bVar1 = *pbVar12;
      *pbVar12 = (byte)((byte)((byte)(bVar1 & 0x40 | bVar1 >> 2) >> 2 | bVar1 & 0x20) >> 2 |
                       bVar1 & 0x10) >> 1 |
                 (((bVar1 & 2 | bVar1 << 2) << 2 | bVar1 & 4) << 2 | bVar1 & 8) << 1;
    }
    if (0 < (int)param_2) {
      local_10 = (int)param_2;
      param_2 = piVar5;
      do {
        uVar2 = *(uint *)(((int)puVar6 - (int)piVar5) + (int)param_2);
        iVar3 = *param_2;
        puVar7 = (uint *)((uint)(param_1 + (uVar2 >> 3)) & 0xfffffffc);
        iVar10 = (int)param_1 * 8 + (int)puVar7 * -8 + uVar2;
        iVar11 = iVar10 + -0x20 + iVar3;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        uVar13 = 0xffffffffU >> (((char)iVar11 - (char)iVar3) + 0x20U & 0x1f) &
                 *puVar7 >> ((byte)iVar10 & 0x1f);
        if (0 < iVar11) {
          uVar13 = uVar13 | puVar7[1] << (0x20U - (char)iVar11 & 0x1f);
        }
        uVar8 = 0;
        iVar11 = 0;
        if (0 < iVar3) {
          do {
            uVar8 = uVar8 * 2 | uVar13 >> ((byte)iVar11 & 0x1f) & 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar3);
        }
        FUN_005c5d40(uVar8,param_1,uVar2,iVar3);
        param_2 = param_2 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    thunk_FUN_007c7250(puVar6);
    thunk_FUN_007c7250(piVar5);
  }
  return;
}

