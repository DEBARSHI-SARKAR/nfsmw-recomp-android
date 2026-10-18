/* speed.exe 0046fb00 FUN_0046fb00; analysis pseudocode, not buildable source.
 * calls 00478db0 FUN_00478db0
 */

int __fastcall FUN_0046fb00(int param_1)

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
  if (DAT_00911304 <= DAT_00911308) {
    uVar2 = (**(code **)(DAT_009112fc + 0xc))(DAT_00911308 + 1);
    FUN_00478db0(uVar2);
  }
  piVar1 = (int *)(DAT_00911300 + DAT_00911308 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_00911308 = DAT_00911308 + 1;
    return param_1;
  }
  DAT_00911308 = DAT_00911308 + 1;
  return param_1;
}

