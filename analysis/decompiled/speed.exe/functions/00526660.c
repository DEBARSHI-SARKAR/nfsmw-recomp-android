/* speed.exe 00526660 FUN_00526660; analysis pseudocode, not buildable source.
 * calls 00526320 FUN_00526320
 * calls 007f3eef FUN_007f3eef
 * calls 00652ad0 _malloc
 * calls 007f3d3f FUN_007f3d3f
 * calls 007f3e24 FUN_007f3e24
 * calls 004611c0 FUN_004611c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00526660(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e9e6;
  local_c = ExceptionList;
  if ((DAT_0091cca4 & 1) == 0) {
    DAT_0091cca4 = DAT_0091cca4 | 1;
    _DAT_0091cc94 = 0;
    _DAT_0091cc98 = (undefined4 *)0x0;
    _DAT_0091cc9c = 0;
    _DAT_0091cca0 = (undefined1 *)0x0;
  }
  ExceptionList = &local_c;
  if ((DAT_0091cca4 & 2) == 0) {
    DAT_0091cca4 = DAT_0091cca4 | 2;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_007f3eef();
    _DAT_0091cc88 = &DAT_0091cc8c;
    _DAT_0091cc8c = 1;
    _DAT_0091cc90 = 0;
  }
  local_4 = 0xffffffff;
  if (DAT_0091cc84 == (undefined *)0x0) {
    _DAT_0091cc94 = DAT_00910ef4;
    _DAT_0091cc98 = _malloc(0x28);
    if (_DAT_0091cc98 == (undefined4 *)0x0) {
      _DAT_0091cc98 = (undefined4 *)0x0;
    }
    else {
      *_DAT_0091cc98 = &PTR_LAB_0089cce0;
      _DAT_0091cc98[1] = 1;
      _DAT_0091cc98[3] = 0x1000;
      _DAT_0091cc98[4] = 0;
      _DAT_0091cc98[5] = 0;
      _DAT_0091cc98[6] = 0;
      _DAT_0091cc98[7] = 0;
      _DAT_0091cc98[8] = 0;
      *(undefined1 *)(_DAT_0091cc98 + 9) = 0;
    }
    pvVar1 = _malloc(0x24);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      _DAT_0091cc9c = 0;
    }
    else {
      _DAT_0091cc9c = FUN_00526320();
    }
    _DAT_0091cca0 = &LAB_00518380;
    DAT_0091cc84 = &DAT_0091cc94;
  }
  local_4 = 0xffffffff;
  *(undefined **)(param_1 + 0xd0) = &DAT_0091cc88;
  FUN_004611c0(param_1 + 0x7c,&DAT_0089cd34);
  pvVar1 = _malloc(0x4c);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007f3d3f(param_1 + 0x7c,0,0,0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_007f3e24(&DAT_0091cc94,&PTR_PTR_008f399c,uVar2);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = uVar2;
  ExceptionList = local_c;
  return;
}

