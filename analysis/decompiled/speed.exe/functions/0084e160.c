/* speed.exe 0084e160 FUN_0084e160; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0084e160(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xc4) = 0;
  *(undefined4 *)(unaff_ESI + 200) = 0;
  *(undefined4 *)(unaff_ESI + 0xb8) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0xd4) = DVar1 - 5000;
  return;
}

