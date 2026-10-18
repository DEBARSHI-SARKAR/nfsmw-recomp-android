/* speed.exe 0045f170 FUN_0045f170; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0045f170(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  for (iVar2 = param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = *(int *)(iVar2 + 0x28);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (*(int *)(iVar2 + 0x24) != 0) {
      iVar5 = *(int *)(iVar2 + 0x24) + -1;
      puVar4 = (undefined4 *)(iVar2 + 0x30);
      *(undefined4 **)(iVar2 + 0x10) = puVar4;
      puVar3 = puVar4;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 + -1;
          puVar4 = (undefined4 *)((int)puVar3 + iVar1);
          *puVar3 = puVar4;
          puVar3 = puVar4;
        } while (iVar5 != 0);
      }
      *puVar4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

