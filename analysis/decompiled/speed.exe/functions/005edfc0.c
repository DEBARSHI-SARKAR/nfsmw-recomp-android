/* speed.exe 005edfc0 FUN_005edfc0; analysis pseudocode, not buildable source.
 * calls 005ec040 FUN_005ec040
 */

undefined4 __fastcall FUN_005edfc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    return 0;
  }
  uVar1 = FUN_005ec040();
  return uVar1;
}

