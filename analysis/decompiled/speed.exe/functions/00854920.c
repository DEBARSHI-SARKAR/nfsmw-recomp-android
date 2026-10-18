/* speed.exe 00854920 FUN_00854920; analysis pseudocode, not buildable source.
 */

byte * FUN_00854920(void)

{
  byte *in_EAX;
  byte bVar1;
  byte bVar2;
  byte *unaff_EBX;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar2 = *in_EAX;
  do {
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    pbVar3 = in_EAX;
    pbVar4 = unaff_EBX;
    while( true ) {
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
        bVar2 = bVar2 ^ 0x20;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
        bVar1 = bVar1 ^ 0x20;
      }
      if ((bVar2 != bVar1) || (bVar2 == 0)) break;
      if (bVar1 == 0) {
        return in_EAX;
      }
    }
    if (bVar1 == 0) {
      return in_EAX;
    }
    bVar2 = *pbVar3;
    in_EAX = pbVar3;
  } while( true );
}

