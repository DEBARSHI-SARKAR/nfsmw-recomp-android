/* speed.exe 00551420 FUN_00551420; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00524920 FUN_00524920
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0052ee50 FUN_0052ee50
 * calls 005b8400 FUN_005b8400
 * calls 00548440 FUN_00548440
 */

void __thiscall FUN_00551420(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_0091ca3c;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) != '\x0f') {
    if (param_2 == 1) {
      DAT_0091ca3c = DAT_0091ca3c - 1;
      if (((int)DAT_0091ca3c < 0) ||
         ((int)DAT_0091ca3c < (int)(uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0))) {
        DAT_0091ca3c = 0xf;
      }
    }
    else {
      if (param_2 != -1) {
        return;
      }
      DAT_0091ca3c = DAT_0091ca3c + 1;
      if (0xf < (int)DAT_0091ca3c) {
        DAT_0091ca3c = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
      }
    }
    if (uVar1 != DAT_0091ca3c) {
      if (param_2 == 1) {
        if ((((*(int *)(param_1 + 0x10) != 0) &&
             (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
            (iVar2 = FUN_005b8550(0xc1f62308), iVar2 != 0)) &&
           (iVar2 = FUN_005b1360(0xaf9d73f2), iVar2 != 0)) {
          FUN_005b8400(iVar2,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
      }
      else if (param_2 == -1) {
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xc1f62308,0x9e5e6b5f,1);
      }
      FUN_00548440(DAT_0091ca3c,*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),0)
      ;
      FUN_0052ee50();
    }
  }
  return;
}

