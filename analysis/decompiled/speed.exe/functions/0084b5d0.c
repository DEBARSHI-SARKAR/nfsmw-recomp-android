/* speed.exe 0084b5d0 FUN_0084b5d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls 0078af60 thunk_FUN_004655f0
 */

void FUN_0084b5d0(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedExchange((LONG *)(param_1 + 0x54),1);
  if (LVar1 != 0) {
    thunk_FUN_004655f0(param_1);
  }
  return;
}

