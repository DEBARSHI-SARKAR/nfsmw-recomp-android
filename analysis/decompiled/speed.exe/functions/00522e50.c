/* speed.exe 00522e50 FUN_00522e50; analysis pseudocode, not buildable source.
 * calls 00519fc0 FUN_00519fc0
 * calls 005b9210 FUN_005b9210
 * calls 00460c50 FUN_00460c50
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_00522e50(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar8 = 0;
    iVar4 = FUN_00460c50((char *)(param_1 + 0x7cU));
    pcVar2 = (char *)(iVar4 + 0x7c + param_1);
    pcVar5 = pcVar2;
    while (((char *)(param_1 + 0x7cU) < pcVar5 &&
           ((pcVar5[-1] != '\n' || (iVar8 = iVar8 + 1, iVar8 <= *(int *)(param_1 + 0x74)))))) {
      pcVar5 = pcVar5 + -1;
    }
    iVar8 = 0;
    pcVar7 = pcVar5;
    do {
      if (pcVar2 <= pcVar7) break;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while ((cVar3 != '\n') || (iVar8 = iVar8 + 1, iVar8 < 2));
    iVar8 = (int)pcVar7 - (int)pcVar5;
    uVar6 = FUN_005b9210(iVar8 + 1);
    FUN_00519fc0(uVar6,pcVar5,iVar8);
    puVar1 = (uint *)(*(int *)(param_1 + 100) + 0x1c);
    *puVar1 = *puVar1 | 0x400002;
    iVar8 = (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74)) + 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    FUN_00589870(2,*(int *)(param_1 + 0x78),iVar8,0xffffffff);
  }
  return;
}

