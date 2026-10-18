/* speed.exe 00856fe0 FUN_00856fe0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000011 GetTickCount
 */

void FUN_00856fe0(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xf8) = 0;
  *(undefined4 *)(unaff_ESI + 0xfc) = 0;
  *(undefined4 *)(unaff_ESI + 0x100) = 0;
  *(undefined4 *)(unaff_ESI + 0x108) = 0x65;
  *(undefined4 *)(unaff_ESI + 0xe0) = 0;
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  *(undefined4 *)(unaff_ESI + 0xec) = 0x65;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0x191c) = DVar1 - 5000;
  return;
}

