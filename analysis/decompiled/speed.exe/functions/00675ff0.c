/* speed.exe 00675ff0 FUN_00675ff0; analysis pseudocode, not buildable source.
 * calls 00674d90 FUN_00674d90
 */

int __fastcall FUN_00675ff0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0xd0;
  }
  if (DAT_009357c0 <= DAT_009357c4) {
    uVar2 = (**(code **)(DAT_009357b8 + 0xc))(DAT_009357c4 + 1);
    FUN_00674d90(uVar2);
  }
  piVar1 = (int *)(DAT_009357bc + DAT_009357c4 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_009357c4 = DAT_009357c4 + 1;
    return param_1;
  }
  DAT_009357c4 = DAT_009357c4 + 1;
  return param_1;
}

