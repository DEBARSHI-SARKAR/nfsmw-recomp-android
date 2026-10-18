/* speed.exe 008076a3 FUN_008076a3; analysis pseudocode, not buildable source.
 * calls 0081922b FUN_0081922b
 * calls 00819507 FUN_00819507
 */

void FUN_008076a3(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint local_1c;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar4 = param_1;
  iVar8 = *(int *)(param_1 + 0x254);
  uVar6 = *(uint *)(param_1 + 0x80);
  if (*(int *)(&DAT_008c4d50 + *(int *)(param_1 + 8) * 4) == 2) {
    iVar8 = *(int *)(param_1 + 0x24c);
  }
  if ((*(char *)(param_1 + 0x19d) == '\0') || (*(char *)(param_1 + 0x4538) == '\0')) {
    local_14._0_2_ = *(short *)(param_1 + 0x24 + param_3 * 4);
    sVar3 = *(short *)(param_1 + 0x26 + param_3 * 4);
    local_1c = (uint)sVar3;
    local_8 = local_1c & uVar6;
    uVar5 = (uint)(short)local_14;
    uVar7 = uVar5 & uVar6;
    local_c = *(int *)(param_1 + 0x74);
    iVar8 = ((int)(((int)local_1c >> 0x1f & uVar6) + local_1c) >>
            ((byte)*(undefined4 *)(param_1 + 0x7c) & 0x1f)) * *(int *)(param_1 + 0x88) +
            ((int)(((int)uVar5 >> 0x1f & uVar6) + uVar5) >>
            ((byte)*(undefined4 *)(param_1 + 0x7c) & 0x1f)) + *(int *)(param_1 + 0x70) + iVar8;
    param_1 = 0;
    local_10 = 0;
  }
  else {
    psVar2 = (short *)(param_1 + 0x24 + param_3 * 4);
    FUN_00819507(param_1,*(int *)(param_1 + 0x70) + iVar8,(int)*psVar2,
                 (int)*(short *)(param_1 + 0x26 + param_3 * 4));
    local_14._0_2_ = *psVar2;
    sVar3 = *(short *)(param_1 + 0x26 + param_3 * 4);
    puVar1 = (uint *)(param_1 + 0x80);
    iVar8 = *(int *)(param_1 + 0x294);
    local_10 = 0x22;
    param_1 = 0x22;
    uVar5 = (uint)(short)local_14;
    local_1c = (uint)sVar3;
    uVar7 = *puVar1 & uVar5;
    local_8 = *puVar1 & local_1c;
    local_c = 0x10;
  }
  if (uVar7 != 0) {
    param_1 = param_1 + -1 + (uint)(0 < (short)local_14) * 2;
  }
  if (local_8 != 0) {
    param_1 = param_1 + ((uint)(0 < sVar3) * 2 + -1) * local_c;
  }
  if (local_10 == param_1) {
    (*DAT_009c6818)(local_10 + iVar8,param_2,local_c);
  }
  else {
    if (param_3 < 4) {
      local_8 = local_8 << 1;
      uVar7 = uVar7 << 1;
      if (*(char *)(iVar4 + 0x19d) == '\0') {
        bVar9 = false;
      }
      else if (*(char *)(iVar4 + 0x696) == '\x02') {
        if (*(char *)(iVar4 + 0x697) == '\0') {
          local_14 = 0x80;
        }
        else {
          local_14 = (1 << (*(char *)(iVar4 + 0x697) - 1U & 0x1f)) << 2;
        }
        if ((*(char *)(iVar4 + 0x697) == '\0') ||
           (((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) <= local_14 &&
            ((local_1c ^ (int)local_1c >> 0x1f) - ((int)local_1c >> 0x1f) <= local_14)))) {
          if (*(uint *)(iVar4 + 0x698) != 0) {
            uVar6 = FUN_0081922b(local_10 + iVar8,local_c);
            (*DAT_009c681c)(local_10 + iVar8,param_1 + iVar8,param_2,local_c,uVar7,local_8,
                            *(uint *)(iVar4 + 0x698) <= uVar6);
            return;
          }
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
      }
      else {
        bVar9 = *(char *)(iVar4 + 0x696) == '\x01';
      }
    }
    else {
      bVar9 = false;
    }
    (*DAT_009c681c)(local_10 + iVar8,param_1 + iVar8,param_2,local_c,uVar7,local_8,bVar9);
  }
  return;
}

