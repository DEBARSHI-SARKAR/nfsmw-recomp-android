/* speed.exe 00797450 FUN_00797450; analysis pseudocode, not buildable source.
 * calls 00758e90 FUN_00758e90
 * calls 00794420 FUN_00794420
 * calls 007c5df0 _atexit
 * calls 00792300 FUN_00792300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00797450(undefined4 param_1)

{
  char cVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if ((DAT_009b5aa8 & 1) == 0) {
    DAT_009b5aa8 = DAT_009b5aa8 | 1;
    _DAT_009b5aa0 = &DAT_009b5aa0;
    _DAT_009b5aa4 = &DAT_009b5aa0;
    _atexit((_func_4879 *)&LAB_0088f050);
  }
  cVar1 = FUN_00792300(param_1,&DAT_009b5aa0);
  if (cVar1 == '\x01') {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    FUN_00794420(local_40c,&DAT_009b5aa0);
    FUN_00758e90(local_40c);
  }
  return;
}

