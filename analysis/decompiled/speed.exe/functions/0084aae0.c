/* speed.exe 0084aae0 FUN_0084aae0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0084aae0(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 1) {
    DVar1 = GetTickCount();
    *(char *)(unaff_ESI + 0x93) = (char)DVar1;
    *(char *)(unaff_ESI + 0x92) = (char)(DVar1 >> 8);
    *(char *)(unaff_ESI + 0x91) = (char)(DVar1 >> 0x10);
    *(char *)(unaff_ESI + 0x90) = (char)(DVar1 >> 0x18);
  }
  if (((*(int *)(unaff_ESI + 0x40) != -1) && (*(code **)(unaff_ESI + 0x4c) != (code *)0x0)) &&
     ((*(byte *)(unaff_ESI + 0x3c) & 2) != 0)) {
    *(undefined4 *)(unaff_ESI + 0x40) = 0xffffffff;
    (**(code **)(unaff_ESI + 0x4c))();
    DVar1 = GetTickCount();
    *(DWORD *)(unaff_ESI + 0x40) = DVar1;
  }
  return;
}

