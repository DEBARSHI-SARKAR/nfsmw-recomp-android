/* speed.exe 007cdcd0 __cftoe2; analysis pseudocode, not buildable source.
 * calls 007ce160 __shift
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    __cftoe2
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined1 * __cftoe2(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  int local_c;
  undefined1 *local_8;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),0 < param_2);
  }
  local_8 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    local_8 = param_1 + 1;
  }
  if (0 < param_2) {
    *local_8 = local_8[1];
    local_8 = local_8 + 1;
    *local_8 = DAT_0090725c;
  }
  puVar1 = (undefined1 *)FUN_007d0bd0(local_8 + (uint)(param_5 == '\0') + param_2,"e+000");
  if (param_3 != 0) {
    *puVar1 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    local_c = param_4[1] + -1;
    if (local_c < 0) {
      local_c = -local_c;
      puVar1[1] = 0x2d;
    }
    if (99 < local_c) {
      puVar1[2] = puVar1[2] + (char)(local_c / 100);
      local_c = local_c % 100;
    }
    if (9 < local_c) {
      puVar1[3] = puVar1[3] + (char)(local_c / 10);
      local_c = local_c % 10;
    }
    puVar1[4] = puVar1[4] + (char)local_c;
  }
  return param_1;
}

