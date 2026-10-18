/* speed.exe 006c06a0 FUN_006c06a0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00749dc0 FUN_00749dc0
 * calls 0073d090 FUN_0073d090
 * calls 0072a900 FUN_0072a900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c06a0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e2d7;
  local_c = ExceptionList;
  _DAT_00919620 = &DAT_009877f0;
  _DAT_00919640 = &DAT_0093daf0;
  DAT_009195e8 = 1;
  DAT_00919690 = &DAT_00986870;
  DAT_009196b0 = &DAT_0093dab8;
  DAT_00919658 = 1;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x1e8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_009196b4 = (undefined4 *)0x0;
  }
  else {
    DAT_009196b4 = (undefined4 *)FUN_0072a900();
  }
  local_4 = 0xffffffff;
  *DAT_009196b4 = &DAT_00919650;
  pvVar1 = _malloc(0x5180);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    DAT_009196b8 = 0;
  }
  else {
    DAT_009196b8 = FUN_00749dc0(&DAT_00919650,0);
  }
  local_4 = 0xffffffff;
  pvVar1 = _malloc(0xc);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    DAT_009196bc = 0;
  }
  else {
    DAT_009196bc = FUN_0073d090(&DAT_00919650);
  }
  local_4 = 0xffffffff;
  DAT_00919700 = &DAT_00986b30;
  pvVar1 = _malloc(0x1e8);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    DAT_00919724 = (undefined4 *)0x0;
  }
  else {
    DAT_00919724 = (undefined4 *)FUN_0072a900();
  }
  local_4 = 0xffffffff;
  *DAT_00919724 = &DAT_009196c0;
  pvVar1 = _malloc(0x5180);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    DAT_00919728 = 0;
  }
  else {
    DAT_00919728 = FUN_00749dc0(&DAT_009196c0,0);
  }
  DAT_00919968 = 1;
  DAT_00919738 = 1;
  DAT_009197a8 = 1;
  DAT_00919c78 = 1;
  _DAT_009199a0 = &DAT_009880e0;
  _DAT_009199c0 = &DAT_0093dab8;
  _DAT_00919770 = &DAT_00983e70;
  DAT_00919790 = &DAT_0093db0c;
  _DAT_00919798 = DAT_009196b8;
  _DAT_0091979c = 0;
  DAT_00919800 = &DAT_0093dad4;
  _DAT_009197e0 = &DAT_00986870;
  DAT_00919808 = DAT_009196b8;
  DAT_00919cd0 = &DAT_0093db28;
  _DAT_00919cb0 = &DAT_00986f70;
  _DAT_00919cd8 = DAT_009196b8;
  ExceptionList = local_c;
  return;
}

