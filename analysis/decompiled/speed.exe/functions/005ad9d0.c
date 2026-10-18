/* speed.exe 005ad9d0 FUN_005ad9d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005ad9d0(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  thunk_FUN_007c7250(*param_1);
  *param_1 = 0;
  if (param_2 != 0) {
    pvVar1 = _malloc(param_2 * 4);
    *param_1 = pvVar1;
  }
  param_1[1] = param_2;
  return;
}

