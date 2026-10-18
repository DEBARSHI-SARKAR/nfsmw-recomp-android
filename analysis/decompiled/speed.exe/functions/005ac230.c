/* speed.exe 005ac230 FUN_005ac230; analysis pseudocode, not buildable source.
 * calls 005790c0 FUN_005790c0
 * calls 005abbc0 FUN_005abbc0
 * calls 005942a0 FUN_005942a0
 * calls 0059c330 FUN_0059c330
 * calls 0058aed0 FUN_0058aed0
 * calls 005942d0 FUN_005942d0
 * calls 005942b0 FUN_005942b0
 * calls 0058aef0 FUN_0058aef0
 * calls 005942e0 FUN_005942e0
 * calls 005abce0 FUN_005abce0
 * calls 0059c3a0 FUN_0059c3a0
 */

uint __fastcall FUN_005ac230(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  uint local_18;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar6 = &stack0x00000004;
  puVar5 = local_8;
  FUN_005abce0(puVar5,puVar6,param_1);
  FUN_0059c3a0(puVar5,puVar6);
  puVar6 = local_20;
  FUN_005abce0(puVar6);
  uVar2 = FUN_005942b0(puVar6);
  cVar1 = FUN_0058aef0(uVar2);
  uVar4 = 0;
  if (cVar1 != '\0') {
    iVar3 = FUN_005942e0();
    local_10 = *(undefined4 *)(iVar3 + 4);
    puVar7 = &local_10;
    puVar6 = local_c;
    FUN_005abbc0(puVar6,puVar7);
    FUN_0059c330(puVar6,puVar7);
    puVar6 = local_24;
    FUN_005abbc0(puVar6);
    uVar2 = FUN_005942a0(puVar6);
    uVar4 = FUN_0058aed0(uVar2);
    if ((uVar4 & 0xff) != 0) {
      uVar2 = FUN_005942d0();
      FUN_005790c0(uVar2);
      *(undefined4 *)(local_18 + 0x30) = 0;
      uVar4 = local_18;
    }
  }
  return uVar4;
}

