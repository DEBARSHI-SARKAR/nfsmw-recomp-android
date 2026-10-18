/* speed.exe 0045ca60 FUN_0045ca60; analysis pseudocode, not buildable source.
 */

uint FUN_0045ca60(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (0 < (int)param_2) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 << 8 ^ *(uint *)(&DAT_00893d58 + (param_3 >> 0x18 ^ (uint)bVar1) * 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    for (; 0 < (int)param_2; param_2 = (int)param_2 >> 8) {
      param_3 = param_3 << 8 ^ *(uint *)(&DAT_00893d58 + ((param_3 >> 0x18 ^ param_2) & 0xff) * 4);
    }
  }
  return ~param_3;
}

