/* speed.exe 00676a60 FUN_00676a60; analysis pseudocode, not buildable source.
 * calls 0066f740 FUN_0066f740
 */

void FUN_00676a60(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_0066f740(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    FUN_0066f740(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_0066f740(param_2,param_1);
  }
  return;
}

