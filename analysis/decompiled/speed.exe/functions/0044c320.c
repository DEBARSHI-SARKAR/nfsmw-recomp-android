/* speed.exe 0044c320 FUN_0044c320; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_0044c320(undefined4 *param_1,code *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      puVar1 = (undefined4 *)param_1[1];
      *puVar1 = param_3;
      param_1[1] = param_3;
      param_3[1] = puVar1;
      *param_3 = param_1;
      return param_3;
    }
    iVar3 = (*param_2)(param_3,puVar1);
    if (iVar3 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  puVar2 = (undefined4 *)puVar1[1];
  *puVar2 = param_3;
  puVar1[1] = param_3;
  *param_3 = puVar1;
  param_3[1] = puVar2;
  return param_3;
}

