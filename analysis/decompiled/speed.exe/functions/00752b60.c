/* speed.exe 00752b60 FUN_00752b60; analysis pseudocode, not buildable source.
 * calls 00752a90 FUN_00752a90
 * calls 00739b40 FUN_00739b40
 * calls 00751540 FUN_00751540
 */

int __thiscall FUN_00752b60(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int local_21c;
  int local_218;
  int local_214;
  int *local_210;
  int local_20c;
  int local_208;
  int local_204;
  byte local_200 [512];
  
  puVar9 = param_2;
  for (iVar5 = param_3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  local_20c = *(int *)(iVar5 + 8);
  local_208 = *(int *)(iVar5 + 0xc);
  iVar7 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_20c = *(int *)(iVar5 + 0x10);
    local_208 = *(int *)(iVar5 + 0x14);
  }
  local_210 = (int *)(iVar5 + 0x48);
  local_21c = 0;
  local_204 = param_1;
  do {
    iVar6 = *local_210;
    local_218 = local_20c;
    local_214 = local_208;
    FUN_00739b40(iVar7,&local_218,&local_214,*(int *)(local_204 + 0x10) != 0);
    iVar8 = local_218;
    if (local_218 <= local_214) {
      do {
        if ((iVar6 != 0) && (iVar2 = FUN_00751540(0,iVar8), iVar2 != 0)) {
          if (local_21c < param_3) {
            param_2[local_21c] = iVar2;
          }
          local_21c = local_21c + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= local_214);
    }
    iVar7 = iVar7 + 1;
    local_210 = local_210 + 1;
  } while (iVar7 < 0x4c);
  uVar3 = FUN_00752a90(iVar5,param_2,local_21c,param_3,0x2e,0x33);
  iVar5 = FUN_00752a90(iVar5,param_2,uVar3,param_3,1,0x17);
  if (param_3 < iVar5) {
    iVar5 = param_3;
  }
  pbVar10 = local_200;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10 = pbVar10 + 4;
  }
  iVar7 = 0;
  local_218 = 0;
  if (0 < iVar5) {
    do {
      uVar1 = param_2[local_218];
      iVar6 = (int)(uVar1 & 0xfff) >> 3;
      bVar4 = (byte)uVar1 & 7;
      if ((local_200[iVar6] & (byte)(1 << bVar4)) == 0) {
        local_200[iVar6] = local_200[iVar6] | '\x01' << bVar4;
LAB_00752cea:
        param_2[iVar7] = uVar1;
        iVar7 = iVar7 + 1;
      }
      else {
        iVar6 = 0;
        if (0 < iVar7) {
          do {
            if (param_2[iVar6] == uVar1) break;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar7);
        }
        if (iVar6 == iVar7) goto LAB_00752cea;
      }
      local_218 = local_218 + 1;
    } while (local_218 < iVar5);
  }
  return iVar7;
}

