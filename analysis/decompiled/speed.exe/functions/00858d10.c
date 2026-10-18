/* speed.exe 00858d10 FUN_00858d10; analysis pseudocode, not buildable source.
 */

byte * __fastcall FUN_00858d10(uint *param_1)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_ESI;
  byte *unaff_EDI;
  
  if (unaff_ESI != (uint *)0x0) {
    *unaff_ESI = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  if ((in_EAX != (byte *)0x0) && (in_EAX != unaff_EDI)) {
    if (param_1 != (uint *)0x0) {
      *param_1 = (uint)*in_EAX;
    }
    if (in_EAX + 1 != unaff_EDI) {
      bVar1 = in_EAX[1];
      uVar3 = (uint)bVar1;
      pbVar2 = in_EAX + 2;
      if (0x7f < uVar3) {
        uVar4 = uVar3 & 0x7f;
        uVar3 = 0;
        if ((bVar1 & 0x7f) != 0) {
          do {
            if (pbVar2 == unaff_EDI) {
              return (byte *)0x0;
            }
            uVar3 = uVar3 << 8 | (uint)*pbVar2;
            pbVar2 = pbVar2 + 1;
            uVar4 = uVar4 - 1;
          } while (0 < (int)uVar4);
        }
      }
      if (unaff_ESI != (uint *)0x0) {
        *unaff_ESI = uVar3;
      }
      return pbVar2;
    }
  }
  return (byte *)0x0;
}

