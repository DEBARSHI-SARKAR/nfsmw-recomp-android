/* speed.exe 007ee7aa FUN_007ee7aa; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ee7aa(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_2 + 0x80) + 0x28))(*(undefined4 *)(param_1 + 0x30));
  *(byte *)(param_1 + 0x11) = (-(cVar1 != '\0') & 3U) - 2;
  return;
}

