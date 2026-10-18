/* speed.exe 0067f800 FUN_0067f800; analysis pseudocode, not buildable source.
 * calls 0067c220 FUN_0067c220
 * calls 00678ad0 FUN_00678ad0
 * calls 0045a430 FUN_0045a430
 * calls 0045be30 FUN_0045be30
 * calls 0045a5d0 FUN_0045a5d0
 * calls 00678150 FUN_00678150
 * calls 006785a0 FUN_006785a0
 * calls 00403c30 FUN_00403c30
 */

undefined4 FUN_0067f800(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_20 [16];
  byte local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b1e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  if ((local_10 & 1) != 0) {
    FUN_0045a5d0();
  }
  iVar2 = 0;
  do {
    cVar1 = FUN_006785a0(local_20,iVar2);
    if (cVar1 == '\0') {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  iVar2 = 0;
  do {
    cVar1 = FUN_00678ad0(local_20,iVar2,*(undefined4 *)(param_2 + iVar2 * 4));
    if (cVar1 == '\0') goto LAB_0067f899;
    if ((1 << ((byte)iVar2 & 0x1f) & *(uint *)(param_2 + 0x1c)) == 0) {
      FUN_0067c220(local_20,iVar2);
    }
    else {
      cVar1 = FUN_00678150(local_20);
      if (cVar1 == '\0') goto LAB_0067f899;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  iVar2 = 0;
  while( true ) {
    cVar1 = FUN_006785a0(local_20,iVar2);
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
    if (6 < iVar2) {
      FUN_0045be30(local_20);
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_0067f899:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

