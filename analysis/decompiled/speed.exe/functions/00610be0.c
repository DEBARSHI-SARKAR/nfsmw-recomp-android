/* speed.exe 00610be0 FUN_00610be0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 FUN_00610be0(code *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  iVar3 = (int)param_1;
  piVar4 = *(int **)((int)param_1 + 0xc);
  iVar5 = piVar4[-1];
  if ((*(char *)(iVar5 + 7) == '\0') || ((int *)(iVar5 + 0x10) == (int *)0x0)) {
    param_1 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar1 == 2) {
      param_1 = *(code **)(iVar5 + 0x14);
    }
    else if (iVar1 == 7) {
      param_1 = (code *)(*(int *)(iVar5 + 0x14) + 0x10);
    }
    else {
      param_1 = (code *)0x0;
    }
  }
  if ((piVar4 < *(int **)(iVar3 + 8)) && (piVar4 != (int *)0x0)) {
    if (*piVar4 == 2) {
      piVar4 = (int *)piVar4[1];
    }
    else {
      if (*piVar4 != 7) goto LAB_00610c75;
      piVar4 = (int *)(piVar4[1] + 0x10);
    }
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4);
      if (iVar5 != 0) {
        uVar6 = *(undefined4 *)(iVar5 + 4);
        goto LAB_00610c77;
      }
    }
  }
LAB_00610c75:
  uVar6 = 0;
LAB_00610c77:
  fVar7 = (float10)(*param_1)(uVar6);
  puVar2 = *(undefined4 **)(iVar3 + 8);
  puVar2[1] = (float)fVar7;
  *puVar2 = 3;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  return 1;
}

