/* speed.exe 006bc660 FUN_006bc660; analysis pseudocode, not buildable source.
 * calls 004fd2c0 FUN_004fd2c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bc660(int param_1,undefined4 param_2)

{
  FUN_004fd2c0(param_2,(float)(int)*(short *)(param_1 + 0x5a) * _DAT_008a8db4,
               (int)*(char *)(param_1 + 0x52),(float)(int)*(short *)(param_1 + 0x58) * _DAT_008ae820
              );
  return;
}

