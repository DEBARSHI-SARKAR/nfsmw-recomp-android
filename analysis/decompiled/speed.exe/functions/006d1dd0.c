/* speed.exe 006d1dd0 FUN_006d1dd0; analysis pseudocode, not buildable source.
 * calls 006c1010 FUN_006c1010
 */

void __fastcall FUN_006d1dd0(int *param_1)

{
  int *piVar1;
  
  if (((char)param_1[9] != '\0') && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  FUN_006c1010();
  return;
}

