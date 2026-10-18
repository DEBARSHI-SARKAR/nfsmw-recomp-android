/* speed.exe 00462540 FUN_00462540; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_00462540(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  
  *param_1 = &PTR_FUN_00894264;
  iVar5 = -1;
  bVar2 = *param_2;
  pbVar7 = param_2;
  while (bVar2 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar1;
  }
  param_1[3] = iVar5;
  pcVar6 = (char *)(param_1 + 4);
  pcVar8 = pcVar6;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  iVar5 = 0x3f;
  iVar9 = (int)param_2 - (int)pcVar6;
  do {
    cVar3 = pcVar6[iVar9];
    iVar5 = iVar5 + -1;
    *pcVar6 = cVar3;
    if (cVar3 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 != 0);
  puVar10 = param_1 + 0x14;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = param_1 + 0x34;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = param_1 + 1;
  *DAT_00910ee4 = puVar10;
  puVar4 = puVar10;
  param_1[2] = DAT_00910ee4;
  DAT_00910ee4 = puVar4;
  *puVar10 = &DAT_00910ee0;
  return param_1;
}

