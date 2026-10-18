/* speed.exe 007edf89 FUN_007edf89; analysis pseudocode, not buildable source.
 * calls 007ed475 FUN_007ed475
 * calls 007c97c0 FUN_007c97c0
 * calls 007edca5 FUN_007edca5
 * calls 007ee778 FUN_007ee778
 */

undefined4 FUN_007edf89(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char local_108 [260];
  
  iVar2 = FUN_007c97c0(param_1,0x3a);
  if (iVar2 == 0) {
    iVar2 = FUN_007edca5(**(undefined4 **)(DAT_009bb13c + 0x88));
    pcVar3 = (char *)(**(code **)(**(int **)(iVar2 + 0x80) + 0x30))();
    pcVar8 = local_108;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
      pcVar4 = param_1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    pcVar8 = &stack0xfffffef7;
    do {
      pcVar3 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar3 != '\0');
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *param_1;
      param_1 = param_1 + 1;
      pcVar8 = pcVar8 + 1;
    }
    param_1 = local_108;
  }
  else {
    iVar2 = FUN_007edca5(param_1);
  }
  iVar6 = FUN_007ed475(0x40);
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007ee778(param_1,param_2,param_3,iVar2);
  }
  return *(undefined4 *)(iVar2 + 0xc);
}

