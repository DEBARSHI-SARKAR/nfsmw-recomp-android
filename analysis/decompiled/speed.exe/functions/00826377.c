/* speed.exe 00826377 FUN_00826377; analysis pseudocode, not buildable source.
 * calls 0081eb58 FUN_0081eb58
 */

int FUN_00826377(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10001) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x10000;
  }
  uVar1 = FUN_0081eb58();
  return (int)(((uVar1 & 0x7fff) - 0x4000) * param_1) >> 0xe;
}

