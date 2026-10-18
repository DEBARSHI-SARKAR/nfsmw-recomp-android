/* speed.exe 0084ecc0 FUN_0084ecc0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0084ecc0(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xbc) = 0;
  *(undefined4 *)(unaff_ESI + 0xc0) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 200) = DVar1 - 5000;
  *(undefined4 *)(unaff_ESI + 0xdc) = 0xffffffff;
  return;
}

