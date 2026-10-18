/* speed.exe 007902d0 FUN_007902d0; analysis pseudocode, not buildable source.
 * calls 0078b8c0 FUN_0078b8c0
 */

undefined4 FUN_007902d0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0078b8c0(param_1,0);
  return *(undefined4 *)((int)((ulonglong)uVar1 >> 0x20) + -0x10 + (int)uVar1 * 4);
}

