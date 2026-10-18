/* speed.exe 00797390 FUN_00797390; analysis pseudocode, not buildable source.
 * calls 00761a80 FUN_00761a80
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00794420 FUN_00794420
 * calls 007c5df0 _atexit
 * calls 00792300 FUN_00792300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00797390(undefined4 param_1)

{
  undefined4 local_410;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  char local_4;
  
  if ((DAT_009b5a9c & 1) == 0) {
    DAT_009b5a9c = DAT_009b5a9c | 1;
    _DAT_009b5a94 = &DAT_009b5a94;
    _DAT_009b5a98 = &DAT_009b5a94;
    _atexit((_func_4879 *)&LAB_0088f040);
  }
  local_4 = FUN_00792300(param_1,&DAT_009b5a94);
  if (local_4 == '\x01') {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    FUN_00794420(local_40c,&DAT_009b5a94);
    local_410 = 0;
    FUN_0078a3a0(&local_410,0x20);
    FUN_00761a80(local_410,local_40c);
  }
  return;
}

