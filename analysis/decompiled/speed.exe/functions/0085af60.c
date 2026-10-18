/* speed.exe 0085af60 FUN_0085af60; analysis pseudocode, not buildable source.
 */

void FUN_0085af60(int param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  
  if (0x14 < in_EAX) {
    in_EAX = 0x14;
  }
  uVar1 = 0;
  if (in_EAX != 0) {
    do {
      uVar2 = uVar1 + 1;
      *(char *)(uVar1 + unaff_EDI) =
           (char)(*(uint *)(param_1 + 8 + (uVar1 & 0xfffffffc)) >>
                 (('\x03' - ((byte)uVar1 & 3)) * '\b' & 0x1f));
      uVar1 = uVar2;
    } while (uVar2 != in_EAX);
  }
  return;
}

