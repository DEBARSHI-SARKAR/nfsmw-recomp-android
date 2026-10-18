/* speed.exe 005f7730 FUN_005f7730; analysis pseudocode, not buildable source.
 * calls 005f62f0 FUN_005f62f0
 * calls 005e4b10 FUN_005e4b10
 * calls 005f4d40 FUN_005f4d40
 * calls 005e6020 FUN_005e6020
 * calls 005e5c10 FUN_005e5c10
 * calls 005f4fa0 FUN_005f4fa0
 */

void __fastcall FUN_005f7730(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x130) + 4));
  *(int *)(*(int *)(param_1 + 0x130) + 4) = *(int *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(int *)(*(int *)(param_1 + 0x130) + 8) = *(int *)(param_1 + 0x130);
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4));
  *(int *)(*(int *)(param_1 + 0x13c) + 4) = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(int *)(*(int *)(param_1 + 0x13c) + 8) = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
  FUN_005f62f0();
  FUN_005f4d40();
  FUN_005f4fa0();
  puVar2 = (undefined4 *)(param_1 + 0x264);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_005e4b10();
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_005e5c10();
  return;
}

