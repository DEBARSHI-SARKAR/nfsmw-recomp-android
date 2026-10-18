/* speed.exe 0078d2b0 FUN_0078d2b0; analysis pseudocode, not buildable source.
 * calls 008437b0 FUN_008437b0
 */

void __fastcall FUN_0078d2b0(int *param_1)

{
  undefined1 local_518 [1304];
  
  FUN_008437b0(param_1[1],local_518);
  (**(code **)(*param_1 + 4))(local_518);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

