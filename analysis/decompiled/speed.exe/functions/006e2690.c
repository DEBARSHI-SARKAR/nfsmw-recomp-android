/* speed.exe 006e2690 FUN_006e2690; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 * calls 006c9d70 FUN_006c9d70
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls 006dc790 FUN_006dc790
 * calls 006c9fd0 FUN_006c9fd0
 * calls 007e87f0 DirectInput8Create
 * calls 006ca0c0 FUN_006ca0c0
 * calls 006dc590 FUN_006dc590
 */

int __fastcall FUN_006e2690(int param_1)

{
  HMODULE pHVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087e5d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006c9d70();
  puVar6 = &DAT_00982d14;
  puVar5 = &DAT_008c065c;
  uVar4 = 0x800;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = DirectInput8Create(pHVar1,uVar4,puVar5,puVar6);
  if (iVar2 < 0) {
    FUN_006ca3d0("ERROR: failed to create a DInput object\n");
  }
  FUN_006dc590();
  puVar6 = (undefined4 *)(param_1 + 0x46e8);
  iVar2 = 2;
  do {
    iVar3 = 8;
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x4768);
  iVar2 = 2;
  do {
    iVar3 = 8;
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x47e8);
  iVar2 = 2;
  do {
    iVar3 = 8;
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x4868);
  iVar2 = 2;
  do {
    iVar3 = 8;
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x48e8);
  iVar2 = 2;
  do {
    iVar3 = 8;
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_006c9fd0();
  FUN_006dc790(param_1);
  FUN_006ca0c0();
  FUN_006ca3d0("EZ Wheel Wrapper v4.60.001\n");
  ExceptionList = (void *)0x0;
  return param_1;
}

