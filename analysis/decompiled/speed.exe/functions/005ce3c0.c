/* speed.exe 005ce3c0 FUN_005ce3c0; analysis pseudocode, not buildable source.
 * calls 005c5d40 FUN_005c5d40
 */

void FUN_005ce3c0(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_c;
  
  if (0 < param_2) {
    local_c = param_2;
    puVar5 = (undefined1 *)register0x00000010;
    do {
      iVar3 = *(int *)(puVar5 + 0xc);
      uVar4 = *(uint *)(puVar5 + 0x10);
      puVar6 = (uint *)((uint)(param_1 + (uVar4 >> 3)) & 0xfffffffc);
      iVar8 = (int)param_1 * 8 + (int)puVar6 * -8 + uVar4;
      iVar9 = iVar8 + -0x20 + iVar3;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      uVar10 = 0xffffffffU >> (((char)iVar9 - (char)iVar3) + 0x20U & 0x1f) &
               *puVar6 >> ((byte)iVar8 & 0x1f);
      if (0 < iVar9) {
        uVar10 = uVar10 | puVar6[1] << (0x20U - (char)iVar9 & 0x1f);
      }
      uVar7 = 0;
      iVar9 = 0;
      if (0 < iVar3) {
        do {
          uVar7 = uVar7 * 2 | uVar10 >> ((byte)iVar9 & 0x1f) & 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
      }
      FUN_005c5d40(uVar7,param_1,uVar4,iVar3);
      local_c = local_c + -1;
      puVar5 = puVar5 + 8;
    } while (local_c != 0);
    if ((int)(iVar3 + uVar4) < 1) {
      iVar9 = 0;
    }
    else {
      iVar9 = ((int)(iVar3 + uVar4 + -1) >> 3) + 1;
    }
    pbVar1 = param_1 + iVar9;
    for (; param_1 < pbVar1; param_1 = param_1 + 1) {
      bVar2 = *param_1;
      *param_1 = (byte)((byte)((byte)(bVar2 & 0x40 | bVar2 >> 2) >> 2 | bVar2 & 0x20) >> 2 |
                       bVar2 & 0x10) >> 1 |
                 (((bVar2 & 2 | bVar2 << 2) << 2 | bVar2 & 4) << 2 | bVar2 & 8) << 1;
    }
  }
  return;
}

