/* speed.exe 007b9740 FUN_007b9740; analysis pseudocode, not buildable source.
 * calls 007b3680 FUN_007b3680
 * calls 005881c0 FUN_005881c0
 * calls 0056f180 FUN_0056f180
 * calls 005906f0 FUN_005906f0
 * calls 00591e90 FUN_00591e90
 * calls 00591160 FUN_00591160
 * calls 00591330 FUN_00591330
 * calls 0056ed30 FUN_0056ed30
 * calls 00652ad0 _malloc
 * calls 00593560 FUN_00593560
 * calls 0056ecf0 FUN_0056ecf0
 * calls 00593880 FUN_00593880
 * calls 0059bd30 FUN_0059bd30
 * calls 0056ed10 FUN_0056ed10
 * calls 0056dbe0 FUN_0056dbe0
 */

void FUN_007b9740(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593880();
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    piVar2 = (int *)FUN_0056ecf0(local_20);
    if (*piVar2 != -1) {
      cVar1 = FUN_0056f180(0xf0004);
      if (cVar1 != '\0') {
        puVar3 = _malloc(0x1c);
        local_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar6 = *piVar2;
          uVar4 = FUN_00591160();
          uVar5 = FUN_00591330();
          FUN_005881c0(uVar5,uVar4);
          puVar3[6] = iVar6;
          *puVar3 = &PTR_FUN_008b7aa0;
        }
        local_4 = 0xffffffff;
        FUN_0059bd30(puVar3);
        iVar6 = FUN_0056dbe0(0xb);
        if (*(int *)(iVar6 + 0x10) == *piVar2) {
          local_1c = local_24;
        }
        local_24 = local_24 + 1;
      }
    }
    local_20 = local_20 + 1;
  } while (local_20 < 200);
  iVar6 = FUN_005906f0();
  if (iVar6 < 0x14) {
    cVar1 = FUN_0056ed30();
    if (cVar1 != '\0') {
      cVar1 = FUN_0056ed10();
      if (cVar1 != '\0') {
        puVar3 = _malloc(0x1c);
        local_4 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_005881c0(0x91d3a6ba,0x29ae0714);
          *puVar3 = &PTR_FUN_008b7aa0;
          puVar3[6] = 0xffffffff;
        }
        local_4 = 0xffffffff;
        FUN_0059bd30(puVar3);
      }
    }
  }
  FUN_00593560(local_1c);
  iVar6 = FUN_00591e90("GarageMain.fng");
  if (*(int *)(iVar6 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x34) + 0x574) = 0;
  }
  FUN_007b3680();
  ExceptionList = local_c;
  return;
}

