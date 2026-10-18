/* speed.exe 008062e7 FUN_008062e7; analysis pseudocode, not buildable source.
 */

void FUN_008062e7(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  
  local_c = 8;
  do {
    uVar3 = (uint)param_2[2];
    uVar4 = (uint)param_2[1];
    iVar5 = *param_2 - uVar4;
    iVar2 = (uVar3 - uVar4) * 3;
    if (iVar5 < 1) {
      iVar5 = uVar4 - *param_2;
    }
    if (iVar5 < 2) {
      uVar6 = (uint)param_2[3];
      iVar5 = uVar3 - uVar6;
      if (iVar5 < 1) {
        iVar5 = uVar6 - uVar3;
      }
      if (1 < iVar5) goto LAB_00806337;
      bVar1 = false;
    }
    else {
LAB_00806337:
      uVar6 = (uint)param_2[3];
      bVar1 = true;
      iVar2 = iVar2 + (*param_2 - uVar6);
    }
    iVar2 = *(int *)(param_4 + (iVar2 + 4 >> 3) * 4);
    param_2[1] = (&DAT_009c6c00)[iVar2 + uVar4];
    param_2[2] = (&DAT_009c6c00)[uVar3 - iVar2];
    if (!bVar1) {
      *param_2 = (&DAT_009c6c00)[(iVar2 >> 1) + (uint)*param_2];
      param_2[3] = (&DAT_009c6c00)[uVar6 - (iVar2 >> 1)];
    }
    param_2 = param_2 + param_3;
    local_c = local_c + -1;
    if (local_c == 0) {
      return;
    }
  } while( true );
}

