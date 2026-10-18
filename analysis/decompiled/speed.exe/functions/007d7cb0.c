/* speed.exe 007d7cb0 ___libm_error_support; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007cb270 FUN_007cb270
 * calls 007e4df0 __matherr
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___libm_error_support
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54;
  char *local_50;
  double local_4c;
  undefined8 local_44;
  double local_3c;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0xf0;
  local_21 = 0x7f;
  local_20 = 0xff;
  local_1f = 0xff;
  local_1e = 0xff;
  local_1d = 0xff;
  local_1c = 0xff;
  local_1b = 0xff;
  local_1a = 0xef;
  local_19 = 0x7f;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0;
  local_14 = 0;
  local_13 = 0;
  local_12 = 0;
  local_11 = 0;
  local_10 = 0xff;
  local_f = 0xff;
  local_e = 0xff;
  local_d = 0xff;
  local_c = 0xff;
  local_b = 0xff;
  local_a = 0xef;
  local_9 = 0xff;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0x80;
  if (param_4 < 0xa2) {
    if (param_4 == 0xa1) {
      local_54 = 3;
      local_50 = "exp2";
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x22;
      }
      *param_3 = local_3c;
    }
    else {
      switch(param_4) {
      case 2:
        local_54 = 2;
        local_50 = "log";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
        break;
      case 3:
        local_54 = 1;
        local_50 = "log";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x21;
        }
        *param_3 = local_3c;
        break;
      case 8:
        local_54 = 2;
        local_50 = "log10";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
        break;
      case 9:
        local_54 = 1;
        local_50 = "log10";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x21;
        }
        *param_3 = local_3c;
        break;
      case 0xe:
        local_54 = 3;
        local_50 = "exp";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
        break;
      case 0xf:
        local_54 = 4;
        local_50 = "exp";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        (*(code *)PTR___matherr_00906cd0)(&local_54);
        *param_3 = local_3c;
        break;
      case 0x18:
        local_54 = 3;
        local_50 = "pow";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
        break;
      case 0x19:
        local_54 = 4;
        local_50 = "pow";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        (*(code *)PTR___matherr_00906cd0)(&local_54);
        *param_3 = local_3c;
        break;
      case 0x1a:
        *param_3 = _DAT_008942e8;
        break;
      case 0x1b:
        local_54 = 2;
        local_50 = "pow";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
        break;
      case 0x1c:
        local_54 = 1;
        local_50 = "pow";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x21;
        }
        *param_3 = local_3c;
        break;
      case 0x1d:
        local_54 = 1;
        local_50 = "pow";
        *param_3 = *param_1 * _DAT_008942e8;
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x21;
        }
        *param_3 = local_3c;
      }
    }
  }
  else if (param_4 < 0x3eb) {
    if (param_4 == 0x3ea) {
      local_54 = 1;
      local_50 = "exp";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
    }
    else if (param_4 < 0xac) {
      if (param_4 == 0xab) {
        local_54 = 1;
        local_50 = "log2";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x21;
        }
        *param_3 = local_3c;
      }
      else if (param_4 == 0xa2) {
        local_54 = 4;
        local_50 = "exp2";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
      }
      else if (param_4 == 0xa6) {
        local_54 = 3;
        local_50 = "exp10";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
      }
      else if (param_4 == 0xaa) {
        local_54 = 2;
        local_50 = "log2";
        local_4c = *param_1;
        local_44 = *param_2;
        local_3c = *param_3;
        iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x22;
        }
        *param_3 = local_3c;
      }
    }
    else if (param_4 == 1000) {
      local_54 = 1;
      local_50 = "log";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
    }
    else if (param_4 == 0x3e9) {
      local_54 = 1;
      local_50 = "log10";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
    }
  }
  else {
    switch(param_4 + -0x3eb) {
    case 0:
      local_54 = 1;
      local_50 = "atan";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
      break;
    case 1:
      local_54 = 1;
      local_50 = "ceil";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
      break;
    case 2:
      local_54 = 1;
      local_50 = "floor";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
      break;
    case 3:
      local_54 = 1;
      local_50 = "pow";
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
      break;
    case 4:
      local_54 = 1;
      local_50 = "modf";
      *param_3 = *param_1 * _DAT_008942e8;
      local_4c = *param_1;
      local_44 = *param_2;
      local_3c = *param_3;
      iVar1 = (*(code *)PTR___matherr_00906cd0)(&local_54,param_4 + -0x3eb,0,0);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0x21;
      }
      *param_3 = local_3c;
    }
  }
  return;
}

