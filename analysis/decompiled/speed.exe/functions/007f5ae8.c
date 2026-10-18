/* speed.exe 007f5ae8 FUN_007f5ae8; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f5ae8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x74) = param_2;
  uVar1 = 0;
  if (param_2 == 1) {
    uVar1 = 10;
  }
  else if (param_2 == 2) {
    uVar1 = 0xb;
  }
  else if (param_2 == 3) {
    uVar1 = 0xc;
  }
  else if (param_2 == 4) {
    uVar1 = 0xd;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(uVar1,0);
  return;
}

