/* speed.exe 007689e0 FUN_007689e0; analysis pseudocode, not buildable source.
 * calls 00768650 FUN_00768650
 * calls 00768600 FUN_00768600
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 0045beb0 FUN_0045beb0
 * calls 00452950 FUN_00452950
 * calls 00768690 FUN_00768690
 * calls 00768670 FUN_00768670
 * calls 0045a8a0 FUN_0045a8a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007689e0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int unaff_EDI;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_3 != (float *)0x0) && (ExceptionList = &local_c, param_1 != (float *)0x0)) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    fVar2 = *param_3 * *param_1 + param_3[1] * param_1[1] + param_3[2] * param_1[2];
    fVar1 = param_3[8] * *param_1 + param_3[9] * param_1[1] + param_3[10] * param_1[2];
    if (_DAT_008910e8 <= fVar2) {
      if (fVar2 <= _DAT_00891058) {
        if (_DAT_008910e8 <= fVar1) {
          if (fVar1 <= _DAT_00891058) {
            ExceptionList = &local_c;
            iVar3 = FUN_00768670();
          }
          else {
            ExceptionList = &local_c;
            iVar3 = FUN_00768600();
          }
        }
        else {
          ExceptionList = &local_c;
          iVar3 = FUN_00768690();
        }
      }
      else {
        ExceptionList = &local_c;
        iVar3 = FUN_00768650();
      }
    }
    else {
      ExceptionList = &local_c;
      iVar3 = FUN_00454810(0x53de9f00,0);
      if (iVar3 == 0) {
        iVar3 = FUN_006269b0(0xc);
      }
    }
    FUN_0045beb0(iVar3);
    if ((local_14 != 0) && (local_18 != 0)) {
      FUN_00452950(&local_18);
      local_4 = 0xffffffff;
      if (local_10 == 0) {
        ExceptionList = local_c;
        return param_2;
      }
      FUN_0045a8a0();
      ExceptionList = local_c;
      return param_2;
    }
    local_4 = 0xffffffff;
    if (local_10 != 0) {
      FUN_0045a8a0();
    }
  }
  FUN_00452950(*(undefined4 *)(unaff_EDI + 8));
  ExceptionList = local_c;
  return param_2;
}

