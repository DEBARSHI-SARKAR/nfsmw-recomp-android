/* speed.exe 00864400 FUN_00864400; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084af70 FUN_0084af70
 * calls 0084af90 FUN_0084af90
 */

void FUN_00864400(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == param_1[1]) {
      FUN_0084af70(iVar1);
      param_1[1] = 0;
    }
    else {
      FUN_0084af90(iVar1,2);
      FUN_0084af40(*param_1);
    }
    *param_1 = 0;
  }
  if (param_1[0x38] != 0) {
    FUN_0084af90(param_1[0x38],2);
    FUN_0084af40(param_1[0x38]);
  }
  param_1[0x38] = 0;
  thunk_FUN_004655f0(param_1[0x84]);
  thunk_FUN_004655f0(param_1);
  return;
}

