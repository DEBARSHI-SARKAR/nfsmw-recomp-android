/* speed.exe 004e0850 FUN_004e0850; analysis pseudocode, not buildable source.
 * calls 006ff2d0 FUN_006ff2d0
 * calls 0081bab9 FUN_0081bab9
 */

void __fastcall FUN_004e0850(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (DAT_00914340 != '\0') {
    piVar1 = (int *)FUN_006ff2d0(0);
    (**(code **)(*piVar1 + 0x44))(2);
    FUN_0081bab9();
    DAT_00914340 = '\0';
  }
  return;
}

