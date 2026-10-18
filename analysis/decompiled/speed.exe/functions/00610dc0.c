/* speed.exe 00610dc0 FUN_00610dc0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 FUN_00610dc0(code *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  iVar2 = (int)param_1;
  piVar3 = *(int **)((int)param_1 + 0xc);
  iVar4 = piVar3[-1];
  if ((*(char *)(iVar4 + 7) == '\0') || ((int *)(iVar4 + 0x10) == (int *)0x0)) {
    param_1 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar1 == 2) {
      param_1 = *(code **)(iVar4 + 0x14);
    }
    else if (iVar1 == 7) {
      param_1 = (code *)(*(int *)(iVar4 + 0x14) + 0x10);
    }
    else {
      param_1 = (code *)0x0;
    }
  }
  if ((piVar3 < *(int **)(iVar2 + 8)) && (piVar3 != (int *)0x0)) {
    if (*piVar3 == 2) {
      piVar3 = (int *)piVar3[1];
    }
    else {
      if (*piVar3 != 7) goto LAB_00610e55;
      piVar3 = (int *)(piVar3[1] + 0x10);
    }
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) goto LAB_00610e55;
    iVar4 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar3);
    if (iVar4 == 0) goto LAB_00610e55;
    uVar7 = *(undefined4 *)(iVar4 + 4);
  }
  else {
LAB_00610e55:
    uVar7 = 0;
  }
  iVar4 = *(int *)(iVar2 + 0xc);
  piVar3 = (int *)(iVar4 + 8);
  if ((piVar3 < *(int **)(iVar2 + 8)) && (piVar3 != (int *)0x0)) {
    if (*piVar3 == 2) {
      puVar5 = *(undefined4 **)(iVar4 + 0xc);
    }
    else {
      if (*piVar3 != 7) goto LAB_00610e87;
      puVar5 = (undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10);
    }
    if (puVar5 != (undefined4 *)0x0) {
      uVar6 = *puVar5;
      goto LAB_00610e89;
    }
  }
LAB_00610e87:
  uVar6 = 0;
LAB_00610e89:
  fVar8 = (float10)(*param_1)(uVar7,uVar6);
  puVar5 = *(undefined4 **)(iVar2 + 8);
  puVar5[1] = (float)fVar8;
  *puVar5 = 3;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 8;
  return 1;
}

