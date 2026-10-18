/* speed.exe 00607d80 FUN_00607d80; analysis pseudocode, not buildable source.
 * calls 00607c40 FUN_00607c40
 * calls 00607d40 FUN_00607d40
 * calls 007c4b80 FUN_007c4b80
 * calls 00607cb0 FUN_00607cb0
 */

void FUN_00607d80(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 3) {
    iVar1 = FUN_007c4b80();
    if ((float)param_2[1] == (float)iVar1) {
      FUN_00607cb0();
      return;
    }
  }
  else if (*param_2 == 4) {
    FUN_00607d40();
    return;
  }
  FUN_00607c40(param_1);
  return;
}

