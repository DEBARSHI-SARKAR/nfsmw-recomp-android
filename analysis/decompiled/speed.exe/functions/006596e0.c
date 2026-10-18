/* speed.exe 006596e0 FUN_006596e0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006596e0(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *param_1 = (int)FUN_00667010;
  param_1[2] = (int)"UnloadingFrontEnd";
  param_1[1] = 0;
  return;
}

