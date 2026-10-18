/* speed.exe 0085ad50 FUN_0085ad50; analysis pseudocode, not buildable source.
 */

void FUN_0085ad50(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  
  uVar3 = param_3;
  pcVar2 = param_1;
  if (param_4 < 1) {
    param_4 = 1;
  }
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  uVar4 = 0;
  do {
    param_1[uVar4] = (char)uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  if ((0 < (int)param_3) && (bVar9 = 0, 0 < param_4)) {
    iVar5 = 1 - (int)param_1;
    iVar6 = 2 - (int)param_1;
    iVar7 = 3 - (int)param_1;
    param_3 = param_4;
    do {
      param_1 = (char *)0x0;
      pcVar8 = pcVar2;
      do {
        cVar1 = *pcVar8;
        bVar9 = bVar9 + *(char *)((uint)param_1 % uVar3 + param_2) + cVar1;
        *pcVar8 = pcVar2[bVar9];
        pcVar2[bVar9] = cVar1;
        cVar1 = pcVar8[1];
        bVar9 = bVar9 + *(char *)((uint)(pcVar8 + iVar5) % uVar3 + param_2) + cVar1;
        pcVar8[1] = pcVar2[bVar9];
        pcVar2[bVar9] = cVar1;
        cVar1 = pcVar8[2];
        bVar9 = bVar9 + *(char *)((uint)(pcVar8 + iVar6) % uVar3 + param_2) + cVar1;
        pcVar8[2] = pcVar2[bVar9];
        pcVar2[bVar9] = cVar1;
        cVar1 = pcVar8[3];
        bVar9 = bVar9 + *(char *)((uint)(pcVar8 + iVar7) % uVar3 + param_2) + cVar1;
        pcVar8[3] = pcVar2[bVar9];
        pcVar2[bVar9] = cVar1;
        param_1 = (char *)((int)param_1 + 4);
        pcVar8 = pcVar8 + 4;
      } while (param_1 < 0x100);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

