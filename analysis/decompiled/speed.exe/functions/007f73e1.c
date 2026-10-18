/* speed.exe 007f73e1 FUN_007f73e1; analysis pseudocode, not buildable source.
 */

uint FUN_007f73e1(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_2 < 4) {
    uVar1 = 0;
  }
  else {
    param_2 = param_2 + -4;
    pbVar2 = param_1 + 4;
    uVar1 = ~((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
             (uint)param_1[3]);
    if (0 < param_2) {
      do {
        uVar1 = (uVar1 << 8 | (uint)*pbVar2) ^ *(uint *)(&DAT_00908248 + (uVar1 >> 0x18) * 4);
        pbVar2 = pbVar2 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar1 = ~uVar1;
  }
  return uVar1;
}

