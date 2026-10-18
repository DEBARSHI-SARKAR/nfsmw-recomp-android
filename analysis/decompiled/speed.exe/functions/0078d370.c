/* speed.exe 0078d370 FUN_0078d370; analysis pseudocode, not buildable source.
 * calls 008436e0 FUN_008436e0
 * calls 00842e20 FUN_00842e20
 */

void __fastcall FUN_0078d370(int *param_1)

{
  undefined1 local_474 [1140];
  
  FUN_008436e0(param_1[1],local_474);
  (**(code **)(*param_1 + 0x10))(local_474);
  FUN_00842e20(param_1[1]);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

