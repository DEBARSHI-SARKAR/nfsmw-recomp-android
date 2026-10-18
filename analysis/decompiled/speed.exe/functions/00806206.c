/* speed.exe 00806206 FUN_00806206; analysis pseudocode, not buildable source.
 */

void FUN_00806206(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int local_10;
  int local_8;
  
  pbVar6 = param_2 + param_3 * -2;
  local_10 = 8;
  do {
    pbVar1 = pbVar6 + param_3;
    uVar4 = (uint)*pbVar1;
    local_8 = (*param_2 - uVar4) * 3;
    uVar3 = (uint)*pbVar6;
    if (uVar3 == uVar4 || (int)(uVar3 - uVar4) < 0) {
      iVar5 = *pbVar1 - uVar3;
    }
    else {
      iVar5 = uVar3 - *pbVar1;
    }
    if (iVar5 < 2) {
      iVar5 = (uint)*param_2 - (uint)param_2[param_3];
      if (iVar5 < 1) {
        iVar5 = (uint)param_2[param_3] - (uint)*param_2;
      }
      if (1 < iVar5) goto LAB_00806279;
      bVar2 = false;
    }
    else {
LAB_00806279:
      local_8 = local_8 + (uVar3 - param_2[param_3]);
      bVar2 = true;
    }
    iVar5 = *(int *)(param_4 + (local_8 + 4 >> 3) * 4);
    *pbVar1 = (&DAT_009c6c00)[iVar5 + (uint)*pbVar1];
    *param_2 = (&DAT_009c6c00)[(uint)*param_2 - iVar5];
    if (!bVar2) {
      *pbVar6 = (&DAT_009c6c00)[(iVar5 >> 1) + (uint)*pbVar6];
      param_2[param_3] = (&DAT_009c6c00)[(uint)param_2[param_3] - (iVar5 >> 1)];
    }
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      return;
    }
  } while( true );
}

