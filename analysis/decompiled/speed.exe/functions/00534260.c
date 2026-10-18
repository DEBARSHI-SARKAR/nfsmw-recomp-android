/* speed.exe 00534260 FUN_00534260; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00794790 FUN_00794790
 * calls 00520430 FUN_00520430
 * calls 00588280 FUN_00588280
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 * calls 0078b3e0 FUN_0078b3e0
 * calls 005889f0 FUN_005889f0
 * calls 00460c50 FUN_00460c50
 * calls 00574e30 FUN_00574e30
 * calls 005a5ea0 FUN_005a5ea0
 */

void __fastcall FUN_00534260(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00794790();
  iVar1 = FUN_0078b3e0();
  iVar6 = 0;
  iVar7 = 0;
  local_18 = iVar1;
  do {
    iVar2 = FUN_00460c50(local_18);
    if (iVar2 != 0) {
      pvVar3 = _malloc(400);
      local_4 = 1;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00520430(1,1,iVar7 * 0x20 + iVar1,2);
      }
      local_4 = 0xffffffff;
      FUN_005889f0(uVar4);
      break;
    }
    if ((iVar6 == 0) && (*(char *)(param_1 + 0x128) == '\0')) {
      pvVar3 = _malloc(400);
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        local_4 = iVar6;
        uVar4 = FUN_00520430(0,1,0,2);
      }
      local_4 = 0xffffffff;
      uVar4 = FUN_005889f0(uVar4);
      uVar5 = FUN_0056bc10(0x72bb728e);
      FUN_00588280(uVar4);
      FUN_00574e30(uVar5);
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    local_18 = local_18 + 0x20;
  } while (iVar7 < 4);
  FUN_005a5ea0(0);
  uVar4 = 0x5dc29751;
  if (*(char *)(param_1 + 0x128) != '\0') {
    uVar4 = 0x50eac1e3;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x3c458c1,uVar4);
  ExceptionList = local_c;
  return;
}

