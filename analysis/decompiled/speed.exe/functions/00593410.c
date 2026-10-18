/* speed.exe 00593410 FUN_00593410; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_00593410(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar5 = FUN_0045d3a0(0);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18) + 4;
  }
  iVar6 = FUN_0045d3a0(iVar6);
  FUN_00589870(uVar1,(iVar5 + -1) / iVar2 + 1,iVar4 / iVar3 + 1,(iVar6 + -1) / iVar3 + 1);
  return;
}

