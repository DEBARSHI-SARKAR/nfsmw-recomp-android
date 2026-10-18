/* speed.exe 0060d410 FUN_0060d410; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d410(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[-1];
  if ((*(char *)(iVar2 + 7) == '\0') || ((int *)(iVar2 + 0x10) == (int *)0x0)) {
    pcVar5 = (code *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 2) {
      pcVar5 = *(code **)(iVar2 + 0x14);
    }
    else if (iVar3 == 7) {
      pcVar5 = (code *)(*(int *)(iVar2 + 0x14) + 0x10);
    }
    else {
      pcVar5 = (code *)0x0;
    }
  }
  if ((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) {
    if (*piVar1 == 2) {
      puVar6 = (undefined4 *)piVar1[1];
    }
    else {
      if (*piVar1 != 7) goto LAB_0060d46d;
      puVar6 = (undefined4 *)(piVar1[1] + 0x10);
    }
    if (puVar6 != (undefined4 *)0x0) {
      uVar7 = *puVar6;
      goto LAB_0060d46f;
    }
  }
LAB_0060d46d:
  uVar7 = 0;
LAB_0060d46f:
  cVar4 = (*pcVar5)(uVar7);
  puVar6 = *(undefined4 **)(param_1 + 8);
  *puVar6 = 1;
  puVar6[1] = (uint)(cVar4 != '\0');
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

