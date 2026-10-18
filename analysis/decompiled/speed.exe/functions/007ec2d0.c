/* speed.exe 007ec2d0 FUN_007ec2d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007ec2d0(int param_1)

{
  DWORD DVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    DVar1 = GetCurrentThreadId();
    bVar2 = DVar1 == _DAT_009baf70;
  }
  else if (param_1 == -1) {
    bVar2 = true;
  }
  else {
    DVar1 = GetCurrentThreadId();
    bVar2 = *(DWORD *)(param_1 + 8) == DVar1;
  }
  return bVar2;
}

