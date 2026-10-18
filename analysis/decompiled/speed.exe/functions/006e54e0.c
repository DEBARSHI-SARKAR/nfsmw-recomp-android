/* speed.exe 006e54e0 FUN_006e54e0; analysis pseudocode, not buildable source.
 * calls 006e44c0 FUN_006e44c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e54e0(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xc3,(float)_DAT_00901ac0 * _DAT_008b004c);
  uVar1 = DAT_00901abc;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xaf,DAT_00901abc);
  if (DAT_008faed0 != '\0') {
    FUN_006e44c0(uVar1,piVar2,0,1);
  }
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xc3,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xaf,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  return;
}

