/* speed.exe 005bcc10 FUN_005bcc10; analysis pseudocode, not buildable source.
 * calls 0083dd50 FUN_0083dd50
 * calls 0083de40 FUN_0083de40
 * calls 005b91c0 FUN_005b91c0
 */

void __thiscall FUN_005bcc10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0083dd50(param_2);
  FUN_005b91c0(iVar1 + 1);
  FUN_0083de40(*(undefined4 *)(param_1 + 100),iVar1 + 1,param_2);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  return;
}

