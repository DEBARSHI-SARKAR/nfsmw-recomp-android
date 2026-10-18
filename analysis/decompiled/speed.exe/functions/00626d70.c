/* speed.exe 00626d70 FUN_00626d70; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00626d70(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)*(int *)(param_1 + 0x268) >> 8);
  if (*(int *)(param_1 + 0x268) < 0) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,*(undefined1 *)(param_1 + 0x280));
}

