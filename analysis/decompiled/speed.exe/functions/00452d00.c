/* speed.exe 00452d00 FUN_00452d00; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00452d00(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((puVar1 != (undefined4 *)0x0) &&
     (((*(byte *)((int)puVar1 + 0xb) & 0x10) != 0 || ((undefined4 *)puVar1[1] != puVar1)))) {
    return *puVar1;
  }
  return 0;
}

