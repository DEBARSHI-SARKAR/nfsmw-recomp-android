/* speed.exe 0078c900 FUN_0078c900; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined1 __thiscall FUN_0078c900(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  param_1 = param_1 + 0x1d1;
  iVar3 = 6;
  do {
    iVar1 = FUN_00460d20(param_2,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    param_1 = param_1 + 0x161;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

