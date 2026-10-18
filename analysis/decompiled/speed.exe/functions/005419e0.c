/* speed.exe 005419e0 FUN_005419e0; analysis pseudocode, not buildable source.
 * calls 00796280 FUN_00796280
 * calls 0079bac0 FUN_0079bac0
 * calls 005faa20 FUN_005faa20
 * calls 005fb710 FUN_005fb710
 * calls 00541830 FUN_00541830
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 */

void __fastcall FUN_005419e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0091cacc + 0x4c;
  FUN_0079bac0(iVar1);
  iVar1 = FUN_00796280(iVar1);
  uVar2 = FUN_0083a670(iVar1 + 0x90,&DAT_0089dcd0,0);
  uVar2 = FUN_0083abc0(uVar2);
  FUN_005fb710(uVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_005faa20();
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(uint *)(param_1 + 0x48) = *(uint *)(iVar1 + 0xc) & 0x400;
  *(uint *)(param_1 + 0x50) = *(uint *)(iVar1 + 0xc) & 0x800;
  *(uint *)(param_1 + 0x40) = *(uint *)(iVar1 + 0xc) & 0x200;
  *(uint *)(param_1 + 0x5c) = *(uint *)(iVar1 + 0xc) >> 0xc & 1;
  uVar2 = FUN_0083a670(iVar1 + 0x90,&DAT_0089dccc,0);
  uVar2 = FUN_0083abc0(uVar2);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x24);
  *(uint *)(param_1 + 0x140) = *(uint *)(iVar1 + 0xc) & 2;
  *(uint *)(param_1 + 0x4c) = *(uint *)(iVar1 + 0xc) & 0x2000;
  FUN_00541830();
  return;
}

