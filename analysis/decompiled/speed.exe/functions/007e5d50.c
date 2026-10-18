/* speed.exe 007e5d50 ___mtold12; analysis pseudocode, not buildable source.
 * calls 007e5bd0 ___add_12
 * calls 007d6cb0 __security_check_cookie
 * calls 007e5c80 ___shl_12
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___mtold12
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  short local_8;
  
  local_c = DAT_00906980;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_18 = *param_3;
    local_14 = param_3[1];
    local_10 = param_3[2];
    ___shl_12(param_3);
    ___shl_12(param_3);
    ___add_12(param_3,&local_18);
    ___shl_12(param_3);
    local_18 = (uint)*param_1;
    local_14 = 0;
    local_10 = 0;
    ___add_12(param_3,&local_18);
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
    local_8 = local_8 + -0x10;
  }
  while ((param_3[2] & 0x8000) == 0) {
    ___shl_12(param_3);
    local_8 = local_8 + -1;
  }
  *(short *)((int)param_3 + 10) = local_8;
  return;
}

