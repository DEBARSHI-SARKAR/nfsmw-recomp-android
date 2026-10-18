/* speed.exe 00833382 FUN_00833382; analysis pseudocode, not buildable source.
 * calls 008329be FUN_008329be
 * calls 008332f6 FUN_008332f6
 * calls 00833087 FUN_00833087
 * calls 0083325a FUN_0083325a
 * calls 00832616 FUN_00832616
 * calls 0083300e FUN_0083300e
 * calls 00832634 FUN_00832634
 */

int FUN_00833382(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  iVar9 = 0;
  iVar5 = 0;
  local_8 = 0;
  local_18 = 0;
  bVar2 = false;
  if (0 < *(char *)(param_4 + 4)) {
    pcVar7 = (char *)(param_4 + 0xc);
    do {
      if (*pcVar7 == -2) {
        bVar2 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      pcVar7 = pcVar7 + 8;
    } while (iVar5 < *(char *)(param_4 + 4));
  }
  iVar5 = *(int *)(DAT_009c2c10 + 4 + *(short *)(param_3 + 4) * 8);
  bVar1 = *(byte *)(iVar5 + 5);
  iVar3 = FUN_00832616(iVar5);
  uVar8 = *(byte *)(iVar5 + 4) & 0x7f;
  if ((*(byte *)(iVar5 + 4) & 0x7f) != 0) {
    pbVar10 = (byte *)(param_4 + 0xc);
    do {
      uVar6 = (uint)*pbVar10;
      if ((((uVar6 != 0) && (uVar6 != 0xff)) && (uVar6 != 0xfe)) &&
         ((*(uint *)(param_5 + uVar6 * 4) & *(uint *)(iVar3 + iVar9 * 4)) == 0)) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      pbVar10 = pbVar10 + 8;
    } while (iVar9 < (int)uVar8);
  }
  iVar3 = 0;
  iVar9 = uVar8 + 2;
  local_c = iVar5 + 0xe;
  if (bVar1 != 0) {
    do {
      iVar4 = FUN_00833087(param_2,param_5,local_c);
      if (((iVar4 != 0) && (uVar8 = 1, iVar3 <= (int)(uint)*(byte *)(iVar5 + 5))) &&
         ((*(short *)(param_3 + 6) == -1 || (uVar8 = FUN_0083325a(iVar3), uVar8 != 0)))) {
        if ((*(byte *)(iVar5 + 4) & 0x80) != 0) {
          iVar4 = FUN_00832634(iVar5);
          uVar8 = (uint)(*(byte *)(iVar4 + 1 + iVar3 / 8) & '\x01' << ((byte)(iVar3 % 8) & 0x1f));
        }
        if (uVar8 != 0) {
          iVar4 = FUN_008329be(iVar5,iVar3);
          if (iVar4 < 1) {
            iVar4 = FUN_008332f6(iVar3);
            if (iVar4 != 0) {
              local_8 = local_8 + 1;
            }
            if (bVar2) {
              FUN_0083300e(param_2,local_c);
            }
          }
          else if (local_18 < iVar4) {
            local_18 = iVar4;
            local_10 = iVar3;
          }
        }
      }
      local_c = local_c + iVar9;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)bVar1);
    if ((local_8 == 0) && (local_10 != -1)) {
      iVar3 = FUN_008332f6(local_10);
      if (iVar3 != 0) {
        local_8 = 1;
      }
      if (bVar2) {
        FUN_0083300e(param_2,iVar9 * local_10 + 0xe + iVar5);
      }
    }
  }
  return local_8;
}

