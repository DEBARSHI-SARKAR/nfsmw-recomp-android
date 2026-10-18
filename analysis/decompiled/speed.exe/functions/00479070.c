/* speed.exe 00479070 FUN_00479070; analysis pseudocode, not buildable source.
 * calls 00478e50 FUN_00478e50
 */

int __fastcall FUN_00479070(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -8;
  }
  if (DAT_0091131c <= DAT_00911320) {
    uVar2 = (**(code **)(DAT_00911314 + 0xc))(DAT_00911320 + 1);
    FUN_00478e50(uVar2);
  }
  piVar1 = (int *)(DAT_00911318 + DAT_00911320 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_00911320 = DAT_00911320 + 1;
    return param_1;
  }
  DAT_00911320 = DAT_00911320 + 1;
  return param_1;
}

