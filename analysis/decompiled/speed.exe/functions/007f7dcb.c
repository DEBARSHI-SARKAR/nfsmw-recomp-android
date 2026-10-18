/* speed.exe 007f7dcb FUN_007f7dcb; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 007f78e6 FUN_007f78e6
 */

int __thiscall
FUN_007f7dcb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_00404db0(param_1 + 0x78,0xc,2,&LAB_007f9b4d);
  FUN_007f78e6(param_2,0,param_3,0,0,0,0,0,param_4,param_5);
  return param_1;
}

