/* speed.exe 004a1440 FUN_004a1440; analysis pseudocode, not buildable source.
 * calls 004909f0 FUN_004909f0
 */

void __thiscall FUN_004a1440(int param_1,int param_2,undefined4 param_3)

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
  FUN_004909f0(param_3,*(undefined4 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

