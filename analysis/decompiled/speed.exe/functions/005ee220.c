/* speed.exe 005ee220 FUN_005ee220; analysis pseudocode, not buildable source.
 * calls 005ec420 FUN_005ec420
 */

float10 __fastcall FUN_005ee220(undefined4 *param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = *param_1;
  FUN_005ec420(&local_4,&local_8);
  return (float10)*(float *)(local_4 + 0x14);
}

