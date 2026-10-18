/* speed.exe 0082b3e0 FUN_0082b3e0; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081d0e6 FUN_0081d0e6
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 __thiscall FUN_0082b3e0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((0x7ff < param_2) && (param_2 < 0x2001)) {
    iVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((iVar1 != param_2) && ((-1 < param_2 && (-1 < iVar1)))) {
      FUN_0081bccb();
      uVar2 = FUN_0081d0e6(param_1[1],param_2);
      FUN_0081bcd9();
      *(short *)(param_1[0x3f] + 0xe) = (short)param_2;
    }
  }
  return uVar2;
}

