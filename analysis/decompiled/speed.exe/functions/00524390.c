/* speed.exe 00524390 FUN_00524390; analysis pseudocode, not buildable source.
 * calls 005899f0 FUN_005899f0
 * calls 00589a70 FUN_00589a70
 * calls 00519fc0 FUN_00519fc0
 * calls 005b9210 FUN_005b9210
 * calls 00460c50 FUN_00460c50
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_00524390(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x1154) != 0) {
    iVar8 = 0;
    iVar4 = FUN_00460c50((char *)(param_1 + 0x154U));
    pcVar2 = (char *)(iVar4 + 0x154 + param_1);
    pcVar5 = pcVar2;
    while (((char *)(param_1 + 0x154U) < pcVar5 &&
           ((pcVar5[-1] != '\n' || (iVar8 = iVar8 + 1, iVar8 <= *(int *)(param_1 + 0x1164)))))) {
      pcVar5 = pcVar5 + -1;
    }
    iVar8 = 0;
    pcVar7 = pcVar5;
    do {
      if (pcVar2 <= pcVar7) break;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while ((cVar3 != '\n') || (iVar8 = iVar8 + 1, iVar8 < 0xc));
    iVar8 = (int)pcVar7 - (int)pcVar5;
    uVar6 = FUN_005b9210(iVar8 + 1);
    FUN_00519fc0(uVar6,pcVar5,iVar8);
    puVar1 = (uint *)(*(int *)(param_1 + 0x1154) + 0x1c);
    *puVar1 = *puVar1 | 0x400802;
    if (*(int *)(param_1 + 0x1168) < 0xd) {
      FUN_00589a70(0);
    }
    else {
      FUN_00589a70(1);
      FUN_005899f0(1,1);
      FUN_005899f0(2,1);
    }
    iVar8 = (*(int *)(param_1 + 0x1168) - *(int *)(param_1 + 0x1164)) + 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    FUN_00589870(0xc,*(int *)(param_1 + 0x1168),iVar8,0xffffffff);
  }
  return;
}

