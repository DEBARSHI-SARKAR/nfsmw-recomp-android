/* speed.exe 007ed344 FUN_007ed344; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007c6610 FUN_007c6610
 * calls 007c94b0 __chkstk
 * calls 007f0df9 FUN_007f0df9
 * calls 007ed17b FUN_007ed17b
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_007ed344(byte *param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  undefined4 uStack_30;
  int aiStack_2c [3];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_c;
  int local_8;
  
  iVar3 = DAT_009bb13c;
  local_8 = 0;
  if (0 < DAT_009076e8) {
    local_c = *(undefined4 **)(DAT_009bb13c + 0x88);
    do {
      pbVar9 = (byte *)*local_c;
      pbVar11 = param_1;
      if (pbVar9 == (byte *)0x0) goto LAB_007ed3b1;
      do {
        bVar2 = *pbVar9;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_007ed397:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_007ed39c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_007ed397;
        pbVar9 = pbVar9 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_007ed39c:
      if (iVar4 == 0) break;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_8 < DAT_009076e8);
  }
  if (local_8 == DAT_009076e8) {
LAB_007ed3b1:
    uVar5 = 0;
  }
  else {
    pcVar6 = *(char **)(DAT_009bb13c + 0x8c);
    while (pcVar6[1] != '\0') {
      for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
      }
      pcVar1 = pcVar6 + 1;
      if ((*pcVar1 == '\0') && (pcVar6[2] != '\0')) {
        *pcVar1 = '/';
        pcVar6 = pcVar1;
      }
      *pcVar6 = ';';
    }
    uStack_1c = param_1;
    *pcVar6 = '\0';
    uStack_20 = *(undefined4 *)(iVar3 + 0x8c);
    aiStack_2c[2] = 0x7ed3f3;
    iVar7 = FUN_007c6610();
    uStack_1c = (byte *)0x7ed40a;
    iVar4 = -(DAT_009076ec + 3U & 0xfffffffc);
    *(int *)((int)&uStack_1c + iVar4) = DAT_009076ec;
    *(undefined1 **)((int)&uStack_20 + iVar4) = &stack0xffffffe8 + iVar4;
    *(undefined4 *)((int)aiStack_2c + iVar4 + 8) = 0x7ed413;
    FUN_007f0df9();
    iVar3 = *(int *)(DAT_009bb13c + 0x8c);
    *(int *)((int)aiStack_2c + iVar4 + 8) = iVar7 - iVar3;
    *(int *)((int)aiStack_2c + iVar4 + 4) = iVar3;
    *(undefined1 **)((int)aiStack_2c + iVar4) = &stack0xffffffe8 + iVar4;
    *(undefined4 *)((int)&uStack_30 + iVar4) = 0x7ed42a;
    _strncpy(*(char **)((int)aiStack_2c + iVar4),*(char **)((int)aiStack_2c + iVar4 + 4),
             *(size_t *)((int)aiStack_2c + iVar4 + 8));
    pbVar9 = param_1 + 1;
    do {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (bVar2 != 0);
    param_1 = param_1 + iVar7 + (1 - (int)pbVar9);
    pbVar9 = param_1;
    do {
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    pbVar11 = (byte *)((int)&uStack_1c + iVar4 + 3);
    do {
      pbVar10 = pbVar11 + 1;
      pbVar11 = pbVar11 + 1;
    } while (*pbVar10 != 0);
    pbVar10 = param_1;
    for (uVar8 = (uint)((int)pbVar9 - (int)param_1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    *(undefined1 **)((int)&uStack_1c + iVar4) = &stack0xffffffe8 + iVar4;
    for (uVar8 = (int)pbVar9 - (int)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    *(undefined4 *)((int)&uStack_20 + iVar4) = 0x7ed46a;
    FUN_007ed17b();
    uVar5 = 1;
  }
  return uVar5;
}

