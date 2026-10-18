/* speed.exe 00575e50 FUN_00575e50; analysis pseudocode, not buildable source.
 * calls 004647e0 FUN_004647e0
 */

void __thiscall FUN_00575e50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [32];
  
  FUN_004647e0(local_20,0x20,"LEFT_%s",param_3);
  (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(param_2,local_20);
  FUN_004647e0(&stack0xffffffd8,0x20,"RIGHT_%s",param_3);
  (**(code **)(*(int *)(param_1 + 0x9c) + 0xc))(param_2,&stack0xffffffd8);
  return;
}

