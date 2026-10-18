/* speed.exe 00610280 FUN_00610280; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_00610280(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar1 + 7) != '\0') && ((int *)(iVar1 + 0x10) != (int *)0x0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 2) {
      pcVar3 = *(code **)(iVar1 + 0x14);
      goto LAB_006102b5;
    }
    if (iVar2 == 7) {
      pcVar3 = (code *)(*(int *)(iVar1 + 0x14) + 0x10);
      goto LAB_006102b5;
    }
  }
  pcVar3 = (code *)0x0;
LAB_006102b5:
  fVar4 = (float10)FUN_0060b060(param_1,1);
  (*pcVar3)((float)fVar4);
  return 0;
}

