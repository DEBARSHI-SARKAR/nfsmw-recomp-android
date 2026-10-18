/* speed.exe 0070cc30 FUN_0070cc30; analysis pseudocode, not buildable source.
 * calls 0070c600 FUN_0070c600
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0070cc30(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fb58;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    return 4;
  }
  uVar6 = 0;
  uVar5 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_004cb270(*(undefined4 *)(param_1 + 8));
  FUN_004b8880(uVar1,uVar5,uVar6);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x3e) & 2) != 0) {
    pfVar2 = (float *)FUN_00454810(0xffbdad32,0);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)FUN_006269b0(4);
    }
    if ((float)(DAT_00925ae8 - *(int *)(param_1 + 0x10)) * _DAT_00890984 < *pfVar2) {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 4;
    }
    *(int *)(param_1 + 0x10) = DAT_00925ae8;
    *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfd;
  }
  pcVar3 = (char *)FUN_00454810(0xaecbb4ad,0);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)FUN_006269b0(1);
  }
  if (*pcVar3 == '\0') {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = FUN_0070c600(param_1,0xffffffff);
  local_4 = 0xffffffff;
  FUN_0045a430();
  if (iVar4 != 0) {
    ExceptionList = local_c;
    return iVar4;
  }
  ExceptionList = local_c;
  return 1;
}

