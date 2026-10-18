/* speed.exe 0078c940 FUN_0078c940; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int __thiscall FUN_0078c940(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 + 0x1d1;
  do {
    iVar1 = FUN_00460d20(param_2,iVar3);
    if (iVar1 == 0) {
      return iVar2 * 0x161 + 0x110 + param_1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x161;
  } while (iVar2 < 6);
  return 0;
}

