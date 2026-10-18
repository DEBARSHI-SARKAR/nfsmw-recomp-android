/* speed.exe 007f41b3 FUN_007f41b3; analysis pseudocode, not buildable source.
 * calls 007f5e04 FUN_007f5e04
 */

void __thiscall FUN_007f41b3(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  for (; param_2 != 0; param_2 = (int)param_2 >> 8) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    *(uint *)(param_1 + 0x1c + iVar1 * 8) = param_2 & 0xff;
    uVar2 = FUN_007f5e04(param_2 & 0xff,0);
    *(undefined4 *)(param_1 + 0x20 + iVar1 * 8) = uVar2;
  }
  return;
}

