/* speed.exe 0082a9a0 FUN_0082a9a0; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081e4be FUN_0081e4be
 */

undefined4 __thiscall FUN_0082a9a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_2) && (param_2 < 0x4001)) {
    iVar1 = (**(code **)(*param_1 + 0x44))();
    if ((iVar1 != param_2) && (-1 < iVar1)) {
      FUN_0081bccb();
      uVar2 = FUN_0081e4be(param_1[0x45],param_2);
      FUN_0081bcd9();
      param_1[0x40] = param_2;
      *(short *)(param_1[0x3f] + 0xc) = (short)param_2;
    }
  }
  return uVar2;
}

