/* speed.exe 005eeb90 FUN_005eeb90; analysis pseudocode, not buildable source.
 * calls 005ed9c0 FUN_005ed9c0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_005eeb90(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x4d) & 2) != 0) {
    FUN_005ed9c0(param_1);
    *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xfd;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    piVar1 = (int *)0x0;
    if ((~*(byte *)(param_1 + 0x4d) & 1) != 0) {
      piVar1 = (int *)FUN_005d59f0(&LAB_00402830);
    }
    (**(code **)(*(int *)(param_1 + 0x28) + 8))(*(undefined4 *)(param_1 + 0x6c));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}

