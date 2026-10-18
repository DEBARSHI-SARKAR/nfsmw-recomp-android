/* speed.exe 00684a80 FUN_00684a80; analysis pseudocode, not buildable source.
 * calls 0067d200 FUN_0067d200
 * calls 00684710 FUN_00684710
 */

undefined4 __thiscall FUN_00684a80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int local_4;
  
  param_2 = (undefined4 *)*param_2;
  local_4 = param_1;
  piVar1 = (int *)FUN_0067d200(&local_4,&param_2);
  if (*piVar1 != *(int *)(param_1 + 0x94)) {
    piVar1 = (int *)FUN_00684710(&param_2);
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 8))();
      return 1;
    }
  }
  return 0;
}

