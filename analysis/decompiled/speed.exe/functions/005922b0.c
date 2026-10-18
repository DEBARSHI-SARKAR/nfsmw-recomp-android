/* speed.exe 005922b0 FUN_005922b0; analysis pseudocode, not buildable source.
 * calls 00573170 FUN_00573170
 * calls 00586dc0 FUN_00586dc0
 */

void __thiscall FUN_005922b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *puVar1 = piVar3;
  *(int **)(param_1 + 0xc) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = param_1 + 8;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_00573170();
  FUN_00586dc0();
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x2c) = iVar2 + -4;
      return;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

