/* speed.exe 008586f0 FUN_008586f0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0085ad50 FUN_0085ad50
 * calls 0085aeb0 FUN_0085aeb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008586f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD DVar1;
  int iVar2;
  int local_4;
  
  if (DAT_009c3e14 == 0) {
    DAT_009c3e14 = GetTickCount();
  }
  DVar1 = GetTickCount();
  DAT_009c3e18 = DAT_009c3e18 + DVar1;
  _DAT_009c3e1c = _DAT_009c3e1c + 1;
  iVar2 = 0;
  local_4 = 0;
  do {
    DAT_009c3e20 = DAT_009c3e20 + (&local_4)[iVar2];
    iVar2 = iVar2 + 1;
    local_4 = iVar2;
  } while (iVar2 < 0x20);
  if (param_1 != 0) {
    FUN_0085ad50(param_3,&DAT_009c3e14,0x10,3);
    FUN_0085aeb0(param_3,param_1,param_2);
  }
  return;
}

