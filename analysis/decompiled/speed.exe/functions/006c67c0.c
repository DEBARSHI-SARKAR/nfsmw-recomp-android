/* speed.exe 006c67c0 FUN_006c67c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c67c0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00982c80 == 0) {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xf,param_1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x18,param_1);
    return;
  }
  _DAT_0093de20 = param_1;
  _DAT_0093de24 = param_2;
  return;
}

