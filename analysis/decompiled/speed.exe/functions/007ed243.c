/* speed.exe 007ed243 FUN_007ed243; analysis pseudocode, not buildable source.
 * calls 007c94b0 __chkstk
 * calls 007f0df9 FUN_007f0df9
 * calls 007ed17b FUN_007ed17b
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_007ed243(char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = *(char **)(DAT_009bb13c + 0x8c);
  while (pcVar4[1] != '\0') {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
    }
    pcVar6 = pcVar4 + 1;
    if ((*pcVar6 == '\0') && (pcVar4[2] != '\0')) {
      *pcVar6 = '/';
      pcVar4 = pcVar6;
    }
    *pcVar4 = ';';
  }
  *pcVar4 = '\0';
  uStack_14 = 0x7ed28e;
  iVar2 = -(DAT_009076ec + 3U & 0xfffffffc);
  pcVar4 = &stack0xfffffff0 + iVar2;
  *(int *)((int)&uStack_14 + iVar2) = DAT_009076ec;
  *(undefined1 **)((int)&uStack_18 + iVar2) = &stack0xfffffff0 + iVar2;
  *(undefined4 *)((int)&uStack_1c + iVar2) = 0x7ed297;
  FUN_007f0df9();
  if (param_2 == '\x01') {
    iVar3 = iVar2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(&stack0xfffffff0 + iVar3)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined2 *)((int)&uStack_14 + iVar2 + 3);
    do {
      pcVar4 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined2 *)((int)puVar8 + 1);
    } while (*pcVar4 != '\0');
    *puVar8 = DAT_008bd0e4;
    param_1 = *(char **)(DAT_009bb13c + 0x8c);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    pcVar4 = (char *)((int)&uStack_14 + iVar2 + 3);
    do {
      pcVar6 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar6 != '\0');
  }
  else {
    pcVar6 = *(char **)(DAT_009bb13c + 0x8c);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined2 *)((int)&uStack_14 + iVar2 + 3);
    do {
      pcVar4 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined2 *)((int)puVar8 + 1);
    } while (*pcVar4 != '\0');
    *puVar8 = DAT_008bd0e4;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    pcVar4 = (char *)((int)&uStack_14 + iVar2 + 3);
    do {
      pcVar6 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar6 != '\0');
  }
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *(undefined1 **)((int)&uStack_14 + iVar2) = &stack0xfffffff0 + iVar2;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(undefined4 *)((int)&uStack_18 + iVar2) = 0x7ed33b;
  FUN_007ed17b();
  return;
}

