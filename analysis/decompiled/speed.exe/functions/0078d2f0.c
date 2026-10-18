/* speed.exe 0078d2f0 FUN_0078d2f0; analysis pseudocode, not buildable source.
 * calls 00843dd0 FUN_00843dd0
 */

void __fastcall FUN_0078d2f0(int *param_1)

{
  undefined1 local_600 [1536];
  
  FUN_00843dd0(param_1[1],local_600);
  (**(code **)(*param_1 + 8))(local_600);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

