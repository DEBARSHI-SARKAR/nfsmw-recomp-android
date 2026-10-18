/* speed.exe 006bdd20 FUN_006bdd20; analysis pseudocode, not buildable source.
 * calls 006bdb50 FUN_006bdb50
 * calls 007e7d5e D3DXMatrixMultiply
 */

void FUN_006bdd20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_50 [76];
  
  FUN_006bdb50(local_50,param_3);
  D3DXMatrixMultiply(param_1,param_2,local_50);
  return;
}

