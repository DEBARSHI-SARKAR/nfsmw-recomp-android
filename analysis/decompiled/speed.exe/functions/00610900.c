/* speed.exe 00610900 FUN_00610900; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00610900(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  piVar4 = *(int **)(param_1 + 0xc);
  iVar2 = piVar4[-1];
  if ((*(char *)(iVar2 + 7) == '\0') || ((int *)(iVar2 + 0x10) == (int *)0x0)) {
    pcVar6 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar1 == 2) {
      pcVar6 = *(code **)(iVar2 + 0x14);
    }
    else if (iVar1 == 7) {
      pcVar6 = (code *)(*(int *)(iVar2 + 0x14) + 0x10);
    }
    else {
      pcVar6 = (code *)0x0;
    }
  }
  if ((piVar4 < *(int **)(param_1 + 8)) && (piVar4 != (int *)0x0)) {
    if (*piVar4 == 2) {
      piVar4 = (int *)piVar4[1];
    }
    else {
      if (*piVar4 != 7) goto LAB_00610983;
      piVar4 = (int *)(piVar4[1] + 0x10);
    }
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4);
      if (iVar2 != 0) {
        uVar5 = *(undefined4 *)(iVar2 + 4);
        goto LAB_00610985;
      }
    }
  }
LAB_00610983:
  uVar5 = 0;
LAB_00610985:
  FUN_0060b060(param_1,2);
  uVar3 = FUN_007c4b80();
  (*pcVar6)(uVar5,uVar3);
  return 0;
}

