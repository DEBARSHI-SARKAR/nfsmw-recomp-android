/* speed.exe 0078d3c0 FUN_0078d3c0; analysis pseudocode, not buildable source.
 * calls 00843fa0 FUN_00843fa0
 */

void __fastcall FUN_0078d3c0(int *param_1)

{
  undefined4 uVar1;
  undefined1 local_11c [284];
  
  uVar1 = FUN_00843fa0(param_1[1],local_11c);
  (**(code **)(*param_1 + 0x14))(uVar1,local_11c);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

