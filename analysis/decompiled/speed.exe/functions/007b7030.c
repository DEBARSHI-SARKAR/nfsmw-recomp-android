/* speed.exe 007b7030 FUN_007b7030; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 007b59e0 FUN_007b59e0
 * calls 005816b0 FUN_005816b0
 * calls 0056f100 FUN_0056f100
 */

void FUN_007b7030(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar3 = param_1;
  uVar1 = FUN_005816b0(param_1);
  iVar2 = FUN_0056f250(uVar1,uVar3);
  if (iVar2 != 0) {
    FUN_007b59e0(param_1);
  }
  return;
}

