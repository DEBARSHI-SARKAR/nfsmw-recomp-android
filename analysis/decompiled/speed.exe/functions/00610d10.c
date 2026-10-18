/* speed.exe 00610d10 FUN_00610d10; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 FUN_00610d10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  
  piVar6 = *(int **)(param_1 + 0xc);
  iVar4 = piVar6[-1];
  if ((*(char *)(iVar4 + 7) == '\0') || ((int *)(iVar4 + 0x10) == (int *)0x0)) {
    pcVar7 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar1 == 2) {
      pcVar7 = *(code **)(iVar4 + 0x14);
    }
    else if (iVar1 == 7) {
      pcVar7 = (code *)(*(int *)(iVar4 + 0x14) + 0x10);
    }
    else {
      pcVar7 = (code *)0x0;
    }
  }
  if ((piVar6 < *(int **)(param_1 + 8)) && (piVar6 != (int *)0x0)) {
    if (*piVar6 == 2) {
      piVar6 = (int *)piVar6[1];
    }
    else {
      if (*piVar6 != 7) goto LAB_00610d92;
      piVar6 = (int *)(piVar6[1] + 0x10);
    }
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      iVar4 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar6);
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar4 + 4);
        goto LAB_00610d94;
      }
    }
  }
LAB_00610d92:
  uVar5 = 0;
LAB_00610d94:
  cVar3 = (*pcVar7)(uVar5);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = 1;
  puVar2[1] = (uint)(cVar3 != '\0');
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

