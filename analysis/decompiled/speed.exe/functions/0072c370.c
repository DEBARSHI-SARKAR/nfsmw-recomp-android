/* speed.exe 0072c370 FUN_0072c370; analysis pseudocode, not buildable source.
 * calls 00727e60 FUN_00727e60
 * calls 0072c300 FUN_0072c300
 */

void __thiscall FUN_0072c370(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 0x1b0 + *(int *)(param_1 + 0x1ac) * 4) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  if (*(int *)(param_2 + 0xc) == 4) {
    FUN_0072c300(param_2);
  }
  if (*(int *)(param_2 + 0xc) == 3) {
    FUN_00727e60(param_2);
  }
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x2c4);
  *(undefined1 *)(param_2 + 0xb) = 0;
  iVar2 = *piVar4;
  while (iVar2 != param_2) {
    piVar1 = piVar4 + 1;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
    iVar2 = *piVar1;
  }
  if (iVar3 < *(int *)(param_1 + 0x2c0) + -1) {
    puVar5 = (undefined4 *)(param_1 + 0x2c4 + iVar3 * 4);
    do {
      *puVar5 = puVar5[1];
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c0) + -1);
  }
  *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + -1;
  return;
}

