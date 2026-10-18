/* speed.exe 007b6250 FUN_007b6250; analysis pseudocode, not buildable source.
 * calls 007af4f0 FUN_007af4f0
 * calls 00576f10 FUN_00576f10
 * calls 007a4e50 FUN_007a4e50
 * calls 007b3f00 FUN_007b3f00
 * calls 007b3f30 FUN_007b3f30
 */

bool FUN_007b6250(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  byte bVar4;
  undefined4 ***local_14;
  undefined4 ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00883348;
  local_c = ExceptionList;
  ppppuVar3 = (undefined4 ****)0x0;
  bVar4 = 0;
  switch(param_1) {
  case 0x402:
    bVar4 = 0;
    break;
  case 0x403:
    bVar4 = 1;
    break;
  case 0x404:
    bVar4 = 2;
    break;
  case 0x405:
    bVar4 = 3;
    break;
  case 0x406:
    bVar4 = 4;
    break;
  case 0x407:
    bVar4 = 5;
    break;
  case 0x408:
    bVar4 = 6;
    break;
  case 0x409:
    bVar4 = 7;
  }
  local_14 = &local_14;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = local_14;
  FUN_007af4f0(0x4d,&local_14,bVar4);
  param_1._0_1_ = true;
  if ((undefined4 ****)local_14 != (undefined4 ****)0x0) {
    ppppuVar3 = (undefined4 ****)(local_14 + -1);
  }
  do {
    if (ppppuVar3 == (undefined4 ****)&stack0xffffffe8) {
LAB_007b6327:
      FUN_007b3f30();
      if ((param_2 != '\0') && (param_1._0_1_ == false)) {
        iVar2 = FUN_00576f10(0xe);
        param_1._0_1_ = iVar2 < 1;
      }
      local_4 = 0xffffffff;
      FUN_007b3f00();
      ExceptionList = local_c;
      return param_1._0_1_;
    }
    if (((*(byte *)((int)ppppuVar3[3] + 5) & 0x1f) == bVar4) &&
       (cVar1 = FUN_007a4e50(ppppuVar3,0), cVar1 == '\0')) {
      param_1._0_1_ = false;
      goto LAB_007b6327;
    }
    if (ppppuVar3[1] == (undefined4 ***)0x0) {
      ppppuVar3 = (undefined4 ****)0x0;
    }
    else {
      ppppuVar3 = (undefined4 ****)(ppppuVar3[1] + -1);
    }
  } while( true );
}

