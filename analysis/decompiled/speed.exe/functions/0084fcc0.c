/* speed.exe 0084fcc0 FUN_0084fcc0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0084fcc0(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 200) = 0;
  *(undefined4 *)(unaff_ESI + 0xcc) = 0;
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  *(undefined4 *)(unaff_ESI + 0xd8) = 0x100;
  *(undefined4 *)(unaff_ESI + 0xdc) = 0x80;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0x100;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0x80;
  *(undefined4 *)(unaff_ESI + 0xbc) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0xe4) = DVar1 - 5000;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0xe8) = DVar1 - 5000;
  return;
}

