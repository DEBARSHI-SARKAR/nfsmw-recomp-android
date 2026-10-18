/* speed.exe 0060d1e0 FUN_0060d1e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d1e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar4 = piVar1[-1];
  if ((*(char *)(iVar4 + 7) == '\0') || ((int *)(iVar4 + 0x10) == (int *)0x0)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x10);
    if (iVar2 == 2) {
      puVar3 = *(undefined4 **)(iVar4 + 0x14);
    }
    else if (iVar2 == 7) {
      puVar3 = (undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10);
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
  }
  if ((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) {
    if (*piVar1 == 2) {
      iVar4 = piVar1[1];
    }
    else {
      if (*piVar1 != 7) goto LAB_0060d246;
      iVar4 = piVar1[1] + 0x10;
    }
    if (iVar4 != 0) {
      (*(code *)*puVar3)();
      return 0;
    }
  }
LAB_0060d246:
  (*(code *)*puVar3)();
  return 0;
}

