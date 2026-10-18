/* speed.exe 00491ca0 FUN_00491ca0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00491ca0(int *param_1,int *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_c;
  uint local_4;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (iVar3 == 0) {
    *param_2 = 0;
    param_2[1] = local_c;
    param_2[2] = 0;
    param_2[3] = local_4;
    return;
  }
  if ((param_3 < 0) || (*(int *)(iVar3 + 0x10) <= param_3)) {
    *param_2 = 0;
    param_2[1] = local_c;
    param_2[2] = 0;
    param_2[3] = local_4;
    return;
  }
  iVar6 = *(int *)(iVar3 + 0x14) + param_3 * 0x10;
  pcVar1 = (char *)(*(int *)(iVar3 + 8) + *(int *)(*(int *)(iVar3 + 0x14) + param_3 * 0x10));
  pcVar4 = pcVar1;
  do {
    pcVar8 = pcVar4;
    pcVar4 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  if (pcVar8[1] == '\x7f') {
    pcVar8 = pcVar8 + 2;
  }
  cVar2 = *(char *)(iVar6 + 0xd);
  if (((cVar2 != '\x02') && (cVar2 != '\x03')) && (cVar2 != '\x04')) {
    local_4 = CONCAT31(local_4._1_3_,1);
    if (cVar2 != '\x05') goto LAB_00491d37;
  }
  local_4 = local_4 & 0xffffff00;
LAB_00491d37:
  uVar5 = (uint)*(ushort *)(iVar6 + 0xe);
  if (cVar2 != '\x01') {
    if ((uVar5 != 0) && (uVar5 < *(ushort *)(*(int *)(iVar3 + 0x1c) + 0x30))) {
      iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + 0x10 + uVar5 * 0x28) + *(int *)(iVar6 + 4);
    }
    *param_2 = (int)pcVar1;
    param_2[1] = (int)pcVar8;
    param_2[2] = iVar7;
    param_2[3] = local_4;
    return;
  }
  iVar3 = *(int *)(iVar6 + 4);
  *param_2 = (int)pcVar1;
  param_2[1] = (int)pcVar8;
  param_2[2] = iVar3;
  param_2[3] = local_4;
  return;
}

