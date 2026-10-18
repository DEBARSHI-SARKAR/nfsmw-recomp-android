/* speed.exe 0059c0b0 FUN_0059c0b0; analysis pseudocode, not buildable source.
 * calls 00593b10 FUN_00593b10
 * calls 0059bff0 FUN_0059bff0
 */

void __fastcall FUN_0059c0b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != param_1 + 0x2c) {
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar1 + -4);
    }
    *(int **)(param_1 + 0x34) = piVar2;
    *(int **)(param_1 + 0x38) = piVar2;
    *(undefined1 *)(param_1 + 0x11f) = 0;
    *(int **)(param_1 + 0x34) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(param_1 + 0x10));
    }
    FUN_00593b10();
    FUN_0059bff0();
    return;
  }
  return;
}

