/* speed.exe 007ec814 FUN_007ec814; analysis pseudocode, not buildable source.
 * calls 007ec7f9 FUN_007ec7f9
 */

/* WARNING: Removing unreachable block (ram,0x007ec854) */

void FUN_007ec814(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int local_8;
  
  local_8 = 0;
  iVar1 = 1000000;
  lVar3 = FUN_007ec7f9();
  do {
    lVar4 = FUN_007ec7f9();
    if (lVar3 == lVar4) {
      bVar2 = iVar1 != 0;
      iVar1 = iVar1 + -1;
      local_8 = local_8 + -1 + (uint)bVar2;
      if (iVar1 == 0 && local_8 == 0) {
        return;
      }
    }
  } while ((ulonglong)(lVar4 - lVar3) < CONCAT44(param_2,param_1));
  return;
}

