/* speed.exe 007f19fe FUN_007f19fe; analysis pseudocode, not buildable source.
 * calls 007f1cf9 FUN_007f1cf9
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_007f19fe(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)param_1[0x2e];
  *param_1 = &PTR_LAB_008c2220;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_007c7250(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  piVar2 = (int *)param_1[0x2d];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x2d] = 0;
  }
  FUN_007f1cf9();
  return;
}

