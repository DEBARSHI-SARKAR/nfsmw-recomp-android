/* speed.exe 0060bf20 FUN_0060bf20; analysis pseudocode, not buildable source.
 * calls 0060bea0 FUN_0060bea0
 * calls 00613880 FUN_00613880
 * calls 0060e960 FUN_0060e960
 * calls 00607d80 FUN_00607d80
 */

void FUN_0060bf20(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  if (100 < param_4) {
    FUN_00613880(param_1,"loop in gettable");
  }
  if (*param_2 == 5) {
    piVar1 = (int *)FUN_00607d80(param_2[1],param_3);
    if (*piVar1 == 0) {
      FUN_0060e960(param_1,param_2,param_3,param_4 + 1);
    }
    return;
  }
  FUN_0060bea0(param_3,param_4 + 1);
  return;
}

