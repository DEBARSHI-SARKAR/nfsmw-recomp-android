/* speed.exe 00495010 FUN_00495010; analysis pseudocode, not buildable source.
 * calls 00494fa0 FUN_00494fa0
 */

uint __fastcall FUN_00495010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00494fa0();
  return iVar1 + 3 + (uint)*(byte *)(param_1 + 0x11) * 2 & 0xfffffffc;
}

