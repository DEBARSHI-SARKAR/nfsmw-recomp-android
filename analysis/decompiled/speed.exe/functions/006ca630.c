/* speed.exe 006ca630 FUN_006ca630; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

void FUN_006ca630(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = param_2;
  if (100 < param_2) {
    uVar1 = 100;
  }
  local_4 = (uVar1 * 10000) / 100;
  local_14 = 0x14;
  local_10 = 0x10;
  local_c = 0;
  local_8 = 0;
  FUN_006ca3d0("Setting gain to %d\n",uVar1);
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    param_2 = (**(code **)(*param_1 + 0x18))(param_1,7,&local_14);
  }
  if ((int)param_2 < 0) {
    FUN_006ca3d0("ERROR: Failed to set overall force gain\n");
  }
  return;
}

