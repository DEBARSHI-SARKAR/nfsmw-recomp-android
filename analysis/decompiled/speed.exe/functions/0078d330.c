/* speed.exe 0078d330 FUN_0078d330; analysis pseudocode, not buildable source.
 * calls 008438f0 FUN_008438f0
 */

void __fastcall FUN_0078d330(int *param_1)

{
  undefined1 local_924 [2340];
  
  FUN_008438f0(param_1[1],local_924);
  (**(code **)(*param_1 + 0xc))(local_924);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

