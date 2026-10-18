/* speed.exe 0071cb10 FUN_0071cb10; analysis pseudocode, not buildable source.
 * calls 004ba9e0 FUN_004ba9e0
 * calls 005d0370 FUN_005d0370
 * calls 007159d0 FUN_007159d0
 * calls 007053d0 FUN_007053d0
 */

void __thiscall FUN_0071cb10(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x200) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x208) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x204) + 0x14))();
  if (param_2 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x20c) + 0x14))();
  }
  FUN_004ba9e0();
  FUN_007053d0();
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined4 *)(param_1 + 0x1d8) = 5;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x60) - (int)puVar1 >> 3 != 0)) {
    while ((*(int *)(param_1 + 0x5c) != 0 &&
           (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3 != 0))) {
      FUN_007159d0(*puVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar2 != 0) {
    FUN_005d0370(iVar2,(*(int *)(param_1 + 0xf4) - iVar2 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x228) = DAT_00925ae8;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 2;
  return;
}

