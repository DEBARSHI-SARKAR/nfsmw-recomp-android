/* speed.exe 007b60e0 FUN_007b60e0; analysis pseudocode, not buildable source.
 * calls 00747ae0 FUN_00747ae0
 * calls 007af4f0 FUN_007af4f0
 * calls 00576f10 FUN_00576f10
 * calls 007a4e50 FUN_007a4e50
 * calls 007b3f00 FUN_007b3f00
 * calls 007b3f30 FUN_007b3f30
 */

bool FUN_007b60e0(undefined4 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined4 ***local_14;
  undefined4 ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00883328;
  local_c = ExceptionList;
  ppppuVar4 = (undefined4 ****)0x0;
  iVar5 = 0;
  switch(param_1) {
  case 0x702:
    iVar5 = 0x352d08d1;
    break;
  case 0x703:
    iVar5 = 0x9136;
    break;
  case 0x704:
    iVar5 = 0x9536;
    break;
  case 0x705:
    iVar5 = 0x2b77feb;
    break;
  case 0x706:
    iVar5 = 0x324ac97;
    break;
  case 0x707:
    iVar5 = 0x48e25793;
    break;
  case 0x708:
    iVar5 = -0x22abb5fe;
    break;
  case 0x709:
    iVar5 = 0x648;
    break;
  case 0x70a:
    iVar5 = 0x1e6a3b;
    break;
  case 0x70b:
    iVar5 = 0x1c386b;
  }
  local_14 = &local_14;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = local_14;
  FUN_007af4f0(0x42,&local_14,iVar5);
  bVar1 = true;
  if ((undefined4 ****)local_14 != (undefined4 ****)0x0) {
    ppppuVar4 = (undefined4 ****)(local_14 + -1);
  }
  do {
    if (ppppuVar4 == (undefined4 ****)&stack0xffffffe8) {
LAB_007b61cd:
      FUN_007b3f30();
      if ((param_2 != '\0') && (!bVar1)) {
        iVar5 = FUN_00576f10(0xb,0);
        bVar1 = iVar5 < 1;
      }
      local_4 = 0xffffffff;
      FUN_007b3f00();
      ExceptionList = local_c;
      return bVar1;
    }
    iVar3 = FUN_00747ae0(0xebb03e66,0);
    if ((iVar3 == iVar5) && (cVar2 = FUN_007a4e50(ppppuVar4,0), cVar2 == '\0')) {
      bVar1 = false;
      goto LAB_007b61cd;
    }
    if (ppppuVar4[1] == (undefined4 ***)0x0) {
      ppppuVar4 = (undefined4 ****)0x0;
    }
    else {
      ppppuVar4 = (undefined4 ****)(ppppuVar4[1] + -1);
    }
  } while( true );
}

