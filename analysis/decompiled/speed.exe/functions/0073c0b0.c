/* speed.exe 0073c0b0 FUN_0073c0b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0073c0b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  local_10 = in_EAX - param_1;
  if (local_10 < -1) {
    local_10 = -1;
  }
  local_8 = param_1 + in_EAX;
  if (DAT_00904a10 < local_8) {
    local_8 = DAT_00904a10;
  }
  iVar3 = in_EAX + 1;
  iVar1 = in_EAX + -1;
  local_4 = &DAT_009ae8b0;
  piVar4 = (int *)(&DAT_009af390 + iVar1 * 0x14);
  piVar5 = (int *)(&DAT_009af390 + iVar3 * 0x14);
  local_c = iVar1;
  while ((iVar3 < local_8 || (local_10 < iVar1))) {
    local_4 = local_4 + 1;
    iVar2 = *local_4;
    if (iVar3 < local_8) {
      iVar1 = (piVar5[-2] - param_2) * iVar2;
      piVar5[-2] = piVar5[-2] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar5[-1] - param_3) * iVar2;
      piVar5[-1] = piVar5[-1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (*piVar5 - param_4) * iVar2;
      *piVar5 = *piVar5 - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar5[1] - param_5) * iVar2;
      piVar5[1] = piVar5[1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 5;
      iVar1 = local_c;
    }
    if (local_10 < iVar1) {
      iVar1 = (piVar4[-2] - param_2) * iVar2;
      piVar4[-2] = piVar4[-2] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar4[-1] - param_3) * iVar2;
      piVar4[-1] = piVar4[-1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (*piVar4 - param_4) * iVar2;
      *piVar4 = *piVar4 - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar2 = (piVar4[1] - param_5) * iVar2;
      iVar1 = local_c + -1;
      piVar4[1] = piVar4[1] - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffffU)) >> 0x12);
      piVar4 = piVar4 + -5;
      local_c = iVar1;
    }
  }
  return;
}

