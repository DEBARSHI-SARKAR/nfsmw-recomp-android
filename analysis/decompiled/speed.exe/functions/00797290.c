/* speed.exe 00797290 FUN_00797290; analysis pseudocode, not buildable source.
 * calls 00761950 FUN_00761950
 * calls 00794b60 FUN_00794b60
 * calls 0078a310 FUN_0078a310
 * calls 0078a3a0 FUN_0078a3a0
 * calls 007921d0 FUN_007921d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00797290(undefined4 param_1)

{
  int iVar1;
  undefined4 local_410;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_410 = 0;
  FUN_0078a3a0(&local_410,0x20);
  _DAT_00905dd8 = local_410;
  local_410 = 0;
  FUN_0078a3a0(&local_410,0x20);
  DAT_00905ddc = local_410;
  local_410 = 0;
  FUN_0078a3a0(&local_410,0x20);
  DAT_00905de4 = local_410;
  FUN_00761950(DAT_00905ddc,local_410,param_1);
  FUN_00794b60();
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  DAT_009b41fc = 3;
  local_4 = 1;
  iVar1 = 0xb;
  if (0xb < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_0078a310(3,0x20);
  FUN_007921d0(0xb,local_40c,1);
  return;
}

