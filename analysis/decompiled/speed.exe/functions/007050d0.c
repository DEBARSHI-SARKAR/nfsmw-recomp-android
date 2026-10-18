/* speed.exe 007050d0 FUN_007050d0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 0045a760 FUN_0045a760
 * calls 0045a430 FUN_0045a430
 * calls 00452920 FUN_00452920
 * calls 00403c30 FUN_00403c30
 */

bool FUN_007050d0(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fa28;
  local_c = ExceptionList;
  if (DAT_00993cc8 == 0) {
    return false;
  }
  ExceptionList = &local_c;
  FUN_00403c30(DAT_00993cc8 + 0x168);
  local_4 = 0;
  bVar1 = true;
  if ((*(int *)(local_18 + 0x40) == 0) || (*(int *)(local_18 + 0x40) == 0x800000)) {
    bVar1 = false;
  }
  iVar2 = FUN_00452430();
  while( true ) {
    if ((iVar2 == -0x113dd8e6) || (!bVar1)) goto LAB_0070519f;
    iVar2 = FUN_00452430();
    if ((iVar2 == -0x2063fd54) ||
       ((iVar2 = FUN_00452430(), iVar2 == -0x567ee46d ||
        (iVar2 = FUN_00452430(), iVar2 == 0x230eb710)))) break;
    uVar3 = FUN_00452920(local_1c);
    FUN_0045a760(uVar3);
    iVar2 = FUN_00452430();
  }
  bVar1 = false;
LAB_0070519f:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return bVar1;
}

