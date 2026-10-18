/* speed.exe 00675eb0 FUN_00675eb0; analysis pseudocode, not buildable source.
 * calls 00674890 FUN_00674890
 */

int __fastcall FUN_00675eb0(int param_1)

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
  if (DAT_0092ca90 <= DAT_0092ca94) {
    uVar2 = (**(code **)(DAT_0092ca88 + 0xc))(DAT_0092ca94 + 1);
    FUN_00674890(uVar2);
  }
  piVar1 = (int *)(DAT_0092ca8c + DAT_0092ca94 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092ca94 = DAT_0092ca94 + 1;
    return param_1;
  }
  DAT_0092ca94 = DAT_0092ca94 + 1;
  return param_1;
}

