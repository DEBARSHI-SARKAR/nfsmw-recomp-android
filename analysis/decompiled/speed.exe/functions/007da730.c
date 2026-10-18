/* speed.exe 007da730 __handle_exc; analysis pseudocode, not buildable source.
 * calls 007dac40 FUN_007dac40
 * calls 007d9e70 __decomp
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  float10 fVar4;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  undefined8 local_1c;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          local_c = (uint)((param_1 & 0x10) != 0);
          if (*param_2 == _DAT_008942e0) {
            local_c = 1;
          }
          else {
            fVar4 = (float10)__decomp(*param_2,&local_10);
            dVar1 = (double)fVar4;
            local_14 = local_10 + -0x600;
            if (local_14 < -0x432) {
              local_1c = dVar1 * _DAT_008942e0;
              local_c = 1;
            }
            else {
              local_1c = (double)((ulonglong)dVar1 & 0xfffffffffffff);
              local_1c = (double)((ulonglong)local_1c | 0x10000000000000);
              for (; local_14 < -0x3fd; local_14 = local_14 + 1) {
                if ((((ulonglong)local_1c & 1) != 0) && (local_c == 0)) {
                  local_c = 1;
                }
                uVar3 = (uint)local_1c >> 1;
                uVar2 = (ulonglong)local_1c & 0x100000000;
                local_1c._0_4_ = uVar3;
                if (uVar2 != 0) {
                  local_1c._0_4_ = uVar3 | 0x80000000;
                }
                local_1c = (double)CONCAT44(local_1c._4_4_ >> 1,(uint)local_1c);
              }
              if (dVar1 < _DAT_008942e0) {
                local_1c = -local_1c;
              }
            }
            *param_2 = local_1c;
          }
          if (local_c != 0) {
            FUN_007dac40(0x10);
          }
          local_8 = local_8 & 0xfffffffd;
        }
      }
      else {
        FUN_007dac40(8);
        uVar3 = param_3 & 0xc00;
        if (uVar3 < 0x801) {
          if (uVar3 == 0x800) {
            if (*param_2 <= _DAT_008942e0) {
              local_34 = -_DAT_00906ed0;
            }
            else {
              local_34 = _DAT_00906ec0;
            }
            *param_2 = local_34;
          }
          else if (uVar3 == 0) {
            if (*param_2 <= _DAT_008942e0) {
              local_2c = -_DAT_00906ec0;
            }
            else {
              local_2c = _DAT_00906ec0;
            }
            *param_2 = local_2c;
          }
          else if (uVar3 == 0x400) {
            if (*param_2 <= _DAT_008942e0) {
              local_3c = -_DAT_00906ec0;
            }
            else {
              local_3c = _DAT_00906ed0;
            }
            *param_2 = local_3c;
          }
        }
        else if (uVar3 == 0xc00) {
          if (*param_2 <= _DAT_008942e0) {
            local_44 = -_DAT_00906ed0;
          }
          else {
            local_44 = _DAT_00906ed0;
          }
          *param_2 = local_44;
        }
        local_8 = local_8 & 0xfffffffe;
      }
    }
    else {
      FUN_007dac40(4);
      local_8 = local_8 & 0xfffffffb;
    }
  }
  else {
    FUN_007dac40(1);
    local_8 = local_8 & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_007dac40(0x20);
    local_8 = local_8 & 0xffffffef;
  }
  return local_8 == 0;
}

