/* speed.exe 0064c790 FUN_0064c790; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 */

undefined4 * __thiscall FUN_0064c790(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[4] = param_3;
  FUN_00460c70(param_1 + 5,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = param_1 + 0x46;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

