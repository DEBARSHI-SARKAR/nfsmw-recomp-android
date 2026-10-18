/* speed.exe 004e8260 FUN_004e8260; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004e6b40 FUN_004e6b40
 * calls 0045a430 FUN_0045a430
 * calls 006ff7e0 FUN_006ff7e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8260(void)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cff8;
  local_c = ExceptionList;
  if (DAT_00914354 == '\0') {
    ExceptionList = &local_c;
    if (DAT_0091435c != 0) {
      ExceptionList = &local_c;
      FUN_004e6b40(*(undefined4 *)(DAT_0091435c + 0x580),0,0);
      local_4 = 0;
      iVar1 = FUN_004546a0();
      if (iVar1 == 0x5a3e90b0) {
        *(undefined4 *)(*(int *)(DAT_0091435c + 0xc) + 0x14) = 0x7fff;
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    piVar2 = (int *)FUN_006ff2d0(0);
    (**(code **)(*piVar2 + 0x44))(2);
    FUN_006ff2d0(0);
    FUN_006ff7e0();
    _DAT_00914358 = 0x40000000;
  }
  ExceptionList = local_c;
  return;
}

