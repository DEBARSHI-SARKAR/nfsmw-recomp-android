/* speed.exe 00525f40 FUN_00525f40; analysis pseudocode, not buildable source.
 * calls 006caf50 FUN_006caf50
 * calls 00653f60 FUN_00653f60
 * calls 007f7fcd FUN_007f7fcd
 */

void __fastcall FUN_00525f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00653f60();
  iVar1 = ((-(uint)(iVar1 != 0) & 0xfffffffc) + 0x14) * 2;
  uVar2 = FUN_006caf50(iVar1);
  uVar2 = FUN_007f7fcd(uVar2,iVar1);
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  return;
}

