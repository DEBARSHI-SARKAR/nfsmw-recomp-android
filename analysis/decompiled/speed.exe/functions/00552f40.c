/* speed.exe 00552f40 FUN_00552f40; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 * calls 0051fac0 FUN_0051fac0
 * calls 00530a60 FUN_00530a60
 * calls 00514fd0 FUN_00514fd0
 * calls 005b1360 FUN_005b1360
 * calls 00525050 FUN_00525050
 * calls 00524ee0 FUN_00524ee0
 * calls 005b8400 FUN_005b8400
 * calls 00516be0 FUN_00516be0
 * calls 00530660 FUN_00530660
 * calls 005488b0 FUN_005488b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00552f40(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(short *)(*(int *)(param_1 + 0x160) + 0x44) == 0) &&
     (*(short *)(*(int *)(param_1 + 0x160) + 0x70) == 0)) {
    if (param_2 == '\0') {
      if ((*(float *)(param_1 + 0x128) == _DAT_00890968) &&
         (*(float *)(param_1 + 300) == _DAT_00890968)) {
        if (*(char *)(param_1 + 0x172) != '\0') {
          FUN_00516be0(0x7e6687da,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
          *(undefined1 *)(param_1 + 0x172) = 0;
        }
        cVar1 = FUN_00530a60();
        if (cVar1 != '\0') {
          FUN_005488b0();
        }
      }
      else {
        if (*(char *)(param_1 + 0x172) == '\0') {
          FUN_00516be0(0x9f710838,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
          *(undefined1 *)(param_1 + 0x172) = 1;
        }
        FUN_00530660(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300));
        if (*(int *)(param_1 + 0x15c) != 0) {
          FUN_00524ee0(*(undefined4 *)(param_1 + 0x124),&local_8,&local_4);
          FUN_00524ee0(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 0xc),&local_10,&local_c);
          if (*(float *)(param_1 + 0x174) <=
              SQRT((local_8 - local_10) * (local_8 - local_10) +
                   (local_4 - local_c) * (local_4 - local_c))) {
            if ((*(int *)(param_1 + 0x124) != 0) && (iVar2 = FUN_005b1360(0x7efe8ff4), iVar2 != 0))
            {
              FUN_005b8400(iVar2,0);
              *(undefined4 *)(iVar2 + 0x10) = 0;
            }
            *(undefined4 *)(param_1 + 0x15c) = 0;
            FUN_005488b0();
            return;
          }
        }
      }
    }
    return;
  }
  FUN_006515d0(&local_8);
  if (local_8 == _DAT_00890968) {
    _param_2 = 1.0;
  }
  else {
    _param_2 = _DAT_0089096c / local_8;
  }
  local_20 = 0.0;
  local_1c = 0.0;
  FUN_006515d0(&local_20);
  local_20 = local_20 - _DAT_008933d4;
  local_1c = local_1c - _DAT_008933d4;
  FUN_00524ee0(*(undefined4 *)(param_1 + 0x140),&local_18,&local_14);
  FUN_00514fd0(*(undefined4 *)(param_1 + 0x140),param_1 + 0x144,param_1 + 0x148);
  local_10 = local_18 + (*(float *)(param_1 + 0x134) - local_18) * _param_2;
  local_c = local_14 + (*(float *)(param_1 + 0x138) - local_14) * _param_2;
  local_18 = local_20 * *(float *)(param_1 + 0x14c) * _param_2;
  local_14 = local_1c * *(float *)(param_1 + 0x150) * _param_2;
  local_28 = local_10 - local_18;
  local_24 = local_c - local_14;
  local_8 = local_18;
  local_4 = local_14;
  FUN_0051fac0(&local_28,&local_24);
  FUN_00525050(*(undefined4 *)(param_1 + 0x124),local_28,local_24);
  return;
}

