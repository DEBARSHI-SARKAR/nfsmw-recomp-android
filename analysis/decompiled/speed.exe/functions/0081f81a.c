/* speed.exe 0081f81a FUN_0081f81a; analysis pseudocode, not buildable source.
 */

uint FUN_0081f81a(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar2 == 0) {
    return (uint)*(ushort *)(&DAT_0090bd38 + param_1 * 2);
  }
  if (uVar2 == 1) {
    return (uint)*(ushort *)(&DAT_0090bf38 + param_1 * -2);
  }
  if (uVar2 == 2) {
    uVar1 = *(ushort *)(&DAT_0090bd38 + param_1 * 2);
  }
  else {
    uVar1 = *(ushort *)(&DAT_0090bf38 + param_1 * -2);
  }
  return -(uint)uVar1;
}

