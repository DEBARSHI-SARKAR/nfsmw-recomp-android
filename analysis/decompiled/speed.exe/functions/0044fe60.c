/* speed.exe 0044fe60 FUN_0044fe60; analysis pseudocode, not buildable source.
 * calls 0044fd60 FUN_0044fd60
 */

undefined4 __fastcall FUN_0044fe60(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_1[7] = 0;
      FUN_0044fd60();
      (**(code **)(*param_1 + 0x10))(param_1[10]);
    }
    else if (iVar1 == 2) {
      param_1[7] = 0;
      FUN_0044fd60();
      (**(code **)(*param_1 + 0x10))(param_1[10]);
      return 1;
    }
  }
  return 1;
}

