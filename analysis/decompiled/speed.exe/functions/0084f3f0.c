/* speed.exe 0084f3f0 FUN_0084f3f0; analysis pseudocode, not buildable source.
 * calls 0084bd10 FUN_0084bd10
 * calls 0084f2c0 FUN_0084f2c0
 * calls 0084bdf0 FUN_0084bdf0
 */

int FUN_0084f3f0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int unaff_ESI;
  
  *in_EAX = 0;
  *(int *)(unaff_ESI + 0xbc) =
       (*(int *)(unaff_ESI + 0xb4) + *(int *)(unaff_ESI + 0xbc)) % *(int *)(unaff_ESI + 0xb8);
  iVar1 = FUN_0084bd10(unaff_ESI + 0x1f0);
  if (iVar1 != 0) {
    FUN_0084f2c0();
    FUN_0084bdf0(unaff_ESI + 0x1f0);
  }
  return (((*(int *)(unaff_ESI + 0xbc) - *(int *)(unaff_ESI + 0xc0)) + *(int *)(unaff_ESI + 0xb8)) %
         *(int *)(unaff_ESI + 0xb8)) / *(int *)(unaff_ESI + 0xb4);
}

