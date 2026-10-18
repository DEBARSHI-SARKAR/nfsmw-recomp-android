/* speed.exe 004dbb90 FUN_004dbb90; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 004ae980 FUN_004ae980
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004dbb90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cafb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_004ae980("SND: Csis WindWeather");
  piVar2 = (int *)FUN_00831667(0x14);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1 = piVar2 + 1;
    *piVar1 = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    local_10 = piVar2;
    iVar3 = FUN_00831a8a(&DAT_009147d4,piVar1,piVar2);
    if (iVar3 < 0) {
      FUN_0083198b(&PTR_s_FX_WIND_Weather_008f02a0);
      FUN_00831a8a(&DAT_009147d4,piVar1,piVar2);
    }
  }
  param_1[0xc] = (int)piVar2;
  local_4 = 0xffffffff;
  local_10 = (int *)0x0;
  if (*piVar2 == 0) {
    param_1[0xd] = 0;
    ExceptionList = local_c;
    return;
  }
  FUN_008311aa(&local_10);
  param_1[0xd] = (int)local_10;
  ExceptionList = local_c;
  return;
}

