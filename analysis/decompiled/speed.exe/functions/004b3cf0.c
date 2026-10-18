/* speed.exe 004b3cf0 FUN_004b3cf0; analysis pseudocode, not buildable source.
 * calls 00653bb0 FUN_00653bb0
 * calls 005dca00 FUN_005dca00
 * calls 005fc500 FUN_005fc500
 */

void __fastcall FUN_004b3cf0(int param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 300) = 0x96;
  *(undefined1 *)(param_1 + 0x130) = 0;
  FUN_00653bb0(0);
  FUN_00653bb0(0);
  FUN_00653bb0(0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  *(undefined2 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x134) = 24000;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x38))(param_1 + 0x40);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x40))(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x50)
  ;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x3c))(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x10)
  ;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  if (iVar2 == 1) {
    **(undefined4 **)(param_1 + 0xc) = 0x2aaa;
  }
  else if (iVar2 == 2) {
    **(undefined4 **)(param_1 + 0xc) = 0x5554;
  }
  else if (iVar2 == 3) {
    **(undefined4 **)(param_1 + 0xc) = 0x7fff;
  }
  else {
    **(undefined4 **)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (DAT_0091e000 == 0) {
    iVar2 = FUN_005dca00();
  }
  else {
    iVar2 = *(int *)(DAT_0091e000 + 0x1968);
  }
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xcc) = 0;
    return;
  }
  cVar1 = FUN_005fc500();
  *(char *)(param_1 + 0xcc) = '\x01' - (cVar1 != '\0');
  return;
}

