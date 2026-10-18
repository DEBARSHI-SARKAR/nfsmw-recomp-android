/* speed.exe 007f08ff FUN_007f08ff; analysis pseudocode, not buildable source.
 */

uint FUN_007f08ff(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    return (uint)*param_1;
  }
  if (param_2 == 2) {
    return (uint)CONCAT11(*param_1,param_1[1]);
  }
  if (param_2 == 3) {
    uVar2 = (uint)CONCAT11(*param_1,param_1[1]);
    bVar1 = param_1[2];
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    bVar1 = param_1[3];
    uVar2 = (uint)CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
  }
  return (uint)bVar1 | uVar2 << 8;
}

