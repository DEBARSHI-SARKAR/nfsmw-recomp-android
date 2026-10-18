/* speed.exe 007cdec0 __cftof2; analysis pseudocode, not buildable source.
 * calls 007ce160 __shift
 * calls 007d4aa0 _memset
 */

/* Library Function - Single Match
    __cftof2
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined1 * __cftof2(undefined1 *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  size_t local_14;
  undefined1 *local_8;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar2 = *param_3, iVar1 - 1U == param_2)) {
    param_1[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = 0x30;
    (param_1 + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = 0;
  }
  local_8 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = 0x2d;
    local_8 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    __shift(local_8,1);
    *local_8 = 0x30;
    local_8 = local_8 + 1;
  }
  else {
    local_8 = local_8 + param_3[1];
  }
  if (0 < (int)param_2) {
    __shift(local_8,1);
    *local_8 = DAT_0090725c;
    if (param_3[1] < 0) {
      if (param_4 == '\0') {
        if ((int)param_2 < -param_3[1]) {
          local_14 = param_2;
        }
        else {
          local_14 = -param_3[1];
        }
        param_2 = local_14;
      }
      else {
        param_2 = -param_3[1];
      }
      __shift(local_8 + 1,param_2);
      _memset(local_8 + 1,0x30,param_2);
    }
  }
  return param_1;
}

