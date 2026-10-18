/* speed.exe 0070b2b0 FUN_0070b2b0; analysis pseudocode, not buildable source.
 * calls 007029c0 FUN_007029c0
 * calls 00708b70 FUN_00708b70
 */

undefined1 __thiscall
FUN_0070b2b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00708b70(param_2,param_3,param_4);
  if (200 < (*(uint *)(param_1 + 0xc) & 0xfffffffe)) {
    FUN_007029c0(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}

