/* speed.exe 00738960 FUN_00738960; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00738960(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((-1 < param_2) && (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) && (param_2 < 0x4d)) {
    uVar3 = *(uint *)(iVar1 + 0xb84 + (param_2 * 5 + *(int *)(iVar1 + 0x1628)) * 4) & 0xfffffffc;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)(uVar3 + 8);
    }
  }
  return uVar2;
}

