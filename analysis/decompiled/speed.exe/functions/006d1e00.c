/* speed.exe 006d1e00 FUN_006d1e00; analysis pseudocode, not buildable source.
 * calls 006c1010 FUN_006c1010
 */

void __fastcall FUN_006d1e00(int *param_1)

{
  int *piVar1;
  
  if (((char)param_1[9] != '\0') && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  FUN_006c1010();
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}

