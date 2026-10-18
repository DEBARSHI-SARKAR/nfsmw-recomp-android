/* speed.exe 00845e90 FUN_00845e90; analysis pseudocode, not buildable source.
 */

void FUN_00845e90(void)

{
  byte bVar1;
  byte *in_EAX;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  
  uVar3 = 0;
  do {
    bVar1 = *in_EAX;
    uVar2 = (uint)bVar1;
    if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
      if ((((char)bVar1 < 'a') || ('f' < (char)bVar1)) &&
         (((char)bVar1 < 'A' || ('F' < (char)bVar1)))) {
        *unaff_ESI = uVar3;
        return;
      }
      if ('9' < (char)bVar1) {
        uVar2 = (uint)(byte)(bVar1 + 9);
      }
    }
    uVar3 = uVar2 & 0xf | uVar3 << 4;
    in_EAX = in_EAX + 1;
  } while( true );
}

