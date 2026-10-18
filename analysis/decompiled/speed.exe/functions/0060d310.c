/* speed.exe 0060d310 FUN_0060d310; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + -4);
  if ((*(char *)(iVar2 + 7) == '\0') || ((int *)(iVar2 + 0x10) == (int *)0x0)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 2) {
      puVar5 = *(undefined4 **)(iVar2 + 0x14);
    }
    else if (iVar3 == 7) {
      puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10);
    }
    else {
      puVar5 = (undefined4 *)0x0;
    }
  }
  piVar4 = (int *)(iVar1 + 8);
  if ((((piVar4 < *(int **)(param_1 + 8)) && (piVar4 != (int *)0x0)) && (*piVar4 != 0)) &&
     ((*piVar4 != 1 || (*(int *)(iVar1 + 0xc) != 0)))) {
    (*(code *)*puVar5)(1);
    return 0;
  }
  (*(code *)*puVar5)(0);
  return 0;
}

