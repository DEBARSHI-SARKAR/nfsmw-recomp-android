/* speed.exe 0067f950 FUN_0067f950; analysis pseudocode, not buildable source.
 * calls 00672e80 FUN_00672e80
 * calls 0067f800 FUN_0067f800
 */

void FUN_0067f950(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20 [8];
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  iVar2 = 0;
  local_20[7] = 0;
  do {
    uVar1 = FUN_00672e80(param_1,iVar2);
    local_20[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  FUN_0067f800(param_1,local_20);
  return;
}

