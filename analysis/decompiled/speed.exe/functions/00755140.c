/* speed.exe 00755140 FUN_00755140; analysis pseudocode, not buildable source.
 * calls 005ddec0 FUN_005ddec0
 * calls 007c4b80 FUN_007c4b80
 * calls 005dbed0 FUN_005dbed0
 * calls 00754cf0 FUN_00754cf0
 * calls 007350a0 FUN_007350a0
 * calls 00735ae0 FUN_00735ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00755140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = FUN_005dbed0(param_2);
  iVar2 = FUN_00735ae0(*(undefined4 *)(iVar1 + 8));
  iVar1 = *(int *)(iVar2 + 0x1144);
  if ((((iVar1 == 4) || (iVar1 == 6)) || (iVar1 == 0)) || (iVar1 == 5)) {
    param_2._0_1_ = 1;
  }
  else if (iVar1 == 3) {
    param_2._0_1_ = 1;
  }
  else if ((DAT_009b0fa0 < 6) || (1 < iVar1)) {
    param_2._0_1_ = 0;
    if (iVar2 == *(int *)(param_1 + 4)) {
      FUN_00754cf0(param_3,param_4,param_5);
      param_2._0_1_ = 1;
      if ((param_5 == 0xb) && (*(short *)(iVar2 + 0x1230) != 0)) {
        piVar4 = (int *)(param_1 + 8);
        iVar1 = 4;
        do {
          if ((*piVar4 != 0) && (*piVar4 != iVar2)) {
            FUN_007350a0(0,0xc);
          }
          piVar4 = piVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  else {
    param_2._0_1_ = 1;
  }
  if ((*(int *)(param_1 + 0x108) == 0) || (*(int *)(param_1 + 0x108) == 0x7fffffff)) {
    FUN_005ddec0();
    uVar3 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x108) = uVar3;
    if ((param_5 != 8) && (param_5 != 9)) {
      *(undefined4 *)(param_1 + 0x10c) = 0x41f00000;
      return (undefined1)param_2;
    }
    iVar1 = FUN_007c4b80();
    *(float *)(param_1 + 0x10c) = ((float)iVar1 + _DAT_0089096c) * _DAT_00890bf8;
  }
  return (undefined1)param_2;
}

