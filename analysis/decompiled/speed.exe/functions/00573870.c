/* speed.exe 00573870 FUN_00573870; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00516c90 FUN_00516c90
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_00573870(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2c);
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 300),uVar2);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2c);
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 0x130),uVar2);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x30);
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 0x134),uVar2);
  cVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x18))(*(undefined4 *)(param_1 + 0x38));
  if (cVar1 != '\0') {
    FUN_00516c90(0xd7118934,*(undefined4 *)(param_1 + 0x10),0);
  }
  cVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(*(undefined4 *)(param_1 + 0x38));
  if (cVar1 != '\0') {
    FUN_00516c90(0xb9b17747,*(undefined4 *)(param_1 + 0x10),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x38) + 0x46) != '\0') {
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x9c7d33ff,0x1ca7c0,1);
    return;
  }
  FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x9c7d33ff,0x16a259,1);
  return;
}

