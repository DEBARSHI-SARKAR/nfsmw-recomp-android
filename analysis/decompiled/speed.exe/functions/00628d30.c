/* speed.exe 00628d30 FUN_00628d30; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 006e2690 FUN_006e2690
 * calls 006d84d0 FUN_006d84d0
 * calls 006d8680 FUN_006d8680
 * calls 006ca110 FUN_006ca110
 */

void FUN_00628d30(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008777e4;
  local_c = ExceptionList;
  if (DAT_009203c4 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x4fd0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_009203c4 = 0;
    }
    else {
      DAT_009203c4 = FUN_006e2690(DAT_00982bf4);
    }
    local_4 = 0xffffffff;
    FUN_006d84d0();
    iVar3 = 0;
    do {
      iVar2 = FUN_006ca110(iVar3);
      if (iVar2 != 0) {
        FUN_006d8680(iVar3,0,0xb4,0xb4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  ExceptionList = local_c;
  return;
}

