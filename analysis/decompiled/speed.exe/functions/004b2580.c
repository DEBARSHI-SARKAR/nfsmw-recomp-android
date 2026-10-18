/* speed.exe 004b2580 FUN_004b2580; analysis pseudocode, not buildable source.
 * calls 0081c4d8 FUN_0081c4d8
 */

uint __fastcall FUN_004b2580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0081c4d8(*(undefined4 *)(param_1 + 0x14));
  return (-1 < iVar1) - 1 & 0xfffffffd;
}

