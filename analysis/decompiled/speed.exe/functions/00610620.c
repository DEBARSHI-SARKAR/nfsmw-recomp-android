/* speed.exe 00610620 FUN_00610620; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00610620(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  code *pcVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar1 + 7) == '\0') || ((int *)(iVar1 + 0x10) == (int *)0x0)) {
    pcVar6 = (code *)0x0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 2) {
      pcVar6 = *(code **)(iVar1 + 0x14);
    }
    else if (iVar2 == 7) {
      pcVar6 = (code *)(*(int *)(iVar1 + 0x14) + 0x10);
    }
    else {
      pcVar6 = (code *)0x0;
    }
  }
  FUN_0060b060(param_1,1);
  uVar3 = FUN_007c4b80();
  iVar1 = *(int *)(param_1 + 0xc);
  piVar4 = (int *)(iVar1 + 8);
  if ((piVar4 < *(int **)(param_1 + 8)) && (piVar4 != (int *)0x0)) {
    if (*piVar4 == 2) {
      puVar5 = *(undefined4 **)(iVar1 + 0xc);
    }
    else {
      if (*piVar4 != 7) goto LAB_006106a3;
      puVar5 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10);
    }
    if (puVar5 != (undefined4 *)0x0) {
      (*pcVar6)(uVar3,*puVar5);
      return 0;
    }
  }
LAB_006106a3:
  (*pcVar6)(uVar3,0);
  return 0;
}

