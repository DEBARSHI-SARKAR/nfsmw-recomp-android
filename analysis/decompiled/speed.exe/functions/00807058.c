/* speed.exe 00807058 FUN_00807058; analysis pseudocode, not buildable source.
 */

uint FUN_00807058(uint param_1)

{
  uint *in_EAX;
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)*in_EAX;
  uVar2 = (1 << (bVar1 & 0x1f)) - 1U & in_EAX[1];
  if (*in_EAX < param_1) {
    uVar2 = (uint)*(byte *)in_EAX[2] | uVar2 << 8;
    bVar1 = (bVar1 - (char)param_1) + 8;
  }
  else {
    bVar1 = bVar1 - (char)param_1;
  }
  return uVar2 >> (bVar1 & 0x1f);
}

