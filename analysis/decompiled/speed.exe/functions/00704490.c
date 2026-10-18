/* speed.exe 00704490 FUN_00704490; analysis pseudocode, not buildable source.
 * calls 006ed200 FUN_006ed200
 * calls 00627320 FUN_00627320
 * calls 004cb460 FUN_004cb460
 * calls 00456050 FUN_00456050
 * calls 0045a760 FUN_0045a760
 * calls 007c5df0 _atexit
 * calls 006fe680 FUN_006fe680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00704490(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fa0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004cb460(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  uVar4 = 0;
  if (iVar2 != 0) {
    if ((DAT_00993f1c & 1) == 0) {
      DAT_00993f1c = DAT_00993f1c | 1;
      local_4 = 0;
      FUN_006fe680(0,0,0);
      _atexit((_func_4879 *)&LAB_0088eb40);
      local_4 = 0xffffffff;
    }
    if (DAT_00993f0c == 0) {
      uVar3 = FUN_00456050(0xbc683501,0);
      FUN_0045a760(uVar3);
    }
    FUN_006ed200();
    iVar2 = FUN_00627320();
    fVar1 = _DAT_00890980 * (float)iVar2;
    uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_00901bc0) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_00901bc0)) << 10 |
                          (ushort)(fVar1 == _DAT_00901bc0) << 0xe);
    if (fVar1 < _DAT_00901bc0 == (fVar1 == _DAT_00901bc0)) {
      ExceptionList = local_c;
      return uVar4;
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar4 >> 8),1);
}

