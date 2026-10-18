/* speed.exe 00495cb0 FUN_00495cb0; analysis pseudocode, not buildable source.
 * calls 00495c40 FUN_00495c40
 */

uint __fastcall FUN_00495cb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00495c40();
  return iVar1 + 3 + (uint)*(byte *)(param_1 + 0x11) * 2 & 0xfffffffc;
}

