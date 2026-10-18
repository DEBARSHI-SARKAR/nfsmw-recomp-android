/* speed.exe 006b1350 FUN_006b1350; analysis pseudocode, not buildable source.
 * calls 00674970 FUN_00674970
 */

int __fastcall FUN_006b1350(int param_1)

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
  if (DAT_0092fe58 <= DAT_0092fe5c) {
    uVar2 = (**(code **)(DAT_0092fe50 + 0xc))(DAT_0092fe5c + 1);
    FUN_00674970(uVar2);
  }
  piVar1 = (int *)(DAT_0092fe54 + DAT_0092fe5c * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fe5c = DAT_0092fe5c + 1;
    return param_1;
  }
  DAT_0092fe5c = DAT_0092fe5c + 1;
  return param_1;
}

