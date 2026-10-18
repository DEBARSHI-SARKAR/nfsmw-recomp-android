/* speed.exe 005009d0 FUN_005009d0; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 0073d2c0 FUN_0073d2c0
 * calls 006c06a0 FUN_006c06a0
 * calls 006e69f0 FUN_006e69f0
 * calls 00652ad0 _malloc
 * calls 006cefa0 FUN_006cefa0
 * calls 004fb810 FUN_004fb810
 * calls 004fc7b0 FUN_004fc7b0
 * calls 004fcd00 FUN_004fcd00
 * calls 004fbee0 FUN_004fbee0
 * calls 006be300 FUN_006be300
 * calls 00449870 FUN_00449870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005009d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00915128 = _malloc(0x64000);
  DAT_0091512c = _malloc(0x64000);
  DAT_00915f84 = DAT_00915128;
  DAT_00915f88 = (int)DAT_00915128 + 0x64000;
  DAT_00915f7c = 0x64000;
  _DAT_00915f90 = 0;
  _DAT_00915f74 = FUN_004662e0(0xa0,0x20,"ePolySlotPool",0);
  *(uint *)(_DAT_00915f74 + 0x14) = *(uint *)(_DAT_00915f74 + 0x14) & 0xfffffffd;
  FUN_004fb810();
  FUN_004fcd00();
  FUN_004fbee0();
  FUN_006c06a0();
  puVar2 = (undefined4 *)PTR_DAT_008f23e8;
  for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_006be300();
  FUN_004fc7b0();
  FUN_006cefa0();
  FUN_00449870();
  FUN_0073d2c0();
  FUN_006e69f0();
  return;
}

