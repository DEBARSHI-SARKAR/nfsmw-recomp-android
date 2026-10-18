/* speed.exe 006e2640 FUN_006e2640; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 * calls 006c9d70 FUN_006c9d70
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls 007e87f0 DirectInput8Create
 * calls 006dc590 FUN_006dc590
 */

undefined4 __fastcall FUN_006e2640(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  FUN_006c9d70();
  uVar6 = 0;
  puVar5 = &DAT_00982d14;
  puVar4 = &DAT_008c065c;
  uVar3 = 0x800;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
  if (iVar2 < 0) {
    FUN_006ca3d0("ERROR: failed to create a DInput object\n");
  }
  FUN_006dc590();
  return param_1;
}

