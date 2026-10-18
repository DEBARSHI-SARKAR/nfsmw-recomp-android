/* speed.exe 00856340 FUN_00856340; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bcf0 FUN_0084bcf0
 */

void FUN_00856340(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0084af40(*param_1);
    iVar1 = param_1[0xc];
    while (iVar1 != 0) {
      puVar2 = (undefined4 *)param_1[0xc];
      param_1[0xc] = *puVar2;
      thunk_FUN_004655f0(puVar2);
      iVar1 = param_1[0xc];
    }
    FUN_0084bcf0(param_1 + 3);
    thunk_FUN_004655f0(param_1);
  }
  return;
}

