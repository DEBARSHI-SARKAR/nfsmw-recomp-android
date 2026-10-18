/* speed.exe 006c6810 FUN_006c6810; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (DAT_00982c80 == 0) {
    piVar1 = DAT_00982bdc;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x1b,param_1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x13,param_1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x14,piVar1);
    return;
  }
  _DAT_0093de28 = param_1;
  _DAT_0093de2c = param_2;
  _DAT_0093de30 = param_3;
  return;
}

