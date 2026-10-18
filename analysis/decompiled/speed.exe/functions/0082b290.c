/* speed.exe 0082b290 FUN_0082b290; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081d5f2 FUN_0081d5f2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0082b290(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_2) && (param_2 < 0x80)) {
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    if ((iVar1 != param_2) && (-1 < iVar1)) {
      FUN_0081bccb();
      uVar2 = FUN_0081d5f2(param_1[1],0xffffffff,(float)param_2 * _DAT_00890bf0);
      FUN_0081bcd9();
      param_1[5] = param_2;
      *(char *)param_1[0x3f] = (char)param_2;
    }
  }
  return uVar2;
}

