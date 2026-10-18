/* speed.exe 00591ab0 FUN_00591ab0; analysis pseudocode, not buildable source.
 * calls 005913f0 FUN_005913f0
 * calls 00466340 FUN_00466340
 */

void FUN_00591ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00466340(DAT_0091cf9c);
  if (iVar1 != 0) {
    uVar2 = FUN_005913f0(param_1,param_2);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

