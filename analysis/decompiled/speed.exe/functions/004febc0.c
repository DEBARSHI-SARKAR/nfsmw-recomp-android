/* speed.exe 004febc0 FUN_004febc0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x004febfd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004febc0(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_007c4b80();
    uVar2 = FUN_007c4b80();
    *param_3 = iVar1 << 0x10 | uVar2;
    iVar1 = FUN_007c4b80();
    uVar2 = FUN_007c4b80();
    *param_4 = iVar1 << 0x10 | uVar2;
  }
  return;
}

