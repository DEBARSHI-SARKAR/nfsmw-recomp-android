/* speed.exe 00684a10 FUN_00684a10; analysis pseudocode, not buildable source.
 * calls 0067d200 FUN_0067d200
 * calls 00684710 FUN_00684710
 */

void __thiscall FUN_00684a10(int param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  int local_4;
  
  param_2 = (undefined4 *)*param_2;
  local_4 = param_1;
  piVar1 = (int *)FUN_0067d200(&local_4,&param_2);
  if (*piVar1 != *(int *)(param_1 + 0x94)) {
    piVar1 = (int *)FUN_00684710(&param_2);
    piVar1 = (int *)*piVar1;
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x2d) != param_3)) {
      *(char *)((int)piVar1 + 0x2d) = param_3;
      if (param_3 != '\0') {
        (**(code **)(*piVar1 + 0x20))();
        return;
      }
      (**(code **)(*piVar1 + 0x24))();
    }
  }
  return;
}

