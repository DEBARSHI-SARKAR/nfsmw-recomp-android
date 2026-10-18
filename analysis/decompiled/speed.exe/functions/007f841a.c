/* speed.exe 007f841a FUN_007f841a; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081d5f2 FUN_0081d5f2
 * calls 0081bccb FUN_0081bccb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007f841a(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    uVar2 = 0;
  }
  else {
    FUN_0081bccb();
    fVar1 = (float)param_2;
    if (param_2 < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    uVar2 = FUN_0081d5f2(*(undefined4 *)(param_1 + 0xc),0xffffffff,fVar1 * _DAT_00890bf0);
    FUN_0081bcd9();
  }
  return uVar2;
}

