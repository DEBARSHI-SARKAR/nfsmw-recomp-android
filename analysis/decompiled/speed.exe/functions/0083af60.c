/* speed.exe 0083af60 FUN_0083af60; analysis pseudocode, not buildable source.
 */

uint FUN_0083af60(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      while( true ) {
        bVar1 = *param_1;
        if (((char)bVar1 < '0') || ('9' < (char)bVar1)) break;
        uVar2 = uVar2 & 0xffffff00 | (bVar1 & 0xf) + (uVar2 & 0xff) * 10;
        param_1 = param_1 + 1;
      }
      param_2 = uVar2;
      if (bVar1 != 0x2e) break;
      uVar2 = uVar2 << 8;
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

