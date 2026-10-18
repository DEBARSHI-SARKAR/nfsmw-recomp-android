/* speed.exe 0066c8a0 FUN_0066c8a0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00452940 FUN_00452940
 * calls 004ab5d0 FUN_004ab5d0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

int FUN_0066c8a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a768;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00454810(0x7a7a3e5,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_004ab5d0(iVar1,0,0);
  local_4 = 0;
  uVar2 = FUN_00452940();
  if (2 < uVar2) {
    iVar3 = uVar2 - 2;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar3;
}

