/* speed.exe 007ea050 FUN_007ea050; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 */

void FUN_007ea050(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *extraout_ECX;
  
  FUN_007e9ef0(param_1);
  *extraout_ECX = 0x7a;
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(extraout_ECX + 0x18) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(extraout_ECX + 0x1c) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x14) = uVar2;
  *(undefined4 *)(extraout_ECX + 0x10) = uVar3;
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  if (extraout_ECX + 0x20 == (undefined1 *)0x0) {
    *(undefined4 *)(extraout_ECX + 8) = 0;
    return;
  }
  *(int *)(extraout_ECX + 8) = (int)(extraout_ECX + 0x20) - (int)extraout_ECX;
  return;
}

