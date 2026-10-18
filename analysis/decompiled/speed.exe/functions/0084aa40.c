/* speed.exe 0084aa40 FUN_0084aa40; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 */

void FUN_0084aa40(undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  FUN_0084bd60(0);
  for (param_1 = (undefined4 *)*param_1; iVar1 = DAT_009c3700, param_1 != (undefined4 *)0x0;
      param_1 = (undefined4 *)*param_1) {
    if ((((param_1[0x11] != 0) && ((code *)param_1[0x13] != (code *)0x0)) && (param_1[0x10] != -1))
       && ((uint)param_1[0x11] < DVar2 - param_1[0x10])) {
      param_1[0x10] = 0xffffffff;
      (*(code *)param_1[0x13])(param_1,0,param_1[0x12]);
      DVar2 = GetTickCount();
      param_1[0x10] = DVar2;
    }
  }
  while (iVar1 != 0) {
    DAT_009c3700 = *(int *)(iVar1 + 4);
    thunk_FUN_004655f0(iVar1);
    iVar1 = DAT_009c3700;
  }
  DAT_009c3700 = iVar1;
  FUN_0084bdf0();
  return;
}

