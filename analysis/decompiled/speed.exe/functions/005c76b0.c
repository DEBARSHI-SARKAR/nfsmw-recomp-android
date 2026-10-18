/* speed.exe 005c76b0 FUN_005c76b0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005c76b0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((param_1[1] & 1) != 0) {
    uVar1 = uVar1 & 0xffff2020 | 0x2020;
  }
  return uVar1;
}

