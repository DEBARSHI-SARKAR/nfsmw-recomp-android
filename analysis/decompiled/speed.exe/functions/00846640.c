/* speed.exe 00846640 FUN_00846640; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a630 FUN_0083a630
 * calls 0083b110 FUN_0083b110
 * calls 0083ad80 FUN_0083ad80
 * calls 0083abc0 FUN_0083abc0
 * calls 008461e0 FUN_008461e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_00846640(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined4 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  int local_154;
  byte local_150;
  char local_14f;
  undefined1 local_14e;
  char *local_14c;
  uint local_148;
  byte local_144 [64];
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_14c = (char *)(param_3 + 0x35);
  *local_14c = '\0';
  *(undefined1 *)(param_3 + 0xf7) = 0;
  *(undefined1 *)(param_3 + 0xf4) = 0;
  *(undefined1 *)(param_3 + 0x21) = 0;
  uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_0089da48,local_144,0x40,&DAT_00890978);
  FUN_0083b210(uVar4);
  local_154 = 0;
  do {
    pbVar5 = (&PTR_DAT_0090d370)[local_154];
    pbVar10 = local_144;
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_008466e4:
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_008466e9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_008466e4;
      pbVar5 = pbVar5 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_008466e9:
    if (iVar6 == 0) {
      *(undefined1 *)(param_3 + 0xf7) = (undefined1)local_154;
      break;
    }
    local_154 = local_154 + 1;
  } while (local_154 < 7);
  uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008c6eb8,0);
  iVar6 = FUN_0083abc0(uVar4);
  bVar12 = iVar6 == 0;
  uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008c6eb0,param_3 + 0x85,0x29,
                       &DAT_00890978);
  FUN_0083b210(uVar4);
  iVar6 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008b6dc0);
  if (iVar6 == 0) {
    *(uint *)(param_3 + 0xf8) = *(uint *)(param_3 + 0xf8) & 0xffffdfff;
    *(undefined1 *)(param_3 + 0xae) = 0;
  }
  else {
    *(uint *)(param_3 + 0xf8) = *(uint *)(param_3 + 0xf8) | 0x2000;
    uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008c6ea8,param_3 + 0xae,0x40,
                         &DAT_00890978);
    FUN_0083b210(uVar4);
  }
  uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008b6d8c,local_104,0x100,&DAT_00890978);
  FUN_0083b210(uVar4);
  uVar4 = FUN_0083a670(local_104,&DAT_008c6ea4,0);
  uVar4 = FUN_0083abc0(uVar4);
  *(undefined4 *)(param_3 + 0xf0) = uVar4;
  *(uint *)(param_3 + 0xf8) = *(uint *)(param_3 + 0xf8) & 0xffffefff;
  uVar4 = FUN_0083a670(*(undefined4 *)(param_2 + 0x14),&DAT_008b6e64,0);
  uVar7 = FUN_0083ad80(uVar4);
  pcVar2 = local_14c;
  *(uint *)(param_3 + 0xf8) = *(uint *)(param_3 + 0xf8) | (uVar7 & 0x400) << 2;
  FUN_0083b210(iVar6,local_14c,0x50,&DAT_00890978);
  if (*pcVar2 != '\0') {
    FUN_008461e0(*(undefined4 *)(param_1 + 0x1b0),param_3 + 0x21,0x14);
    *(undefined1 *)(param_3 + 0xf4) = *(undefined1 *)(param_1 + 0x52d);
    *(undefined1 *)(param_3 + 0xf5) = *(undefined1 *)(param_1 + 0x52c);
    *(undefined1 *)(param_3 + 0xf6) = 0;
    FUN_0083b210(iVar6,local_14c,0x50,&DAT_00890978);
    return bVar12;
  }
  uVar4 = FUN_0083a670(local_104,&DAT_008b68e8,0);
  local_14c = (char *)FUN_0083b110(uVar4);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x528)) {
    pcVar11 = (char *)(param_1 + 0x52c);
    do {
      local_150 = pcVar11[1];
      local_14f = *pcVar11;
      local_14e = 0;
      iVar8 = FUN_0083a670(local_104,&local_150);
      if (iVar8 != 0) {
        FUN_0083b210(iVar8,pcVar2,0x50,&DAT_00890978);
        *(byte *)(param_3 + 0xf4) = local_150;
        *(char *)(param_3 + 0xf5) = local_14f;
        *(undefined1 *)(param_3 + 0xf6) = 0;
        iVar6 = 0;
        local_148 = (uint)local_150 << 8 | CONCAT22(extraout_var,(short)local_14f);
        if (DAT_009c36ec != 0) {
          puVar9 = &DAT_009c36ec;
          iVar8 = DAT_009c36ec;
          do {
            if ((char *)iVar8 == local_14c) {
              iVar8 = 0;
              do {
                if (*(short *)(local_144 + iVar8 * 2 + -4) == *(short *)(puVar9 + 1)) {
                  FUN_0083a630(param_3 + 0x21,0x14,*(undefined4 *)(iVar6 * 0xc + 0x9c36f4));
                  goto LAB_008469e7;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 1);
            }
            iVar8 = puVar9[3];
            puVar9 = puVar9 + 3;
            iVar6 = iVar6 + 1;
          } while (iVar8 != 0);
        }
        break;
      }
      iVar6 = iVar6 + 1;
      pcVar11 = pcVar11 + 2;
    } while (iVar6 < *(int *)(param_1 + 0x528));
  }
LAB_008469e7:
  if (*(char *)(param_3 + 0xf4) != '\0') {
    return bVar12;
  }
  uVar3 = FUN_008461e0(local_14c,param_3 + 0x21,0x14);
  *(char *)(param_3 + 0xf5) = (char)uVar3;
  *(undefined1 *)(param_3 + 0xf6) = 0;
  *(char *)(param_3 + 0xf4) = (char)((ushort)uVar3 >> 8);
  return bVar12;
}

