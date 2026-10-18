/* speed.exe 005c7d70 FUN_005c7d70; analysis pseudocode, not buildable source.
 * calls 005c77d0 FUN_005c77d0
 */

void __fastcall FUN_005c7d70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005c77d0(param_1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  return;
}

