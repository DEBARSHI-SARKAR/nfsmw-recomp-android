/* speed.exe 005adaf0 FUN_005adaf0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005adaf0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  if (uVar1 <= param_2) {
    *(uint *)(param_1 + 0x88) = uVar1 - 1;
    return;
  }
  *(uint *)(param_1 + 0x88) = param_2;
  return;
}

