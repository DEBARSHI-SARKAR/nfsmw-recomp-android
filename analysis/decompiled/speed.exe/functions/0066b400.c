/* speed.exe 0066b400 FUN_0066b400; analysis pseudocode, not buildable source.
 * calls 0043a700 FUN_0043a700
 */

undefined4 * __thiscall FUN_0066b400(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[6] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[6] + 0x34;
  }
  FUN_0043a700(iVar1);
  *param_1 = &PTR_FUN_008a94f8;
  param_1[6] = param_2;
  if (param_2 != 0) {
    param_1[5] = param_2 + 0x94;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}

