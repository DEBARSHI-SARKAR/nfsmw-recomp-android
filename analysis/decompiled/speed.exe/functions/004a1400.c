/* speed.exe 004a1400 FUN_004a1400; analysis pseudocode, not buildable source.
 * calls 0048ff00 FUN_0048ff00
 */

void __thiscall FUN_004a1400(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 8);
  if (param_2 < (int)uVar1) {
    if (param_2 < 0) {
      param_2 = 0;
    }
  }
  else {
    param_2 = uVar1 - 1;
  }
  FUN_0048ff00(0,**(undefined2 **)(*(int *)(param_1 + 0xc) + 4),*(undefined4 *)(param_1 + 0x10),
               param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

