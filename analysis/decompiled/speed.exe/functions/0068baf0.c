/* speed.exe 0068baf0 FUN_0068baf0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0068baf0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_retaddr;
  
  (**(code **)(*param_1 + 0x5c))(param_3);
  (**(code **)(*param_1 + 0x70))(unaff_retaddr);
  (**(code **)(*param_1 + 100))(&DAT_008a2fb4);
  (**(code **)(*param_1 + 0x60))(&DAT_008a2fb4);
  return;
}

