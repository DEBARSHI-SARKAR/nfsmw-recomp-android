/* speed.exe 006106c0 FUN_006106c0; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_006106c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar1 + 7) != '\0') && ((int *)(iVar1 + 0x10) != (int *)0x0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 2) {
      pcVar5 = *(code **)(iVar1 + 0x14);
      goto LAB_006106f6;
    }
    if (iVar2 == 7) {
      pcVar5 = (code *)(*(int *)(iVar1 + 0x14) + 0x10);
      goto LAB_006106f6;
    }
  }
  pcVar5 = (code *)0x0;
LAB_006106f6:
  FUN_0060b060(param_1,1);
  uVar3 = FUN_007c4b80();
  FUN_0060b060(param_1,2);
  uVar4 = FUN_007c4b80();
  (*pcVar5)(uVar3,uVar4);
  return 0;
}

