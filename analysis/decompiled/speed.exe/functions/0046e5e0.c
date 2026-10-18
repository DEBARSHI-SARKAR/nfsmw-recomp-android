/* speed.exe 0046e5e0 FUN_0046e5e0; analysis pseudocode, not buildable source.
 */

int FUN_0046e5e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar1 = ((param_1 - param_3) + -0x28) / 0x84 + (uint)(param_2 != 0) * 2 + -1;
    uVar2 = (int)*(short *)(param_3 + 0x14) - 1;
    uVar3 = ((int)uVar1 < 1) - 1 & uVar1;
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    if (uVar1 == uVar2) {
      return uVar1 * 0x84 + 0x28 + param_3;
    }
  }
  return 0;
}

