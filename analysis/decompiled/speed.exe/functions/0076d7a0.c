/* speed.exe 0076d7a0 FUN_0076d7a0; analysis pseudocode, not buildable source.
 * calls 005d51e0 FUN_005d51e0
 * calls 00765770 FUN_00765770
 * calls 005d0c70 FUN_005d0c70
 * calls 007c4b80 FUN_007c4b80
 * calls 005d5ed0 FUN_005d5ed0
 * calls 00722980 FUN_00722980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0076d7a0(undefined4 param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint local_a4;
  float local_9c [2];
  float local_94;
  float local_8c [4];
  undefined1 local_7c [112];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d5ed0();
  local_4 = 0;
  FUN_00765770(param_1,local_7c);
  FUN_007c4b80();
  iVar3 = FUN_007c4b80();
  if (iVar3 < 5) {
    iVar3 = 4;
  }
  local_a4 = 0;
  fVar1 = _DAT_0089096c / (float)iVar3;
  if (-1 < iVar3) {
    do {
      uVar4 = local_a4 & 1;
      FUN_005d0c70((float)(int)local_a4 * fVar1,local_9c);
      local_8c[uVar4 * 2 + 1] = -local_9c[0];
      local_8c[uVar4 * 2] = local_94;
      if ((0 < (int)local_a4) &&
         (cVar2 = FUN_00722980(param_2,param_2 + 8,local_8c + uVar4 * 2,local_8c + (uVar4 ^ 1) * 2),
         cVar2 != '\0')) {
        local_4 = 0xffffffff;
        FUN_005d51e0();
        ExceptionList = local_c;
        return 1;
      }
      local_a4 = local_a4 + 1;
    } while ((int)local_a4 <= iVar3);
  }
  local_4 = 0xffffffff;
  FUN_005d51e0();
  ExceptionList = local_c;
  return 0;
}

