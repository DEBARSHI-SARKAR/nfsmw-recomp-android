/* speed.exe 004699d0 FUN_004699d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004699d0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)*(short *)(param_1 + 0xc) - 1;
  uVar2 = ((int)param_2 < 1) - 1 & param_2;
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = uVar2;
  }
  if (param_2 == uVar1) {
    return param_1 + 0x20 + param_2 * 0x18;
  }
  return 0;
}

