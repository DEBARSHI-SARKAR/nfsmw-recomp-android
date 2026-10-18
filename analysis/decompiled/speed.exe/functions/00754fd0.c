/* speed.exe 00754fd0 FUN_00754fd0; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 005e8b20 FUN_005e8b20
 * calls 00627400 FUN_00627400
 * calls 00736100 FUN_00736100
 * calls 00734fe0 FUN_00734fe0
 * calls 007c4b80 FUN_007c4b80
 * calls 00625870 FUN_00625870
 * calls 0078b2c0 FUN_0078b2c0
 * calls 00754cf0 FUN_00754cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00754fd0(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00880f0f;
  local_c = ExceptionList;
  if (DAT_0091e000 != 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x1260) = 0;
    *(undefined4 *)(param_1 + 0x1264) = 0xbf800000;
    if (DAT_0092d884 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*DAT_0092d87c;
    }
    uVar3 = (**(code **)(*piVar6 + 4))();
    iVar4 = FUN_005e8b20(uVar3);
    iVar5 = FUN_00736100();
    if (((iVar5 == 0) && (DAT_009b10a8 != 0)) && (DAT_009b10a8 != 0x7fffffff)) {
      FUN_0078b2c0();
      iVar5 = FUN_007c4b80();
      fVar1 = _DAT_009b10ac - (float)(iVar5 - DAT_009b10a8) * _DAT_00890984;
      *(float *)(param_1 + 0x1264) = fVar1;
      if (((fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) && (*(char *)(iVar4 + 0x21) == '\0'))
         && (cVar2 = FUN_00734fe0(), cVar2 == '\0')) {
        cVar2 = FUN_00516b50("Pause_Main.fng");
        if (cVar2 != '\0') {
          iVar5 = FUN_00627400(8);
          uStack_4 = 0;
          if (iVar5 != 0) {
            FUN_00625870();
          }
          uStack_4 = 0xffffffff;
        }
        FUN_00754cf0(*(undefined4 *)(iVar4 + 0x10),0,0xb);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

