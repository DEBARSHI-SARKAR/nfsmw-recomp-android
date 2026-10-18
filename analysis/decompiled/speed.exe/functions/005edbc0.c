/* speed.exe 005edbc0 FUN_005edbc0; analysis pseudocode, not buildable source.
 * calls 00454640 FUN_00454640
 * calls 005ec420 FUN_005ec420
 */

float10 FUN_005edbc0(undefined4 param_1)

{
  int local_4;
  
  param_1 = FUN_00454640(param_1);
  FUN_005ec420(&local_4,&param_1);
  return (float10)*(float *)(local_4 + 0x14);
}

