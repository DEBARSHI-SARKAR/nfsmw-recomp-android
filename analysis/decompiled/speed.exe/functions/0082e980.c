/* speed.exe 0082e980 FUN_0082e980; analysis pseudocode, not buildable source.
 * calls 0082fd50 FUN_0082fd50
 */

undefined4 FUN_0082e980(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x13c) = 1;
  if ((*(uint *)(param_1 + 8) & 0x2000000) != 0) {
    *(undefined4 *)(param_1 + 0x13c) = 3;
    return *(undefined4 *)(param_1 + 0x13c);
  }
  if (*(short *)(param_1 + 4) < 0) goto LAB_0082ea46;
  *(undefined4 *)(param_1 + 0x13c) = 5;
  if (*(int *)(param_1 + 0x11c) < 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x1c))();
    if (iVar2 == 0) goto LAB_0082ea06;
    iVar2 = FUN_0082fd50(param_1);
    if ((int)(*(uint *)(param_1 + 8) & 0x7fff) < iVar2) goto LAB_0082ea06;
    *(undefined4 *)(param_1 + 0x13c) = 4;
  }
  else {
LAB_0082ea06:
    piVar1 = *(int **)(param_1 + 300);
    iVar2 = (**(code **)(*piVar1 + 0x20))(0xffffffff);
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    if (iVar3 < iVar2) {
      *(undefined4 *)(param_1 + 0x13c) = 2;
    }
  }
  if (-1 < *(short *)(param_1 + 0x1a)) {
    *(undefined4 *)(param_1 + 0x13c) = 6;
  }
LAB_0082ea46:
  return *(undefined4 *)(param_1 + 0x13c);
}

