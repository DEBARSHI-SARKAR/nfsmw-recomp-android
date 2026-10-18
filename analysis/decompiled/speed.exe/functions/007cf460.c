/* speed.exe 007cf460 __powhlp; analysis pseudocode, not buildable source.
 * calls 007cf660 __d_inttype
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __powhlp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __powhlp(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  int iVar1;
  double local_30;
  double local_28;
  double local_20;
  undefined4 local_8;
  
  local_8 = 0;
  if (_DAT_008942e0 <= (double)CONCAT44(param_2,param_1)) {
    local_20 = (double)CONCAT44(param_2,param_1);
  }
  else {
    local_20 = -(double)CONCAT44(param_2,param_1);
  }
  if ((param_4 == 0x7ff00000) && (param_3 == 0)) {
    if (local_20 <= _DAT_008942e8) {
      if (_DAT_008942e8 <= local_20) {
        *param_5 = _DAT_00906ec8;
        local_8 = 1;
      }
      else {
        *param_5 = _DAT_008942e0;
      }
    }
    else {
      *param_5 = _DAT_00906ec0;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    if (local_20 <= _DAT_008942e8) {
      if (_DAT_008942e8 <= local_20) {
        *param_5 = _DAT_00906ec8;
        local_8 = 1;
      }
      else {
        *param_5 = _DAT_00906ec0;
      }
    }
    else {
      *param_5 = _DAT_008942e0;
    }
  }
  else if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    if ((double)CONCAT44(param_4,param_3) <= _DAT_008942e0) {
      if (_DAT_008942e0 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = _DAT_008942e8;
      }
      else {
        *param_5 = _DAT_008942e0;
      }
    }
    else {
      *param_5 = _DAT_00906ec0;
    }
  }
  else if ((param_2 == -0x100000) && (param_1 == 0)) {
    iVar1 = __d_inttype(CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= _DAT_008942e0) {
      if (_DAT_008942e0 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = _DAT_008942e8;
      }
      else {
        if (iVar1 == 1) {
          local_30 = _DAT_00906ee0;
        }
        else {
          local_30 = _DAT_008942e0;
        }
        *param_5 = local_30;
      }
    }
    else {
      if (iVar1 == 1) {
        local_28 = -_DAT_00906ec0;
      }
      else {
        local_28 = _DAT_00906ec0;
      }
      *param_5 = local_28;
    }
  }
  return local_8;
}

