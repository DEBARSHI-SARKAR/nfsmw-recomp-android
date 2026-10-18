/* speed.exe 004e0800 FUN_004e0800; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e0800(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  DAT_008efd7c = 0xffffffff;
  _DAT_008efd78 = 0xffffffff;
  iVar1 = FUN_004aeaa0(0x40010010);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x114) = *(uint *)(iVar1 + 0x114) & 0xfffffdff;
  }
  return;
}

