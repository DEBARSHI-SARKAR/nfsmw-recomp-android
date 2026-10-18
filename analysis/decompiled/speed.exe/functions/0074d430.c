/* speed.exe 0074d430 FUN_0074d430; analysis pseudocode, not buildable source.
 * calls 004040f0 FUN_004040f0
 * calls 00454640 FUN_00454640
 * calls 005ca870 FUN_005ca870
 * calls 005cc240 FUN_005cc240
 */

undefined4 __thiscall FUN_0074d430(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == 0) {
    param_2 = FUN_00454640(PTR_s_911turbo_008f86ac);
  }
  FUN_005ca870(param_1 + 0x30,local_3c);
  FUN_004040f0(&local_30);
  local_28 = &local_30;
  local_18 = local_3c;
  local_2c = 0xa6b47fac;
  local_20 = 6;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 2;
  local_1c = param_2;
  local_14 = param_1;
  iVar2 = FUN_005cc240("PVehicle");
  piVar1 = DAT_0092c66c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == iVar2) break;
    piVar1 = (int *)piVar1[2];
  }
  uVar3 = (*(code *)piVar1[1])(local_30,0xa6b47fac,&local_30);
  return uVar3;
}

