/* speed.exe 005f46c0 FUN_005f46c0; analysis pseudocode, not buildable source.
 * calls 005f2de0 FUN_005f2de0
 * calls 005e6320 FUN_005e6320
 */

void FUN_005f46c0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_3;
  while (param_2 != iVar1) {
    puVar2 = (undefined4 *)FUN_005f2de0(&param_3,param_5,param_2 + 0xc);
    param_5 = *puVar2;
    FUN_005e6320();
    FUN_005e6320();
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

