/* speed.exe 0044fd90 FUN_0044fd90; analysis pseudocode, not buildable source.
 * calls 0044fd60 FUN_0044fd60
 * calls 0044e710 FUN_0044e710
 */

void __thiscall FUN_0044fd90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[7];
  if (iVar1 == 0) {
    if (param_2 == 2) {
      (**(code **)(*param_1 + 0x10))(param_1[10]);
      FUN_0044e710();
      param_1[7] = 2;
    }
  }
  else if (iVar1 == 1) {
    if (param_2 == 0) {
      param_1[7] = 0;
      FUN_0044fd60();
      (**(code **)(*param_1 + 0x10))(param_1[10]);
      return;
    }
    if (param_2 == 2) {
      param_1[7] = 2;
      return;
    }
  }
  else if (iVar1 == 2) {
    if (param_2 == 0) {
      param_1[7] = 0;
      FUN_0044fd60();
      (**(code **)(*param_1 + 0x10))(param_1[10]);
      return;
    }
    if (param_2 == 1) {
      param_1[7] = 1;
      return;
    }
  }
  return;
}

