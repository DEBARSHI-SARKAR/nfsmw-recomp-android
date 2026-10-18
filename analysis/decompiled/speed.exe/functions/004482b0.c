/* speed.exe 004482b0 FUN_004482b0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 0049fcf0 FUN_0049fcf0
 */

void __thiscall FUN_004482b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    *param_3 = 0x3f800000;
    param_3[5] = 0x3f800000;
    param_3[10] = 0x3f800000;
    param_3[0xf] = 0x3f800000;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x18))(param_2,uVar2,0);
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(param_2,uVar2,0);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(param_2,uVar2,0);
  }
  FUN_0049fcf0(uVar2,iVar1,0);
  FUN_00444fe0(param_3,iVar1 + 0x40);
  return;
}

