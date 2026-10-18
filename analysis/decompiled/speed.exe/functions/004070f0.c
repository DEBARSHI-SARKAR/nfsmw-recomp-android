/* speed.exe 004070f0 FUN_004070f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004070f0(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x24))(0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
  *(char *)(param_1 + 0x54) = '\x01' - (iVar1 != 0);
  return;
}

