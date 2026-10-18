/* speed.exe 004f0990 FUN_004f0990; analysis pseudocode, not buildable source.
 * calls 004e7d30 FUN_004e7d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004f0990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x30) = param_4;
  _DAT_008efd78 = 0;
  FUN_004e7d30(param_2,param_3,param_5,1);
  return;
}

