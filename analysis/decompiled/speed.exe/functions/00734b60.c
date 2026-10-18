/* speed.exe 00734b60 FUN_00734b60; analysis pseudocode, not buildable source.
 * calls 005ca870 FUN_005ca870
 */

void __thiscall FUN_00734b60(int param_1,int *param_2)

{
  undefined1 local_c [12];
  
  FUN_005ca870(param_1 + 0x30,local_c);
  (**(code **)(*param_2 + 0x68))(param_1,local_c);
  return;
}

